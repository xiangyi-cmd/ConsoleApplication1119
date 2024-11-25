#pragma once
#include<string>

using namespace std;

class Person
{
private:
	string id;
	string lastName;
	string firstName;
	string gender;
	string birthDate;
public:
	// Constructor �غc�禡
	Person(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate);
	Person();	//�P�W����

	//Getter ���Ȩ��
	string getId() const;
	string getLastName() const;
	string getFirstName() const;
	string getGender() const;
	string getBirthDate() const;

	//Setter �]�Ȩ��
	void setId(const string& id);
	void setLastName(const string& lastName);
	void setFirstName(const string& firstName);
	void setGender(const string& gender);
	void setBirthDate(const string& birthDate);

	void display() const;
};

