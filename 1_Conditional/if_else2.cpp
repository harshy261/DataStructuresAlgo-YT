/* Which is greater */

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter 2 Number "<<endl;
    int a,b;
    // cin>>a>>b;
    a = cin.get();       //can be used to use the value of ENTER, SPACE, TAB etc.

    cout<<"Value of a : "<<a<<endl;

    if (a<b)
    {
        /* code */
        cout<<a<<" is less than "<<b<<endl;
    }
    else if(a>b)
    {
        /* code */
        cout<<a<<" is greater than "<<b<<endl;
    }
    else
    {
        cout<<"Both Number is same "<<endl;
    }

    return 0;
}   




