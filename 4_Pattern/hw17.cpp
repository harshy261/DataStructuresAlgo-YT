/* Print                1234554321
                        1234**4321
                        123****321
                        12******21
                        1********1

*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Your Number " << endl;
    int n;
    cin >> n;
    int row = 1;
    while (row<=n)
    {
        /* code */
        // PRINT 1ST Number
        int col = 1;
        while (col<=n-row+1)
        {
            /* code */
            cout<<col;
            col = col + 1;
        }
        // PRINT Star
        int start = row - 1;
        while (start)
        {
            /* code */
            cout<<"*";
            start = start - 1;
        }
        // PRINT 2nd Star
        int start2 = row - 1;
        while (start2)
        {
            /* code */
            cout<<"*";
            start2 = start2 - 1;
        }
        // PRINT 2ND Number
        int col2 = 1;
        while (col2<=n-row+1)
        {
            /* code */
            cout<<n-col2+1;
            col2 = col2 + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}


