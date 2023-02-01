/* Print           D
                   C D
                   B C D
                   A B C D
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
        char ch = 'A' + n - row;
        while (col <= row)
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



