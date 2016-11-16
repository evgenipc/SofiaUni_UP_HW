/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Evgeni Dimov
* @idnumber 45137
* @task 5
* @compiler VC
*
*/

#include<iostream>
using namespace std;


int main() {
	float x, y, u, v;
	cin >> x >> y >> u >> v;
	float distance = sqrt((x+u)*(x+u) + (y+v)*(y+v));
	
	if (distance < 1)
	{
		cout << "60\n";
	}
	else if (distance == 1 || distance == 3 || distance == 8)
	{
		cout << "0\n";
	}
	else if (distance < 3) {
		cout << "20\n";
	}
	else if (distance < 8) {
		cout << "10\n";
	}
	else {
		cout << "0\n";
	}
	return 0;
}