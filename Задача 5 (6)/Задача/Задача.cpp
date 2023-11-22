#include <iostream>
#include <cmath>

bool check(double x, double y) {
    return (y - x >= 0) && (y + x <= 0) && (y + 2 >= 0) && (y + 1 <= 0) && (x * x - std::exp(-2) <= 0);
}

void solve() {
    double left = -20000, right = 20000;
    double precision = 0.00001;

    while (right - left > precision) {
        double mid = (left + right) / 2;

        if (check(mid, -mid - 1)) {
            left = mid;
        }
        else {
            right = mid;
        }
    }

    std::cout << "x: " << left << " y: " << -left - 1 << std::endl;
}

int main() {
    solve();
    return 0;
}