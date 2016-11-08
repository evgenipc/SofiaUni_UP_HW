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

void CheckHexDigits(const unsigned int number) {
	int chastno = number / 16;
	int ostatuk = number % 16;
	int tmp = ostatuk;

	do {
		ostatuk = chastno % 16;
		chastno = chastno / 16;
		if (tmp != ostatuk) {
			cout << "No\n";
			return;
		}

	} while (chastno > 0);

	cout << "Yes\n";

}

int main() {

	unsigned int a;
	cin >> a;

	CheckHexDigits(a);

	return 0;
}