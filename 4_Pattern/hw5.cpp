/* Print            1
                    2 3
                    3 4 5
                    4 5 6 7
                    (Without a variable int)
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
            cout<<row+col-1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    
    return 0;
}



