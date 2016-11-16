/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Evgeni Dimov
* @idnumber 45137
* @task 6
* @compiler VC
*
*/

#include<iostream>
using namespace std;

int min(const int a,const  int b) {
	if (a < b) 
		return a;
	else 
		return b;
}
int max(const int a, const int b) {
	if (a > b)
		return a;
	else
		return b;
}

int main() {
	int left1 = 0, left2 = 0,
		right1 = 0, right2 = 0,
		top1 = 0, top2 = 0,
		bottom1 = 0, bottom2 = 0,
		h1 = 0, h2 = 0,
		w1 = 0, w2 = 0,
		S=0;
	// Cin  CornerX, CornerY,height,width
	cin >> left1 >> bottom1 >> h1 >> w1;
	cin >> left2 >> bottom2 >> h2 >> w2;
	right1 = left1 + w1;
	right2 = left2 + w2;
	top1 = bottom1 + h1;
	top2 = bottom2 + h2;
	// Intersecting rect right=min(r1,r2) left=max(l1,l2) top=min(top1,top2) bottom=max(b1,b2)
	S = (min(right1, right2) - max(left1, left2))*(min(top1, top2) - max(bottom1, bottom2));
	if (S > 0)
		cout << S << endl;
	else
		cout << 0 << endl;
	return 0;
}
