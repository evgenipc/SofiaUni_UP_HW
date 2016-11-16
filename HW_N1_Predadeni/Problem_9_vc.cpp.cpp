/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Evgeni Dimov
* @idnumber 45137
* @task 9
* @compiler VC
*
*/

// Four bit calculator

#include<iostream>
using namespace std;
int main()
{
	unsigned a = 0, b = 0, result = 0;
	char ch;
	cin >> a >> ch >> b;

	a %= 16;
	b %= 16;

	switch (ch)
	{
		case '-': result = a - b; break;
		case '+': result = a + b; break;
		case '.': result = a * b; break;
		case '/':
		{
			if (b == 0) {
				cout << "Division by zero!" << endl;
				return 0;
			}
			result = a / b; 
			break;
		}
		case '%':
		{
			if (b == 0) {
				cout << "Division by zero!" << endl;
				return 0;
			}
			result = a % b;
			break;
		}	
	}
	result %= 16;
	cout << result << endl;
	return 0;
}