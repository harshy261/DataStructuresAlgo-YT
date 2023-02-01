/* Print                ****
                         ***
                          **
                           *
                        
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
        // Print Spaces
        int space = row - 1;
        while (space)
        {
            /* code */
            cout<<" ";
            space = space - 1;
        }
        // Print Stars
        int col = 1;
        while (col<=n-row+1)
        {
            /* code */
            cout<<"*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}



