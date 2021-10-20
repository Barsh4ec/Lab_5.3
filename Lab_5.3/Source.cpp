#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double s(const double x);

int main()
{
	double tp, tk, z;
	int n;
	cout << " tp = "; cin >> tp;
	cout << " tk = "; cin >> tk;
	cout << " n = "; cin >> n;

	cout << fixed;
	cout << "-------------------------" << endl;
	cout << "|" << setw(10) << "t" << " |"
		<< setw(10) << "z" << " |" << endl;
	cout << "-------------------------" << endl;

	double dt = (tk - tp) / n;
	double t = tp;
	while (t <= tk)
	{
		z =	s(2 * t + 1) + 2 * s(t * t) + sqrt(s(1));
		cout << "|" << setw(10) << setprecision(2) << t << " |"
			<< setw(10) << setprecision(5) << z << " |" << endl;
		t += dt;
	}

	cout << "-------------------------" << endl;

	return 0;
}

double s(const double x)
{
	if (abs(x) >= 1 || x == 0)
		return (cos(x) * cos(x) + 1) / exp(x);
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = (pow(2, 2 * k + 1) * pow(x, 2 * k + 1)) / (((2. * k) - 1) * (2. * k) * ((2. * k) + 1));
			a *=R;
			S += a;

		} while (k < 4);
		S = 1 / sin(2 * x) * S;
		return S;
	}

}