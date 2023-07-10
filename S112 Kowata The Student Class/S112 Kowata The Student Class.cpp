// S112 Kowata The Student Class.cpp 
// Author: Michael Kowata
// Goal: Show class data using C++ classes

#include "Student.h";

//Prototypes---------------------------------------------------------------

//void showDatabase(vector<Student>& db);
//void addStudentToDb(vector<Student>& db);

int main()
{
    vector<Student> db;
    string name;
    int ID;
    double GPA;

    for (int i = 0; i < 3; i++)
    {       
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter GPA: ";
        cin >> GPA;
        cout << endl;

        if (i == 0)
        {
            Student s1(ID, name, GPA);
            db.push_back(s1);
        }
        else if (i == 1)
        {
            Student s2(ID, name, GPA);
            db.push_back(s2);
        }
        else if (i == 2)
        {
            Student s3(ID, name, GPA);
            db.push_back(s3);
        }
    }
    for (int i = 0; i < db.size(); i++)
    {
        cout << db[i].stringify() << endl;
    }
}

