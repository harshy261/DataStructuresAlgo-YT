/* Print sum of n Numbers */

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your Number"<<endl;
    int n;
    cin>>n;

    int i = 1;
    int sum = 0;

    while (i<=n)
    {
        /* code */
        sum = sum + i;
        i = i + 1;
    }
    cout<<"The sum of first "<<n<<" numbers is "<<sum<<endl;
    
    return 0;
}               



