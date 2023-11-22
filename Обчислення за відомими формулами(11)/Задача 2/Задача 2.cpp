#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double h0, v0, t, g = 9.81;

    cout << "Enter the height first (h0): ";
    cin >> h0;

    cout << "Enter the rate of fall (v0): ";
    cin >> v0;

    cout << "Enter the time after the first second (t): ";
    cin >> t;

    double h = h0 + v0 * t - 0.5 * g * pow(t, 2);

    cout << "Distance traveled (h) after the first and second seconds of fall: " << h << " meters" << endl;

    return 0;
}