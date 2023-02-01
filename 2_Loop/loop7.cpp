// Find Prime No. or not


#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your Number "<<endl;
    int n;
    cin>>n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        /* code */
        //rem = 0 ---> Not a prime number
        if (n%i==0)
        {
            /* code */
            // cout<<"Not a Prime Number"<<endl;
            isPrime = 0;
            break;
        }
    }
    

    if(isPrime == 0)
    {
        cout<<n<<" is not a Prime Number"<<endl;
    }
    else
    {
        cout<<n<<" is a Prime Number"<<endl;
    }


    return 0;
}                   





 