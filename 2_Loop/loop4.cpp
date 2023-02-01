#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of n"<<endl;
    cin>>n;

    // cout<<"Printing counting from 1 to n"<<endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     /* code */
    //     cout<<i<<" ";
    // }


    // cout<<"Printing counting from 1 to n"<<endl;
    // int i = 1;
    // for (; ; ) 
    // {
    //     /* code */
    //     if (i<=n)
    //     {
    //         /* code */
    //         cout<<i<<endl;
    //     }
    //     else{ 
    //         break;
    //     }
    //     i++;
    // }


    for (int a = 0, b = 1, c = 2; a>=0 && b>=1 && c>=2 ; a--,b--,c--)
    {
        /* code */
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    

    
 


    return 0;
}