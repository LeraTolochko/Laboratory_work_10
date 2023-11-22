#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

// Function to calculate Z1
double calculateZ1(double a) {
    double Z1 = 0;
    for (int i = 0; i < 4; i++) {
        Z1 += cos(a + 2 * i * M_PI / 7);
    }
    return Z1;
}

// Function to calculate Z2
double calculateZ2(double a) {
    return 4 * cos(a) - cos(a - 2 * M_PI / 7) - cos(a + 2 * M_PI / 7) - cos(a + 4 * M_PI / 7);
}

int main() {
    std::cout << "Enter the value of a: ";
    double a;
    std::cin >> a;

    double Z1 = calculateZ1(a);
    double Z2 = calculateZ2(a);

    std::cout << "The value of Z1 is: " << Z1 << std::endl;
    std::cout << "The value of Z2 is: " << Z2 << std::endl;

    return 0;
}