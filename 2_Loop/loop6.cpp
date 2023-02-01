// Fibonaccci Series

#include <iostream>
using namespace std;

int main()
{
    cout << " Enter the Value of n " << endl;
    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";

    for (int i = 1; i <= n; i++)
    {
        /* code */
        int nextNum = a+b;
        cout<<nextNum<<" ";

        a = b;
        b = nextNum;

    }

    return 0;
}


