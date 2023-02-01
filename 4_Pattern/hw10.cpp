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
        char ch = 'A'+row-1;
        while (col <= n)
        {
            /* code */
            cout<<ch;
            ch = ch + 1;
            col = col + 1; 
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}


