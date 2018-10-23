#include<iostream>

using namespace std;

int main() {
	int int1, int2, int3, int4;
	const int average = 4;
	cout << "please enter first number " << endl;
	cin >> int1;
	cout << "please enter second number " << endl;
	cin >> int2;
	cout << "please enter third number " << endl;
	cin >> int3;
	cout << "please enter fourth number " << endl;
	cin >> int4;
	cout << "the average of " << int1 << ", " << int2 << ", " << int3 << ", " << int4 << endl;
	cout << " is " << (int1 + int2 + int3 + int4) / average << endl;
	system("pause");
}