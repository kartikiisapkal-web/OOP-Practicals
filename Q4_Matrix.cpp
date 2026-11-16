
#include <iostream>
using namespace std;

class Matrix
{
    int a[10][10], r, c;

public:

    void accept()
    {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter matrix elements:\n";

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void display()
    {
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    void add(Matrix m)
    {
        if(r == m.r && c == m.c)
        {
            cout << "\nAddition:\n";

            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                {
                    cout << a[i][j] + m.a[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "\nAddition not possible";
        }
    }

    void subtract(Matrix m)
    {
        if(r == m.r && c == m.c)
        {
            cout << "\nSubtraction:\n";

            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                {
                    cout << a[i][j] - m.a[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "\nSubtraction not possible";
        }
    }

    void multiply(Matrix m)
    {
        if(c == m.r)
        {
            cout << "\nMultiplication:\n";

            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < m.c; j++)
                {
                    int sum = 0;

                    for(int k = 0; k < c; k++)
                    {
                        sum = sum + a[i][k] * m.a[k][j];
                    }

                    cout << sum << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "\nMultiplication not possible";
        }
    }
};

int main()
{
    Matrix A, B;

    cout << "Enter First Matrix\n";
    A.accept();

    cout << "\nEnter Second Matrix\n";
    B.accept();

    cout << "\nFirst Matrix:\n";
    A.display();

    cout << "\nSecond Matrix:\n";
    B.display();

    A.add(B);
    A.subtract(B);
    A.multiply(B);

    return 0;
}

