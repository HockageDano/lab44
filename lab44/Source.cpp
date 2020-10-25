#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << "Rekhtman Mykhailo";
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -7 - R)
			y = R;
		else
			if (-7 - R <= x && x <= -7)
				y = sqrt(((x - 7) * (x - 7)) + (2 * (R * R)));
			else
				if (-7 <= x && x <= -7 + R)
					y = sqrt(((x - 7) * (x - 7)) + (2 * (R * R)));
				else
					if (-7 + R <= x && x <= -4)
						y = R;
					else
						if (-4 <= x && x <= 0)
							y = ((3 / 4) * R);
						else
							if (0 <= x && x <= ((atan(1) * 4) / 2))
								y = sqrt((R * R) - (x - ((atan(1) * 4) / 2) * (atan(1) * 4) / 2));
							else
								if (((atan(1) * 4) / 2) <= x && x <= (atan(1) * 4))
									y = sqrt((R * R) - (x - ((atan(1) * 4) / 2) * (atan(1) * 4) / 2));
								else
									y = (1 + (sqrt(2) * (atan(1) * 4)));
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}