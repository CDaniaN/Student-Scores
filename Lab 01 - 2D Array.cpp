//Dania Nasereddin 1-29-20 #19
// Lab 01 - 2D Array
// This program is a 2D array that takes in three students
// scores for three test scores and outputs their scores and
// their average with an option to update their scores.

#include <iostream>
using namespace std;

int main()
{
	int tests[3][3]; // A 2D array that is 3 by 3 (3 students and 3 tests)
	int sum = 0, average, student, exam, score;
	char update;
	cout << "~~~~ Grade Book Application ~~~~\n";
	for (int e = 0; e < 3; e++) //Goes through array and stores test scores from user
	{
		for (int s = 0; s < 3; s++)
		{
			cout << "Enter student " << e + 1 << "'s exam " << s + 1 << " score: "; //prints it back to user
			cin >> tests[e][s]; //stores scores entered in array
		}
	}
	
	for (int e = 0; e < 3; e++) //Goes through array and prints test scores entered by user
	{
		for (int s = 0; s < 3; s++)
		{
			cout << "Student " << e + 1 << "'s exam " << s + 1 << " score is: " << tests[e][s]<< endl; //prints it back to user
		}
	}
	
	for (int e = 0; e < 3; e++) 
	{
		for (int s = 0; s < 3; s++) //Takes score of student for each exam and adds them
		{
			sum += tests[e][s]; //Stores the sum of all exams in sum
		}
		double average = sum / 3.0; //takes sum and divides it by three to get average and stores it in average
		cout << "The average score for student " << e + 1 << " is " << average << endl; //prints it back to user
		sum = 0;
	}

	cout << "Would you like to update an exam score? (Y/N): "; //gives option to user to update any scores 
	cin >> update;

    while (update != 'N' && update != 'n') // if user does not say no
	{
		cout << "Enter a student's number (1-3): "; 
		cin >> student;
		cout << "Enter an exam number (1-3): ";
		cin >> exam;
		cout << "Enter a new score for student " << student << "'s exam " << exam << ": ";
		cin >> score;
		cout << "Student " << student << "'s exam " << exam << " score is : " << score << endl;
		tests[student - 1][exam - 1] = score; // updates the array
		cout << "Would you like to update an exam score? (Y/N): "; //gives option to user to update any scores again
		cin >> update; 
	}

	for (int e = 0; e < 3; e++)
	{
		for (int s = 0; s < 3; s++) //Takes score of student for each exam and adds them
		{
			sum += tests[e][s]; //Stores the sum of all exams in sum
		}
		double average = sum / 3.0; //takes sum and divides it by three to get average and stores it in average
		cout << "The average score for student " << e + 1 << " is " << average << endl; //prints it back to user
		sum = 0;
	}
	system("PAUSE>nul");
	return 0;
}


