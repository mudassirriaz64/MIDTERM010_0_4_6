#include<iostream>
using namespace std;
int main()
{
	int salary = 1, employee_rating = 0, salaryafterincrement = 0, salaryafterbonus = 0;
	float increment_percentage = 0, bonus_percentage = 0;
	char user_choice;
	do
	{
		cout << "Enter monthly salary of employee :";
		cin >> salary;
		salary = salary * 12;
		cout <<"Enter employee rating(out of 10): ";
		cin >> employee_rating;
		increment_percentage = (5 * salary) / 100;
		salaryafterincrement = salary + increment_percentage;
		cout << "Total Salary of this year = " << salary << endl;
		if (employee_rating >= 5 && employee_rating <= 10)
		{
			bonus_percentage = (2 * salary) / 100;
			salaryafterbonus = salaryafterincrement + bonus_percentage;
			cout << "Total yearly salary of this year after bonus and increment= " << salaryafterbonus << endl;
		}
		else
		{
			cout << "Total yearly salary of this year after yearly increment = " << salaryafterincrement << endl;
			cout << "As your rating was below 5, so you can not get a bonus increase " << endl;
		}
		cout << "Do you want to calculate salary of another year(Y/N) ?" << endl;
		cin >> user_choice;
		if (user_choice == 'Y' || user_choice == 'y')
		{
			continue;
		}
	} while (user_choice != 'N' && user_choice != 'n');
	system("pause");
	return 0;
}