/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Evgeni Dimov
* @idnumber 45137
* @task 4
* @compiler VC
*
*/

#include<iostream>
using namespace std;


int main() {
	char figure;
	cin >> figure;
	cin.ignore();

	char buff1[4];
	char buff2[4];
	cin.getline(buff1, 4);
	cin.getline(buff2, 4);


	int figureX = buff1[0] - 96;
	int figureY = buff1[2] - 48;

	int kingX = buff2[0] - 96;
	int kingY = buff2[2] - 48;

	switch (figure) {
	case 'Q': {
		if (figureX == kingX || figureY == kingY || abs(figureX - kingX) == abs(figureY - kingY)) {
			cout << "Yes\n"; break;
		}
		else {
			cout << "No\n"; break;
		}
	}
	case 'B': {
		if (abs(figureX - kingX) == abs(figureY - kingY)) {
			cout << "Yes\n"; break;
		}
		else {
			cout << "No\n";
			break;
		}
	}
	case 'R': {
		if (figureX == kingX || figureY == kingY) {
			cout << "Yes\n";
			break;
		}
		else {
			cout << "No\n";
			break;
		}
	}
	case 'N': {
		if (abs(figureX - kingX) == abs(figureY - kingY) - 1 || abs(figureX - kingX) - 1 == abs(figureY - kingY))
		{
			cout << "Yes\n";
			break;
		}
		else
		{
			cout << "No\n";
			break;
		}
	}
	default: {
		cout << "Bad figure type!\n";
		break;
	}

	}

	return 0;
}