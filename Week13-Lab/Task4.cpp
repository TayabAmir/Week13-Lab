#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int& count);
void saveToFile(string names[], int ages[], float matricMarks[],float fscMarks[], float ecatMarks[], int count, string fileName);

int main()
{
	int n=100,ages[n],count=0;
	string names[n],fileName = "Task4.txt";
	float matricMarks[n],fscMarks[n],ecatMarks[n];
	getStudentDetails(names,ages,matricMarks,fscMarks,ecatMarks,n,count);
	saveToFile(names,ages,matricMarks,fscMarks,ecatMarks,count,fileName);
	
}
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int& count)
{
	string loopCounter = "Yes";
	while(loopCounter != "No" && loopCounter != "no")
	{
		if(loopCounter == "Yes" || loopCounter == "yes")
		{
			cout << "Enter Student's name: ";
			cin >> names[count];
			cout << "Enter Student's age: ";
			cin >> ages[count];
			cout << "Enter Student's Matric marks: ";
			cin >> matricMarks[count];
			cout << "Enter Student's Fsc marks: ";
			cin >> fscMarks[count];
			cout << "Enter Student's Ecat marks: ";
			cin >> ecatMarks[count];
			cout << "Enter No to stop or Yes to Continue: ";
			cin >> loopCounter;
			count++;
		}
		else
		{
			cout << "Invalid input.";
			break;
		}
	}
}
void saveToFile(string names[], int ages[], float matricMarks[],float fscMarks[], float ecatMarks[], int count, string fileName)
{
	fstream file;
	file.open(fileName,ios::out);
	for(int i = 0; i < count ; i++)
	{
		file << "Name: " << names[i] << endl<< "Age: " << ages[i] << endl<< "Matric Marks: " << matricMarks[i] << endl<< "Fsc Marks: : " << fscMarks[i] << endl<< "Ecat Marks: " << ecatMarks[i] << endl;
		file << endl << endl;  
	}
	file.close();
}

