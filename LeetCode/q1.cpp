/*
iven Int n, return diff. btwn product of its digits and sum of its digits.
Ex---> n = 434 ;        Sum = 11, Product = 48 
                        Answer = 48-11 = 37
*/


#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Your Number"<<endl;
    int n;
    cin>>n;
    cout<<"The number is "<<n<<endl;

    int product = 1;
    int sum = 0;

    while (n!=0)
    {
        int digit = n%10;
        product = product * digit;
        sum = sum + digit;

        n = n/10;
    }

    int answer = product - sum;
    cout<<"The answer is "<<answer<<endl;
    
    return 0;
}           

