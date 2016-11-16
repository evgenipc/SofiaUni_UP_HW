/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Evgeni Dimov
* @idnumber 45137
* @task 7
* @compiler VC
*
*/

#include<iostream>
using namespace std;

// return 0 for neautral  1 for Good -1 for Bad
int inYanCheck(float x, float y)
{
	int result = 0;
	// 1st stage devide the circle to two halves
	if (x > 0)	result = -1;
	else if (x < 0) result = 1;

	//2nd stage check for the half circles

	if (sqrt((y + 3)*(y + 3) + x*x) < 3)
		result = -1;
	else if (sqrt((y + 3)*(y + 3) + x*x) == 3 && x<0)
		result = 0;

	if (sqrt((y - 3)*(y - 3) + x*x) < 3)
		result = 1;
	else if (sqrt((y - 3)*(y - 3) + x*x) == 3 && x>0)
		result = 0;

	//3rd stage check for the small circles 

	if (sqrt((y + 3)*(y + 3) + x*x) < 1)
		result = 1;
	else if (sqrt((y + 3)*(y + 3) + x*x) == 1)
		result = 0;

	if (sqrt((y - 3)*(y - 3) + x*x) < 1)
		result = -1;
	else if (sqrt((y - 3)*(y - 3) + x*x) == 1)
		result = 0;

	return result;

}





int main()
{
	float a = 0;
	float b = 0;
	cin >> a;
	cin >> b;

	switch (inYanCheck(a, b))
	{
	case 0: cout << "Neutral" << endl; break;
	case 1: cout << "Good" << endl; break;
	case -1: cout << "Evil" << endl; break;
	}


	return 0;
}