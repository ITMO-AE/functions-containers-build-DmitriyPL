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

vector<string> PalindromFilter(const vector<string>& words, int minLenght)
{
    vector<string> result;
    
    for(auto x: words)
        if ( IsPalindrom(x) && ( x.size() >= minLenght ) ) result.push_back(x);
    
    return result;
}

int main()
{
    vector<string> words = {"weew", "bro", "code"};
    int minLenght = 4;
    
    vector<string> result = PalindromFilter(words, minLenght);
    
    for(auto x: result)
        cout << x << endl;
    
    return 0;
}
