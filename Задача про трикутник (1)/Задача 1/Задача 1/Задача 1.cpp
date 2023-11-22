#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>


void findHeightAndBisector(double i, double& height, double& bisector) {
    double side1 = sqrt(i * i + (i - 1) * (i - 1));
    double side2 = sqrt(i * i + (i + 1) * (i + 1));
    double base = 2 * i;

    height = (side1 + side2 - base) / 2;

    double center = base / 2;
    double radius = center / sin(M_PI / 3);

    bisector = radius * cos(M_PI / 6);
}

int main() {
    double i;
    std::cout << "Enter the number for the current variant: ";
    std::cin >> i;

    double height, bisector;
    findHeightAndBisector(i, height, bisector);

    std::cout << "The height of the triangle is: " << height << std::endl;
    std::cout << "The bisector of the triangle is: " << bisector << std::endl;

    return 0;
}