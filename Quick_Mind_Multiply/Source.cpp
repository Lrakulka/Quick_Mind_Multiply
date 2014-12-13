#include <iostream>
// Multiply two numbers < 100
int main (int argc, char* argv[]) {
	if (argc != 3)
		printf ("Arguments not enough or too many\n");
	else {
		int a, b, a1 = atoi(argv[1]), b1 = atoi(argv[2]);
		a = a1 - 100 + b1;
		b = (100 - a1) * (100 - b1);
		if ( b > 100) {
			b -= 100;
			a += 1;
		}
		printf("%d%d\n", a, b);
	}
	return 0;
}