#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 2;

    float c = 5.0;
    float d = 3.0;

    //ARITHMETIC OPERATOR
    // cout<<"The sum is "<<(a+b)<<endl;
    // cout<<"The difference is "<<(a-b)<<endl;
    // cout<<"The multiplication is "<<(a*b)<<endl;
    // cout<<"The division is "<<(a/b)<<endl;

    //RELATIONAL OPERATOR
    // bool first = (a==b);
    // cout<<first<<endl;

    // bool second = (a<b);
    // cout<<second<<endl;

    // bool third = (a>b);
    // cout<<third<<endl;

    // bool fourth = (a>=b);
    // cout<<fourth<<endl;

    // bool fifth = (a!=b);
    // cout<<fifth<<endl;

    // bool sixth = (a<=b);
    // cout<<sixth<<endl;

    //LOGICAL OPERATOR
    if ((a==c)&&(b==d))
    {
        /* code */
        cout<<"correct"<<endl;
    }
    else if ((a==c)||(b==d))
    {
        /* code */
        cout<<"Partially correct"<<endl;
    }
    else
    {
        /* code */
        cout<<"Wrong"<<endl;
    }
    
    


    return 0;
}               


