#include<iostream>
#include<iomanip>
#include<ctime>
#include<chrono>
#include<thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono_literals;
using std::chrono::system_clock;

void addition();
void subtraction();
void multiplication();
void division();
void menu();

int main()
{

	cout << fixed;

	menu();

	system("pause");
}//end main function

void addition()
{
	srand(time(0));
	int correct{ 0 };
	int incorrect{ 0 };

	int question{ 0 };
	system("cls");
	cout << "Please enter the amount of questions you'd like:" << endl;
	cout << "->";
	cin >> question;
	if (question <= 0)
	{
		system("cls");
		cout << "Please enter the amount of questions you'd like:" << endl;
		cout << "->";
		cin >> question;
	}

	for (int x{ 1 }; x <= question; x++)
	{
		int answer{ 0 };
		int a{ 1 + rand() % 10 };
		int b{ 1 + rand() % 10 };
		

		system("cls");
		cout << "Question " << x << ":" << endl;
		cout << "What is " << a << " + " << b << "?" << endl;
		cout << "->";
		cin >> answer;

		if (answer == (a + b))
		{
			cout << "\nCorrect!" << endl;
			sleep_for(1s);
			++correct;

		}//end if
		else
		{
			cout << "\nIncorrect..." << endl;
			sleep_for(1s);
			++incorrect;
		}//end else
	}//end for
	system("cls");
	cout << "    " << "Correct" << "    " << "   " << "Incorrect" << "   " << endl;
	cout << "------------------------------\n" << endl;
	cout << "       " << correct << "       " << "       " << incorrect << "   \n" << endl;

}//end function addition

void subtraction()
{
	srand(time(0));
	int correct{ 0 };
	int incorrect{ 0 };

	int question{ 0 };
	system("cls");
	cout << "Please enter the amount of questions you'd like:" << endl;
	cout << "->";
	cin >> question;
	if (question <= 0)
	{
		system("cls");
		cout << "Please enter the amount of questions you'd like:" << endl;
		cout << "->";
		cin >> question;
	}

	for (int x{ 1 }; x <= question; x++)
	{
		int answer{ 0 };
		int a{ 1 + rand() % 10 };
		int b{ 1 + rand() % 10 };


		system("cls");
		cout << "Question " << x << ":" << endl;
		cout << "What is " << a << " - " << b << "?" << endl;
		cout << "->";
		cin >> answer;

		if (answer == (a - b))
		{
			cout << "\nCorrect!" << endl;
			sleep_for(1s);
			++correct;

		}//end if
		else
		{
			cout << "\nIncorrect..." << endl;
			sleep_for(1s);
			++incorrect;
		}//end else
	}//end for
	system("cls");
	cout << "    " << "Correct" << "    " << "   " << "Incorrect" << "   " << endl;
	cout << "------------------------------\n" << endl;
	cout << "       " << correct << "       " << "       " << incorrect << "   \n" << endl;

}//end function subtraction

void multiplication()
{
	srand(time(0));
	int correct{ 0 };
	int incorrect{ 0 };

	int question{ 0 };
	system("cls");
	cout << "Please enter the amount of questions you'd like:" << endl;
	cout << "->";
	cin >> question;
	if (question <= 0)
	{
		system("cls");
		cout << "Please enter the amount of questions you'd like:" << endl;
		cout << "->";
		cin >> question;
	}


	for (int x{ 1 }; x <= question; x++)
	{
		int answer{ 0 };
		int a{ 1 + rand() % 10 };
		int b{ 1 + rand() % 10 };


		system("cls");
		cout << "Question " << x << ":" << endl;
		cout << "What is " << a << " * " << b << "?" << endl;
		cout << "->";
		cin >> answer;

		if (answer == (a * b))
		{
			cout << "\nCorrect!" << endl;
			sleep_for(1s);
			++correct;

		}//end if
		else
		{
			cout << "\nIncorrect..." << endl;
			sleep_for(1s);
			++incorrect;
		}//end else
	}//end for
	system("cls");
	cout << "    " << "Correct" << "    " << "   " << "Incorrect" << "   " << endl;
	cout << "------------------------------\n" << endl;
	cout << "       " << correct << "       " << "       " << incorrect << "   \n" << endl;

}//end function multiplication

void division()
{
	srand(time(0));
	int correct{ 0 };
	int incorrect{ 0 };

	int question{ 0 };
	system("cls");
	cout << "Please enter the amount of questions you'd like:" << endl;
	cout << "->";
	cin >> question;
	if (question <= 0)
	{
		system("cls");
		cout << "Please enter the amount of questions you'd like:" << endl;
		cout << "->";
		cin >> question;
	}


	for (int x{ 1 }; x <= question; x++)
	{
		int answer{ 0 };
		int a{ 1 + rand() % 10 };
		int b{ 1 + rand() % 10 };


		system("cls");
		cout << "Question " << x << ":" << endl;
		cout << "What is " << a << " / " << b << "?" << endl;
		cout << "->";
		cin >> answer;

		if (answer == (a / b))
		{
			cout << "\nCorrect!" << endl;
			sleep_for(1s);
			++correct;

		}//end if
		else
		{
			cout << "\nIncorrect..." << endl;
			sleep_for(1s);
			++incorrect;
		}//end else
	}//end for
	system("cls");
	cout << "    " << "Correct" << "    " << "   " << "Incorrect" << "   " << endl;
	cout << "------------------------------\n" << endl;
	cout << "       " << correct << "       " << "       " << incorrect << "   \n" << endl;

}//end function division

void menu()
{
	int answer{ 0 };
	system("cls");
	cout << "Please choose from the menu below:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "->";
	cin >> answer;
	switch (answer)
	{
	case 1:
		addition();
		break;
	case 2:
		subtraction();
		break;
	case 3:
		multiplication();
		break;
	case 4:
		division();
		break;
	default:
		menu();
		break;
	}
}//end function menu