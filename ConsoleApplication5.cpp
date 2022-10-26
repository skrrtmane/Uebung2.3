#include <iostream>

using namespace std;

int main() {

	float x;
	cin >> x;

	float dreix = x * x * x;
	float zweix = x * x;

	float oberesheise = 3 * dreix + 2 * zweix;

	float unteresheise = x * 2;

	cout << oberesheise / unteresheise;
	return 0;
}