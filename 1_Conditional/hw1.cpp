/* Find the letter as Uppercase, Lowercase or Numeric */

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter Your ch "<<endl;
    cin>>ch;

    if (ch=='A')
    {
        /* code */
        cout<<"This is a UpperCase "<<endl;
    }
    else if (ch=='a')
    {
        /* code */
        cout<<"This is a LowerCase "<<endl;
    }
    else
    {
        /* code */
        cout<<"This is Numeric "<<endl;
    }
    
    return 0;
}

