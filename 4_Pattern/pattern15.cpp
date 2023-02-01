/* Print                     *
                           * *
                         * * *
                       * * * *
                        
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Your Number " << endl;
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        /* code */
        // PRINT SPACE
        int space = n - row;
        while (space)
        {
            /* code */
            cout<<" ";
            space = space - 1; 
        }
        // PRINT STARS
        int col = 1;
        while (col<=row)
        {
            /* code */
            cout<<"*";
            // cout<<" * ";
            // cout<<" *";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}



