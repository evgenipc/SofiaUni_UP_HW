/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Evgeni Dimov
* @idnumber 45137
* @task 10
* @compiler VC
*
*/

#include<iostream>
using namespace std;

int main()
{
	double a1, b1,c1,a2,b2,c2;
	cin >> a1 >> b1 >> c1;
	cin >> a2 >> b2 >> c2;

	if (a1 / a2 == b1 / b2 && b1 / b2 == c1 / c2)
		cout << "Many solutions" << endl;

	else if (a1 / a2 == b1 / b2 && b1 / b2 != c1 / c2)
		cout << "No solution" << endl;

	else
	{
		cout<< ((c1*b2) - (b1*c2)) / ((a1*b2) - (b1*a2))<<" ";
		cout << ((a1*c2) - (c1*a2)) / ((a1*b2) - (b1*a2)) << endl;
	}
	return 0;
}