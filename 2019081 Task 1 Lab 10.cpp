#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int myarr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int retrieve[10];
	ofstream fout;
	ifstream fin;
	fout.open("Task 1", ios::out);
	int j = 0; int sum = 0;
	if (fout) {
		while (j != 10) {
			fout << myarr[j];
			fout << " ";
			j++;
		}
	}
	else {
		cout << "error";
	}
	j = 0;
	fout.close();
	fin.open("Task 1", ios::in);
	if (fin) {
		while (j!=10) {
			fin >> retrieve[j];
			j++;
		}
		cout << "The retrieved array is: ";
		j = 0;
		while (j != 10) {
			cout << retrieve[j];
			cout << " ";
			sum = sum + retrieve[j];
			j++;
		}
		cout << endl;
		cout << "The sum is: " << sum;
	}
	else
		cout << "error";
	fin.close();
}
