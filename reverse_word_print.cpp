#include <bits/stdc++.h>
using namespace std;
void print(stringstream & ss)
{
    string word;
    if (ss >> word)
    {
        // cout << word << endl;
        print(ss);
        cout << word << endl;  //ata akhane likle reverse a print korbe
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    print(ss);
    return 0;
}