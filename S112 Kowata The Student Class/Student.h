#pragma once
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

struct Student
{
	//Data Members
private:
	int ID;
	string name;
	double GPA;

public:
	//Mutators (Setters)
	void setID(int ID)
	{
		this->ID = abs(ID);
	}

	void setName(string name)
	{
		this->name = name;
	}

	void setGPA(double GPA)
	{
		this->GPA = abs(GPA);
	}

	//Accessors (Getters)
	int getID() { return ID; }
	string getName() { return name; }
	double getGPA() { return GPA; }

	//Constructors
	//Zero-argument constructors
	Student()
	{
		setID(0);
		setName("NA");
		setGPA(0);
	}

	Student(int ID, string name, double GPA)
	{
		setID(ID);
		setName(name);
		setGPA(GPA);
	}

	//Function Members
	string stringify()
	{
		stringstream sout;
		sout << " Student [ ID: " << ID << ", Name: " << name << ", GPA: " << GPA << " ]";
		return sout.str();
	}
};
