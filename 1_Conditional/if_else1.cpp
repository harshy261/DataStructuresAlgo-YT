/* No. is +ve or -ve or 0 */

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Your A "<<endl;
    int a;
    cin>>a;

    if (a>0)
    {
        /* code */
        cout<<"A is +ve "<<endl;
    }
    else if(a<0)
    {
        cout<<"A is -ve "<<endl;
    }
    else
    {
        cout<<"No. is zero "<<endl;
    }
    
    return 0;
}           


