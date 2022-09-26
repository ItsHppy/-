#include <iostream>
using namespace std;
int main() {
	/*
	//if1
	int a;
	cin >> a;
	if (a > 0) {//true
		a += 1;
	}
	cout << a << endl;
	*/
	/*
	//if2
	int a;
	cin >> a;
	if (a > 0) {
		a += 1;
	}
	else {
		a -= 2;// a = a - 2;
	}
	cout << a << endl;
	*/
	/*
	//if3
	int a;
	cin >> a;
	if (a > 0) {
		a += 1;
	}
	else if (a < 0) {
		a -= 2;
	}
	else if (a == 0) {
	a = 10;
}
cout << a << endl;
*/
/*
//if4
int a, b, c;
int k = 0;
cin >> a >> b >> c;
if (a > 0) {
	k++;
}
if (b > 0) {
	k++;
}
if (c > 0) {
	k++;
}
cout << k << endl;
*/
/*
//if6
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a << endl;
	}
	else if (b > a) {
		cout << b << endl;
	}
	else if (a == b) {
		cout << "equals" << endl;
	}
	*/
	/*
	//if7
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << b << endl;
		cout << a << endl;
	}
	else if (a < b) {
		cout << a << endl;
		cout << b << endl;
	}
	else if (a == b) {
		cout << "equals" << endl;
	}
	*/
	/*
	//if8
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a << endl;
		cout << b << endl;
	}
	else if (a < b) {
		cout << b << endl;
		cout << a << endl;
	}
	else if (a == b) {
		cout << "equals" << endl;
		
	}
	*/
	//if10
int a, b;
cin >> a >> b;
int ab = a + b;
if (a != b) {
	a = ab;
	b = ab;
}
else if (a == b) {
	a = 0;
	b = 0;
}
cout << a << endl;
cout << b << endl;
}