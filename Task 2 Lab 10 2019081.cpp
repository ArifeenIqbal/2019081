#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	cout << "Writing to the file"<< endl;
	ofstream fout;
	ifstream fin;
	fout.open("Task 2", ios::out);
	int age; char name[15];
	cout << "please enter your name: ";
	cin >> name; 
	cout << endl;
	cout << "Please enter your age: ";
	cin >> age;
	cout << endl;
	if (fout) {
		fout << name << endl;
		fout << " ";
		fout << age << endl;
	}
	else
		cout << "error";
	fout.close();
	int j = 0;
	fin.open("Task 2", ios::in);
	int Rage; char Rname[15];
	if (fin) {
		fin >> name;
		fin >> Rage;
	}
	cout << "The retrieved name is: " << Rname;
	cout << "The retrieved age is : " << Rage;
}




