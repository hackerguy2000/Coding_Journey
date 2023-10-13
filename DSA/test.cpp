#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int T;
	int N;

	cin>>T;
	int i;
	while(T--)
	{
	    cin>>N;
	    string S="";
	 	string A;
	string B;
	cin>>A;
	cin>>B;
	    sort(A.begin(),A.end());
	     sort(B.begin(),B.end(),greater<char>());
	        for(int j=0;j<N;j++)
	        {
	            S=S+A[j];
	            S=S+B[j];
	        }
	        cout<<S<<endl;
	}
	
	return 0;
}