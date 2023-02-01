/* Print           A 
                   B B 
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
        while (col <= row)
        {
            /* code */
            char ch ='A'+row-1;
            cout<<ch;
            col = col + 1; 
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}

