// Print Sum of 1 to n number

#include<iostream>
using namespace std;

int main(){
    cout<<" Enter the value of n"<<endl;
    int n;
    cin>>n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        sum = sum + i;
    }
    cout<<sum<<endl;
    

    return 0;
}