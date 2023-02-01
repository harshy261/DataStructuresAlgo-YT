/* Print            1234
                    1234
                    1234
                    1234
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Your Number "<<endl;
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
            cout<<j;
            j = j + 1;
        }
        cout<<endl;

        i = i + 1;
        
    }
    
    return 0;
}



