/* Print Sum of all even no. upto n */

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Your Number "<<endl;
    int n;
    cin>>n;

    int i = 2;
    int sum = 0;

    while (i<=n)
    {
        /* code */
        sum = sum + i;
        i = i + 2;
    }
    cout<<"The sum of first even "<<n<<" numbers is "<<sum<<endl;
    
    
    return 0;
}




