/* Print        1111
                2222
                3333
                4444
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your number "<<endl;

    int n;
    cin>>n;
    
    int i = 1;

    while (i<=n)
    {
        /* code */
        int j = 1;
        while (j<=n)
        {
            /* code */
            cout<<i;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
        
    }
    

    return 0;
}



