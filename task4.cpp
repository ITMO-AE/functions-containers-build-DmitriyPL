#include <iostream>
#include <vector>

using namespace std;

void SwapMy( vector<int>& num1, vector<int>& num2 )
{
    for(auto x: num1)
        num2.push_back(x);
        
    num1.clear();
}

int main()
{
    vector<int> num1 = { 1, 2, 3, 4, 5};
    vector<int> num2 = { 6, 7, 8, 9, 10};
    
    SwapMy(num1, num2);
    
    cout << "Vector 1 - result:" << endl;
    for(auto x: num1)
        cout << x << " ";
    
    cout << "Vector 2 - result:" << endl;
    for(auto x: num2)
        cout << x << " ";
    
    return 0;
}
