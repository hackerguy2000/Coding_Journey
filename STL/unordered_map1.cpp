#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> umap; // keyvalue of umap is type of string and the mapped value is of type integer
    unordered_map<string, int>::iterator itr;
    umap["GeeksforGeeks"] = 12;
    umap["RahulShaw"] = 20;
    umap["Techno_Main"] = 99;
    umap["saltLake"] = 101;
    cout << "String Key"
         << "  "
         << "Mapped Element" << endl;
    for (auto i : umap) // iteration technique
    {
        cout << i.first << "     " << i.second << endl;
    }
    cout << "visiting umap from Iterator" << endl;
    for (auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout << itr->first << "   " << itr->second << endl;
    }

    return 0;
}