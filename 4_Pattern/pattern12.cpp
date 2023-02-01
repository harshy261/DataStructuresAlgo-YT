/* Print           A
                   B C
                   D E F
                   G H I F
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Your Number " << endl;
    int n;
    cin >> n;

    int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        /* code */
        int col = 1;
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

