#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsPalindrom(const string& str)
{
    string tmp = str;
    reverse( tmp.begin(), tmp.end() );

    return (str == tmp);
}

int main()
{
    string str;

    cout << "Enter a string for checking is it a palindrome or not:" << endl;   
    cin >> str;

    if (IsPalindrom(str)) cout << "Yes the entered string is a palindrome";
        else cout << "No it isn't a palindrome";
    
    return 0;
}
