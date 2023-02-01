#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    // BITWISE OPERATOR
    cout<<" BITWISE OPERATOR "<<endl;
    cout<<" a&b ---> "<<(a&b)<<endl;
    cout<<" a|b ---> "<<(a|b)<<endl;
    cout<<" ~a ---> "<<(~a)<<endl;
    cout<<" ~b ---> "<<(~b)<<endl;
    cout<<" a^b ---> "<<(a^b)<<endl;
    cout<<endl;

    // LEFT SHIFT & RIGHT SHIFT
    cout<<"LEFT SHIFT & RIGHT SHIFT "<<endl;
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(21<<1)<<endl;
    cout<<(21<<2)<<endl;
    cout<<endl;

    // POST INCREMENT & PRE INCREMENT
    cout<<"POST INCREMENT & PRE INCREMENT "<<endl;
    int i = 5;
    cout<<(i++)<<endl;
    cout<<(++i)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;
    cout<<endl;


    return 0;
} 








 