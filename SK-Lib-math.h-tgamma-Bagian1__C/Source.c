#include <stdio.h>      /* printf */
#include <math.h>       /* tgamma */
#include <conio.h>

int main() {
	double x, hasil;
	x = 0.5;
	hasil = tgamma(x);
	printf("tgamma(%f) = %f\n", x, hasil);
	_getch();
	return 0;
}