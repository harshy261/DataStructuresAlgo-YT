/* Find the number is Prime or not (REPEATED)*/ 

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Your Number "<<endl;
    int n;
    cin>>n;

    int i = 2;

    while (i<=n-1)
    {
        /* code */
        if(n%i==0)
        {
            cout<<"Not prime for "<<i<<endl;
        }
        else
        {
            cout<<"Prime for "<<i<<endl;
        }
        i = i + 1;
    }
    

    return 0;
}   



