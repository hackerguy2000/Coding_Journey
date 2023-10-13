#include <bits/stdc++.h>
#include <string>
#include "bcrypt.h"
#include "aes.h"
#include "rand.h"
#include <vector>
#include <iomanip>

using namespace std;

class User {
private:
    int userid;
    string passwordHash;        // Store the hashed password.
    vector<unsigned char> encryptionKey; // Store the symmetric encryption key.

public:
    void setUserId(int uid) {
        userid = uid;
    }

    // Set the password by hashing it.
    void setPassword(const string& pass) {
        // Generate a salt (you can customize the cost factor).
        string salt = BCrypt::generateSalt(12); // Cost factor 12

        // Hash the password with the generated salt.
        passwordHash = BCrypt::hashPassword(pass, salt);

        // Generate an encryption key from the password.
        encryptionKey.resize(AES_BLOCK_SIZE);
        RAND_bytes(encryptionKey.data(), AES_BLOCK_SIZE);
    }

    int getUserId() const {
        return userid;
    }

    // Encrypt a plaintext message.
    string encrypt(const string& plaintext) const {
        vector<unsigned char> iv(AES_BLOCK_SIZE);
        RAND_bytes(iv.data(), AES_BLOCK_SIZE);

        AES_KEY aesKey;
        AES_set_encrypt_key(encryptionKey.data(), 256, &aesKey);

        vector<unsigned char> ciphertext(plaintext.size() + AES_BLOCK_SIZE);
        AES_cbc_encrypt(reinterpret_cast<const unsigned char*>(plaintext.c_str()), ciphertext.data(),
            plaintext.size(), &aesKey, iv.data(), AES_ENCRYPT);

        // Combine IV and ciphertext.
        string encryptedData(iv.begin(), iv.end());
        encryptedData += string(ciphertext.begin(), ciphertext.begin() + plaintext.size() + AES_BLOCK_SIZE);

        return encryptedData;
    }

    // Decrypt an encrypted message.
    string decrypt(const string& encryptedData) const {
        vector<unsigned char> iv(encryptedData.begin(), encryptedData.begin() + AES_BLOCK_SIZE);
        string ciphertext(encryptedData.begin() + AES_BLOCK_SIZE, encryptedData.end());

        AES_KEY aesKey;
        AES_set_decrypt_key(encryptionKey.data(), 256, &aesKey);

        vector<unsigned char> plaintext(ciphertext.size());
        AES_cbc_encrypt(reinterpret_cast<const unsigned char*>(ciphertext.c_str()), plaintext.data(),
            ciphertext.size(), &aesKey, iv.data(), AES_DECRYPT);

        return string(plaintext.begin(), plaintext.end());
    }

    // Verify if a given plaintext password matches the stored hashed password.
    bool verifyPassword(const string& pass) const {
        return BCrypt::validatePassword(pass, passwordHash);
    }

    // Get the hashed password.
    string getPasswordHash() const {
        return passwordHash;
    }
};

int main() {
    User u1, u2;

    u1.setUserId(1300);
    u1.setPassword("shawrahul");

    cout << "User ID: " << u1.getUserId() << endl;

    // Print the password after salting and hashing.
    cout << "Password after salting and hashing: " << u1.getPasswordHash() << endl;

    // Prompt for a password and verify it.
    string inputPassword;
    cout << "Enter password to verify: ";
    cin >> inputPassword;

    if (u1.verifyPassword(inputPassword)) {
        cout << "Password is correct!" << endl;
    } else {
        cout << "Password is incorrect!" << endl;
    }

    // Encrypt and decrypt a message.
    string message = "Hello, world!";
    string encryptedMessage = u1.encrypt(message);
    string decryptedMessage = u1.decrypt(encryptedMessage);

    cout << "Original Message: " << message << endl;

    // Print the encrypted message.
    cout << "Encrypted Message: ";
    for (char c : encryptedMessage) {
        cout << hex << setw(2) << setfill('0') << static_cast<int>(c);
    }
    cout << endl;

    cout << "Decrypted Message: " << decryptedMessage << endl;

    return 0;
}
