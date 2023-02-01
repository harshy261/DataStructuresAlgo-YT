/* Print            *
                    **
                    ***
                    ****
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Your Number "<<endl;
    int n;
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        /* code */
        int col = 1;
        while (col<=row)
        {
            /* code */
            cout<<"*";
            col = col + 1; 
        }
        cout<<endl;
        row = row + 1;
    }
    
    return 0;
}



