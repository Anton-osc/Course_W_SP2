#include <iostream>
#include "calculator.h"

int main() {
	double a, b;
        
	std::cout << "Enter A: ";
	std::cin >> a;

	std::cout << "Enter B: ";
	std::cin >> b;
	
	Calculator calc;

	std::cout << "Add: " << calc.Add(a, b) << std::endl;
        std::cout << "Sub: " << calc.Sub(a, b) << std::endl;

	return 0;
}
