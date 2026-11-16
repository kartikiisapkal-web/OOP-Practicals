
#include <iostream>
#include <string>
using namespace std;

class Publication
{
protected:
    string title;
    float price;

public:
    void accept()
    {
        cout << "Enter Title: ";
        cin >> title;

        cout << "Enter Price: ";
        cin >> price;

        if(price < 0)
            throw 1;
    }

    void display()
    {
        cout << "\nTitle: " << title;
        cout << "\nPrice: " << price;
    }
};

class Book : public Publication
{
    int pages;

public:
    void accept()
    {
        Publication::accept();

        cout << "Enter Number of Pages: ";
        cin >> pages;

        if(pages < 0)
            throw 1;
    }

    void display()
    {
        Publication::display();
        cout << "\nPages: " << pages;
    }

    void setZero()
    {
        title = "0";
        price = 0;
        pages = 0;
    }
};

class Tape : public Publication
{
    float time;

public:
    void accept()
    {
        Publication::accept();

        cout << "Enter Playing Time: ";
        cin >> time;

        if(time < 0)
            throw 1;
    }

    void display()
    {
        Publication::display();
        cout << "\nPlaying Time: " << time << " minutes";
    }

    void setZero()
    {
        title = "0";
        price = 0;
        time = 0;
    }
};

int main()
{
    Book b;
    Tape t;

    cout << "\nEnter Book Details\n";

    try
    {
        b.accept();
    }
    catch(int x)
    {
        cout << "Invalid Data! Setting values to zero.\n";
        b.setZero();
    }

    cout << "\nEnter Tape Details\n";

    try
    {
        t.accept();
    }
    catch(int x)
    {
        cout << "Invalid Data! Setting values to zero.\n";
        t.setZero();
    }

    cout << "\nBook Details";
    b.display();

    cout << "\n\nTape Details";
    t.display();

    return 0;
}
