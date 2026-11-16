
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Library
{
    T id;
    string name;
    float price;

public:

    void accept()
    {
        cout << "Enter Book ID: ";
        cin >> id;

        cout << "Enter Book Name: ";
        cin >> name;

        cout << "Enter Book Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nBook ID: " << id;
        cout << "\nBook Name: " << name;
        cout << "\nBook Price: " << price;
    }
};

int main()
{
    Library<int> l;

    cout << "Enter Book Details\n";

    l.accept();

    cout << "\nLibrary Details";
    l.display();

    return 0;
}
