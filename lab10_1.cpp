#include<iostream>
using namespace std;
char grade;
int numberOfStudents = 1;
int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << numberOfStudents << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == '0') // terminate condition
			break;
		if (grade == 'A') // if grade is A
			count[0]++ , numberOfStudents++;
		else if(grade == 'B') // if grade is B
			count[1]++ , numberOfStudents++;
		else if(grade == 'C') // if grade is C
			count[2]++ , numberOfStudents++;
		else if(grade == 'D') // if grade is D
			count[3]++ , numberOfStudents++;
		else if(grade == 'F') // if grade is F
			count[4]++ , numberOfStudents++;
		//and so on ... for grade = C, D, F	
		else{ cout << "Wrong input. Please input again." << endl;
		} 
	}
	while(true);



	cout << "In total " << count[0] + count[1] + count[2] + count[3] + count[4] << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";		
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	//	and so on ... for grade = C, D, F
	return 0;

	
}