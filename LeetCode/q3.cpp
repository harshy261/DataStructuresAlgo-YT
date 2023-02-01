/* REVERSE INTEGER */


#include<iostream> 

using namespace std;

int main(){
    int n;
    cout<<"Enter Your Number"<<endl;
    cin>>n;

    int ans = 0;
    int digit = 1;
    while (n!=0)
    {
        digit = n%10;


        ans = (ans * 10) + digit;
        n = n/10;
        if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
            return 0;
        }
    }
    cout<<"Revered no. is "<<ans<<endl;
    
    return 0;
}               





