
#include <iostream>
using namespace std;

// Single Inheritance
class Student
{
public:
    void student()
    {
        cout << "\nStudent class";
    }
};

class Exam : public Student
{
public:
    void exam()
    {
        cout << "\nExam class";
    }
};

// Multiple Inheritance
class Teacher
{
public:
    void teacher()
    {
        cout << "\nTeacher class";
    }
};

class Result : public Student, public Teacher
{
public:
    void result()
    {
        cout << "\nResult class";
    }
};

// Multilevel Inheritance
class Person
{
public:
    void person()
    {
        cout << "\nPerson class";
    }
};

class CollegeStudent : public Person
{
public:
    void college()
    {
        cout << "\nCollege Student class";
    }
};

class SportsStudent : public CollegeStudent
{
public:
    void sports()
    {
        cout << "\nSports Student class";
    }
};

// Hierarchical Inheritance
class Animal
{
public:
    void animal()
    {
        cout << "\nAnimal class";
    }
};

class Dog : public Animal
{
public:
    void dog()
    {
        cout << "\nDog class";
    }
};

class Cat : public Animal
{
public:
    void cat()
    {
        cout << "\nCat class";
    }
};

int main()
{
    cout << "\nSingle Inheritance";
    Exam e;
    e.student();
    e.exam();

    cout << "\n\nMultiple Inheritance";
    Result r;
    r.student();
    r.teacher();
    r.result();

    cout << "\n\nMultilevel Inheritance";
    SportsStudent s;
    s.person();
    s.college();
    s.sports();

    cout << "\n\nHierarchical Inheritance";
    Dog d;
    Cat c;
    d.animal();
    d.dog();
    c.animal();
    c.cat();

    return 0;
}
