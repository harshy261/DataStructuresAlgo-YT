/* Print            1
                    2 3
                    4 5 6
                    7 8 9 10
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Your Number "<<endl;
    int n;
    cin>>n;

    int row = 1;
    int count = 1;
    while (row<=n)
    {
        /* code */
        int col = 1;
        while (col<=row)
        {
            /* code */
            cout<<count<<" ";
            col = col + 1;
            count = count + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    
    return 0;
}

