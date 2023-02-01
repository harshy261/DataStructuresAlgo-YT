/* Print                    1
                          2 2
                        3 3 3
                      4 4 4 4
                        
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
            cout<<" ";
            space = space - 1;
        }
        // Print Stars
        int col = 1;
        while (col<=row)
        {
            /* code */
            cout<<row;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    

    return 0;
}



