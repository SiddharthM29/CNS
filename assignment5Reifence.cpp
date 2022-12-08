//RailFence ciper

#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}




int main()
{
	//file();

	string s;
	cout << "Enter plain text" << endl;

	getline(cin, s);

	string x;
	for (int i = 0; i < s.length(); i++)
		if (s[i] != ' ')
			x += s[i];
	s = x;

	int k;
	cout << "Enter key" << endl;
	cin >> k;


	cout << "\nPlain text is: " << s << endl;
	cout << "Key is: " << k << endl;

	int n = s.length();
	vector<vector<char> > mat(n);
	int row = 0;
	for (int i = 0; i < s.length(); i++)
	{
		mat[row].push_back(s[i]);
		row++;
		row = row % k;
	}

	string cip = "";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < mat[i].size(); j++)
			cip += mat[i][j];
	}

	s = cip;
	cout << "\nCipher text is: " << s;


	vector< vector<char> > mat2(n);
	int fixS = n / k;
	int varS = n % k;

	row = 0;
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		if (cnt == 0)
		{
			row = 0;
			cnt = fixS;
			if (varS > 0)
			{
				cnt++;
				varS--;
			}
		}
		cnt--;
		mat2[row].push_back(s[i]);
		row++;
	}


	string plain = "";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < mat2[i].size(); j++)
			plain += mat2[i][j];
	}

	cout << "\n\nPlain text after decription is: " << plain;


	return 0;
}
