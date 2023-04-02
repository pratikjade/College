#include <iostream>
#include <conio.h>
#include <process.h>
using namespace std;

class mat
{
    int a[20][20], b[20][20],c[20][20];
    int i, j, k, p, q, x, y;

public:
    void addition(void);
    void substraction(void);
    void multiplication(void);
};

void mat::addition()
{
    cout << "\nENTER THE DIMENSION OF MATRIX A::\t";
    cin >> x >> y;
    cout << "\nENTER THE DIMENSION OF MATRIX b::\t";
    cin >> p >> q;
    if ((x == p) && (y == q))
    {
        cout << "\nENTER THE" << x << "*" << y << "ELEMENTS OF MATRIX A::\n";
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                cin >> a[i][j];
        }

        cout << "\nENTER THE" << p << "*" << q << "ELEMENTS OF MATRIX B::\n";
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
                cin >> b[i][j];
        }

        cout << "\nSUM OF MATRIX A & B::\n";

        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                c[i][j] = a[i][j] + b[i][j];
        }

        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                cout << c[i][j] << "\t";
            cout << "\n";
        }
    }

    else
        cout << "\nADDITION IS NOT POSSIBLE::";
}

void mat::substraction()
{
    cout << "\nENTER THE DIMENSION OF MATRIX A::\t";
    cin >> x >> y;
    cout << "\nENTER THE DIMENSION OF MATRIX b::\t";
    cin >> p >> q;
    if ((x == p) && (y == q))
    {
        cout << "\nENTER THE" << x << "*" << y << "ELEMENTS OF MATRIX A::\n";
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)

                cin >> a[i][j];
        }
        cout << "\nENTER THE" << p << "*" << q << "ELEMENTS OF MATRIX B::\n";
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
                cin >> b[i][j];
        }
        cout << "\nDIFFERENCE OF THE MATRIX A & B::\n";
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                c[i][j] = a[i][j] - b[i][j];
        }

        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                cout << c[i][j] << "\t";
            cout << "\n";
        }
    }

    else

        cout << "\nSUBSTRACTION IS NOT POSSIBLE::";
}

void mat::multiplication()

{
    cout << "\nENTER THE DIMENSION OF MATRIX A::\t";
    cin >> x >> y;
    cout << "\nENTER THE DIMENSION OF MATRIX b::\t";
    cin >> p >> q;
    if (y == q)
    {
        cout << "\nENTER THE" << x << "*" << y << "ELEMENTS OF MATRIX A::\n";
        for (i = 0; i < x; i++)
        {

            for (j = 0; j < y; j++)

                cin >> a[i][j];
        }
        cout << "\nENTER THE" << p << "*" << q << "ELEMENTS OF MATRIX B::\n";
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
                cin >> b[i][j];
        }
        cout << "\nPROCUCT OF THE MATRIX A & B::\n";
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;

                for (k = 0; k < y; k++)

                    c[i][j] = a[i][k] * b[k][i] + c[i][j];
            }
        }
        for (i = 0; i < x; i++)
        {

            for (j = 0; j < q; j++)

                cout << c[i][j] << "\t";

            cout << "\n";
        }
    }

    else

        cout << "\nMULTIPLICATION IS NOT POSSIBLE::";
}

int main()
{
    int c;
    char ch;
    mat M;
    do

    {

        cout << "\t\tMATRIX OPERATION\n\n";
        cout << "\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n";
        cout << "\nENTER YOUR CHOICE::\t";
        cin >> c;
        switch (c)
        {

        case 1:

            M.addition();
                break;

        case 2:

            M.substraction();

                break;

        case 3:

            M.multiplication();

                break;

            default:

            cout << "Wrong Choice";
        }

        cout << "\nDoyou want to continue[y/n]::\t";
        cin >> ch;

    }

    while (ch == 'y', ch == 'Y');

    return 0;
}