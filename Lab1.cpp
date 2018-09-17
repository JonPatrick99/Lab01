// Jon Caldwell
// Computer Science 2
// September 17, 2018
// Lab 1 

#include <iostream>
#include <string>
#include<fstream>
using std::cin;
using std::cout;
using std::string;
using std::ifstream;

int main()
{
	string filename;
	double Num1 = 0, Num2 = 0, LNum1 = 0, LNum2 = 0,temp;
	int total = 0;
	cout << "Please enter a file name with intergers:";
	cin >> filename;
	ifstream inFile;
	inFile.open(filename);

	inFile >> Num1;
	cout << Num1 << "\n";
	inFile >> Num2;
	cout << Num2 << "\n";
	inFile >> LNum1;
	cout << LNum1 << "\n";

	total = 3;

	inFile >> temp;

	while (!inFile.fail())
	{
		LNum2 = LNum1;
		LNum1 = temp;
		cout << LNum1 << "\n";
		inFile >> temp;
		total++;
	}

	cout << "\n First Number: " << Num1 << "\n Second Number: " << Num2 << "\n Second to Last Number: " << LNum2 << "\n Last Number: " << LNum1 << "\n Total: " << total << "\n";

	inFile.close();
	system("pause");
}

