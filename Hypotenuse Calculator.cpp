#include <iostream>
#include <cmath>

int main() 
{
	double a, b, c;

	std::cout << "Enter side A:";
	std::cin >> a;

	std::cout << "Enter side B: ";
	std::cin >> b;

	// Hypotenuse calculation
	a = pow(a,2);
	b = pow(b, 2);
	c = sqrt(a + b);

	std::cout << "Side C is: " << c;

	return 0;
}