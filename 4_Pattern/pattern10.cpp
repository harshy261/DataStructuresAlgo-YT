/* Print           A A A
                   B B B
                   C C C
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
            if (row==1)
            {
                /* code */
                cout << "A";
                col = col + 1;
            }
            else if (row==2)
            {
                /* code */
                cout << "B";
                col = col + 1;
            }
            else
            {
                /* code */
                cout << "C";
                col = col + 1;
            }
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}
