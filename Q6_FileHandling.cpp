
#include <iostream>
#include <fstream>
using namespace std;

class FileHandling
{
public:

    void writeFile()
    {
        ofstream fout;

        fout.open("student.txt");

        int roll;
        string name;

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        fout << roll << endl;
        fout << name << endl;

        fout.close();

        cout << "\nData written successfully.";
    }

    void readFile()
    {
        ifstream fin;

        int roll;
        string name;

        fin.open("student.txt");

        fin >> roll;
        fin >> name;

        cout << "\n\nReading Data From File";
        cout << "\nRoll Number: " << roll;
        cout << "\nName: " << name;

        fin.close();
    }
};

int main()
{
    FileHandling f;

    f.writeFile();
    f.readFile();

    return 0;
}

