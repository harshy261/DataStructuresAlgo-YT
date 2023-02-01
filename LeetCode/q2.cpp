/*      Get the number n;
        Return the number of bits it has.

        Ex---> n = 11 ; n = 00...1011 (32 bits)
               Answer = 3

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Your Number"<<endl;
    cin>>n;

    int count = 0;
    while (n!=0)
    {
        // Checking Last bit
        if(n&1)
        {
            count++;
        }
        n = n>>1;
    }
    cout<<count<<endl;

    return 0;
}

/*
    Ways to solve -->
1.  Convert n to Binary then count non zero
2.  Convert to Binary , right shift X32

*/


