#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class emp
{
	float m1,m2,m3;
	char name[20],num[10];
	public:
		void getdata();
		void dispdata();
};
void emp::getdata(){
	cout << "Enter Student USN: ";
	cin >> name;
	cout << "Enter student name: ";
	cin >> num;
	cout << "Enter student's 3 marks: ";
	cin >> m1;
	cin >> m2;
	cin >> m3;
}
void emp::dispdata()
{
	float avg,low=m3;
	if(m2<low)
		low=m2;
	else if(m3<low)
		low=m3;
	avg=(m1+m2+m3-low)/2;
	cout << "Student USN :" << name << endl;
	cout << "Student name :" << num << endl;
	cout << "Student average :" << avg << endl;
}
int main()
{
	emp ob[10];
	int n;
	cout << "\n";
	cout << "Student report" << endl;
	cout << "Enter the number of student :";
	cin >> n;
	for(int i=0;i<n;i++){
		ob[i].getdata();
	}
	cout << "Student details ::" << endl;
	for(int i=0;i<n;i++)
	{
		cout << "student :" << i+1 << endl;
		ob[i].dispdata();
	}	
	
}
// void Students::displayStudentdata()
// {
// 	float average;
//     int minn=mk1;
// 	if(mk2<minn)
// 		minn=mk2;
// 	else if(mk3<minn)
// 		minn=mk3;
//     float sum=(mk1+mk2+mk3-minn);
// 	average=(sum)/2.0;
// 	cout << "USN :" << usn << endl;
// 	cout << "Name :" << name << endl;
// 	cout << "Average :" << average << endl;
// }
// cout << "Student's data:" << "\n";
// 	for(int i=0;i<m;i++)
// 	{
// 		cout << "Student :" << i+1 << endl;
// 		students[i].displayStudentdata();
// 	}	