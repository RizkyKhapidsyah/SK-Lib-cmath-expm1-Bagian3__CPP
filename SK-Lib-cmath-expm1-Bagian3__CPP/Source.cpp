// CPP implementation of the
// above function
#include <cmath>
#include <iostream>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	int x = -5;
	double answer;
	answer = expm1(x);

	cout << "e^" << x << " - 1 = " << answer << endl;

	_getch();
	return 0;
}