/* Print           A B C
                   B C D
                   C D E
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
        int col = 1;
        while (col <= n)
        {
            /* code */
            char ch = 'A'+row+col-2;
            cout<<ch;
            col = col + 1; 
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}

