#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int n{}, k;
	P = 1;
	k = 1;
	while (k <= n)

	{
		S = 0;
		n = 1;
		while (n <= 25)

		{
			S += cos(n) + sqrt(cos(k+n) * cos(k+n)) ;
			n++;

		}
		P *= sqrt(S) / (1 + S);
		k++;

	}
	cout << P << endl;
	P = 1;
	k = 1;
	do
	{
		S = 0;
		n = 1;
		do
		{
			S += cos(n) + sqrt(cos(k + n) * cos(k + n));
			k++;
		} while (n <= 25);
		P *= sqrt(S) / (1 + S);
		n++;
	} while (k <= n);
	cout << P << endl;
	P = 1;
	for (k = 1; k <= n; k++)

	{
		S = 0;
		for (n = 1; n <= 25; n++)

		{
			S += cos(n) + sqrt(cos(k + n) * cos(k + n));

		}
		P *= sqrt(S) / (1 + S);

	}
	cout << P << endl;
	P = 1;
	for (k = n; k >= 1; k--
		)

	{
		S = 0;
		for (n = 25; n >= 1; n--
			)

		{
			S += cos(n) + sqrt(cos(k + n) * cos(k + n));
		}
		P *= sqrt(S) / (1 + S);
	}
	cout << P << endl;
	return 0;
}