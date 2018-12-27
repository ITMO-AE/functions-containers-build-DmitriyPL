#include <iostream>

using namespace std;

long long int fact(int N)
{
    if (N <= 1 ) return 1;

    return N * fact(N-1);
    
}

int main()
{
    int N;
    
    cout << "Enter a number" << endl;
    cin >> N;
    
    cout << "!" << N << " = " << fact(N);

    return 0;
}
