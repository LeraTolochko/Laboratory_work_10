#include <iostream>
#include <cmath>

double f(double x) {
    return log2(sqrt(x + 2.8) + sqrt(x + 2));
}

int main() {
    double a, b, t, x;

    std::cout << "Enter value of t: ";
    std::cin >> t;

    std::cout << "Enter value of b: ";
    std::cin >> b;

    a = exp(t) + b;

    std::cout << "Enter value of x: ";
    std::cin >> x;

    double result = f(x);

    std::cout << "The result is: " << result << std::endl;

    return 0;
}