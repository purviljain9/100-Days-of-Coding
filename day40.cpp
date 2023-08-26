//Write a Program to Replace substring in a string
#include <iostream>
using namespace std;
void modifyString(string& s1, string& s2, string& s3)
{
	string ans = "";
	for (int i = 0; i < s1.length(); i++) {
		int k = 0;

		if (s1[i] == s2[k] && i + s2.length() <= s1.length()) {
			int j;
			for (j = i; j < i + s2.length(); j++) {
				if (s1[j] != s2[k]) {
					break;
				}
				else {
					k = k + 1;
				}
			}

			if (j == i + s2.length()) {
				ans.append(s3);
				i = j - 1;
			}
			else {
				ans.push_back(s1[i]);
			}
		}
		else {
			ans.push_back(s1[i]);
		}
	}
	cout << "The new string: " << ans << endl;
}

int main()
{
	string s1;
    cout << "Enter first string" << endl;
    cin>>s1;

    string s2;
    cout << "Enter the substring to be removed" << endl;
    cin>>s2;

	string s3;
    cout << "Enter the new substring" << endl;
    cin>>s3;

	modifyString(s1,s2,s3);
}
