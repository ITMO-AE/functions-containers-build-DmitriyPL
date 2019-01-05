#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

template <typename T>

void Reverse(vector<T>& vec)
{
    vector<T> tmp;
    
    for (auto it = vec.end()-1; it >= vec.begin(); it--)
        tmp.push_back(*it);
        
    vec = tmp;
}

int main()
{
    vector<string> num1 = {"a1", "b2", "c3", "d4", "e5"};
    vector<int> num2 = {1, 2, 3, 4, 5};
    vector<double> num3 = {1.1, 2.2, 3.3, 4.4, 5.5};

    Reverse(num3);
    for(auto x: num3)
        cout << x << " ";
    cout << endl;
        
    Reverse(num2);
    for(auto x: num2)
        cout << x << " ";
    cout << endl;
        
    Reverse(num1);
    for(auto x: num1)
        cout << x << " ";

    return 0;
}

