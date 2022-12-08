#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout << "Enter plain text";
	getline(cin,s);
	int k;
	string temp;
	cout << "Enter key";
	cin >> k;
	for(int i=0;i< s.length();i++)
   {
         if(s[i]!=' ')
		 {
			 temp+=s[i];
		}
   }
   s=temp;
   
   for(int i=0l;i<s.length();i++)
   {
   	int val=s[i]-'a';
   	val=(val+k)%26;
   	char ch='a'+val;
   	  s[i]=ch;
   }
   
   
   
   cout << "encrypted  ceaser text is";
   cout << s;
   	for(int i=0;i< s.length();i++)
   {
   	  	int val=s[i]-'a';
   	val=(val-k)%26;
   	char ch='a'+val;
   	  s[i]=ch;
	} 
   cout << "\n decrypted text is";
   cout << s;
   	return 0;
}
