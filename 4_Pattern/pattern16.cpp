/* Print                 1
                       1 2 1
                     1 2 3 2 1
                   1 2 3 4 3 2 1

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
        int space = n - row;
        while (space)
        {
            /* code */
            cout <<" ";
            space = space - 1;
        }
        // Print Number
        int col = 1;
        // int value = 1;
        while (col<=row)
        {
            /* code */
            cout << col;
            // cout << value;
            // value = value + 1;
            col = col + 1;
        }
        // Print Second Number 
        int start =  row - 1;
        while (start)
        {
            /* code */
            cout<<start;
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}
