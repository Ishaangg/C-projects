#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows ";
    cin >> row;

    cout << "Enter the number of columns ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
    }
}





// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j;

//     cout << "enter the no. of rows and column " << endl;
//     cin >> i >> j;

//     for (int n = 1; n <= i; n++)
//     {

//         for (int m = 1; m <= j; m++)
//         {
//             if (m == 1 || m == j || n == 1 || n == i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }