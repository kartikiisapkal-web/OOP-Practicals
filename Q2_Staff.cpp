
#include <iostream>
#include <string>
using namespace std;

class Staff
{
public:
    int id;
    string name;
    float salary, da, hra, tax, net;

    void accept()
    {
        cout << "Enter Staff ID: ";
        cin >> id;

        cout << "Enter Staff Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> salary;
    }

    void calculate()
    {
        da = salary * 25 / 100;
        hra = 800;
        tax = salary * 15 / 100;

        net = salary + da + hra - tax;
    }

    void display()
    {
        cout << "\nStaff ID: " << id;
        cout << "\nStaff Name: " << name;
        cout << "\nBasic Salary: " << salary;
        cout << "\nDA: " << da;
        cout << "\nHRA: " << hra;
        cout << "\nI-Tax: " << tax;
        cout << "\nNet Salary: " << net;
        cout << "\n----------------------";
    }
};

int main()
{
    Staff s[10], temp;
    int n, i, j;

    cout << "Enter number of staff: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cout << "\nEnter Staff Details\n";
        s[i].accept();
        s[i].calculate();
    }

    // Sorting by name
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(s[j].name > s[j+1].name)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    cout << "\n\nSTAFF PAYSLIP";

    for(i = 0; i < n; i++)
    {
        s[i].display();
    }

    return 0;
}

