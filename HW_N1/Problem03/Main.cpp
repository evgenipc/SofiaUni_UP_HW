/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Evgeni Dimov
* @idnumber 45137
* @task 3
* @compiler VC
*
*/

#include<iostream>
using namespace std;

int main() {

	unsigned a;
	cin >> a;
	// Mask= 15 is 1111 in binary
	unsigned fourBitMask = 16-1;
	// & 1111 gives the last 4 bits of the number
	unsigned tmp = fourBitMask & a;
	if (tmp == ((a >> 4)&fourBitMask) &&
		tmp == ((a >> 4)&fourBitMask) &&
		tmp == ((a >> 4)&fourBitMask) &&
		tmp == ((a >> 4)&fourBitMask) &&
		tmp == ((a >> 4)&fourBitMask) &&
		tmp == ((a >> 4)&fourBitMask) &&
		tmp == ((a >> 4)&fourBitMask)
		)
	{
		cout << "Yes" << endl;
	}
	else 
		cout << "No" << endl;
	return 0;
}