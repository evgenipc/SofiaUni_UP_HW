/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Evgeni Dimov
* @idnumber 45137
* @task 2
* @compiler VC
*
*/

#include<iostream>
using namespace std;

void ValidateEGN(const long long);
bool CheckControlNumber(const long long);
bool CheckDate(const long long);
void DataPrint(const long long);

int main() {
	long long egn = 0;
	cin >> egn;

	ValidateEGN(egn);
	return 0;
}

void ValidateEGN(const long long egn) {
	if (egn / (1e9) < 1 || egn / (1e9) >= 10) {
		cout << "Bad input data!\n";
		return;
	}
	if (CheckControlNumber(egn) && CheckDate(egn)) {
		DataPrint(egn);
	}
	else
		cout << "Bad input data!\n";
}

bool CheckControlNumber(const long long egn) {

	int egn1 = egn / (int)1e9;
	int egn2 = (egn / (int)1e8) % 10;
	int egn3 = (egn / (int)1e7) % 10;
	int egn4 = (egn / (int)1e6) % 10;
	int egn5 = (egn / (int)1e5) % 10;
	int egn6 = (egn / (int)1e4) % 10;
	int egn7 = (egn / (int)1e3) % 10;
	int egn8 = (egn / (int)1e2) % 10;
	int egn9 = (egn / (int)1e1) % 10;
	int egn10 = egn % 10;
	int control = (egn1 * 2 + egn2 * 4 + egn3 * 8 + egn4 * 5 + egn5 * 10
		+ egn6 * 9 + egn7 * 7 + egn8 * 3 + egn9 * 6) % 11;
	if (control < 10 && control == egn10)
		return true;
	if (control == 10 && egn10 == 0)
		return true;
	return false;
}

bool CheckDate(const long long egn) {
	int day = (egn / (int)1e4) % 100;
	int month = (egn / (int)1e6) % 100;
	int year = (egn / (int)1e8);

	if (day > 31)
		return false;
	if (month > 12)
		return false;
	return true;
}

void DataPrint(const long long egn) {
	int day = (egn / (int)1e4) % 100;
	int month = (egn / (int)1e6) % 100;
	int year = (egn / (int)1e8);
	int sex = (egn / 10) % 10;


	if (day < 10)
		cout << "0" << day;
	else
		cout << day;

	cout << ".";

	if (month < 10)
		cout << "0" << month;
	else
		cout << month;

	if (sex % 2 == 0)
		cout << ".19" << year << " M\n";
	else
		cout << ".19" << year << " F\n";
}


