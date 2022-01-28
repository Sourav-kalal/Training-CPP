#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    fstream myFile("log.txt");

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        myFile << "Error! column of first matrix not equal to row of second." << endl;
        myFile << "error(1) program failed" << endl;
    }
    else
    {

        cout << endl
             << "Enter elements of matrix 1:" << endl;
        for (i = 0; i < r1; ++i)
            for (j = 0; j < c1; ++j)
            {
                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                cin >> a[i][j];
            }

        cout << endl
             << "Enter elements of matrix 2:" << endl;
        for (i = 0; i < r2; ++i)
            for (j = 0; j < c2; ++j)
            {
                cout << "Enter element b" << i + 1 << j + 1 << " : " << endl;
                cin >> b[i][j];
            }

        for (i = 0; i < r1; ++i)
            for (j = 0; j < c2; ++j)
            {
                mult[i][j] = 0;
            }

        for (i = 0; i < r1; ++i)
            for (j = 0; j < c2; ++j)
                for (k = 0; k < c1; ++k)
                {
                    mult[i][j] += a[i][k] * b[k][j];
                }

        cout << endl
             << "Output Matrix: " << endl;
        for (i = 0; i < r1; ++i)
            for (j = 0; j < c2; ++j)
            {
                cout << " " << mult[i][j];
                if (j == c2 - 1)
                    cout << endl;
            }
        myFile << "error(0) program executed successfully..!!" << endl;
    }
    myFile.close();
    return 0;
}