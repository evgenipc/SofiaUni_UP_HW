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
	int figureX = 0, figureY = 0, kingX = 0, kingY = 0;
	char figure, figureXchar, kingXchar;

	cin >> figure;
	cin >> figureXchar >> figureY;
	cin >> kingXchar >> kingY;

	// magic numbers turn char number to int (ASCII table casted to int)
	figureX = figureXchar - 96;
	kingX = kingXchar - 96;

	// Validate Input 
	if (figureX < 1 || figureX>8 ||
		figureY < 1 || figureY>8 ||
		kingX < 1 || kingX>8 ||
		kingY < 1 || kingY>8)
	{
		cout << "Bad input" << endl;
		return 0;
	}
	// Try moves
	switch (figure) {
	case 'Q': {
		if (figureX == kingX || figureY == kingY || abs(figureX - kingX) == abs(figureY - kingY))
			cout << "Yes\n";
		else
			cout << "No\n";
		break;
	}
	case 'B': {
		if (abs(figureX - kingX) == abs(figureY - kingY))
			cout << "Yes\n";
		else
			cout << "No\n";
		break;
	}
	case 'R': {
		if (figureX == kingX || figureY == kingY)
			cout << "Yes\n";
		else
			cout << "No\n";
		break;
	}
	case 'N': {
		if (((abs(figureX - kingX) == abs(figureY - kingY) - 1)
			&& (abs(figureX - kingX) == 1)) ||
			((abs(figureX - kingX) - 1 == abs(figureY - kingY))
				&& (abs(figureX - kingX) == 2)))
			cout << "Yes\n";
		else
			cout << "No\n";
		break;
	}
	default: {
		cout << "Bad figure type!\n";
		break;
		}
	}
	return 0;
}