#include <iostream>
using namespace std;

int main() {
    const double prod_tube1 = 5; // Продуктивність труби 1
    const double prod_tube2 = 10; // Продуктивність труби 2
    const double prod_tube3 = 15; // Продуктивність труби 3

    double work_time1, work_time2, work_time3; // Часи роботи труб

    cout << "Enter the operating time of each tube:" << endl;
    cin >> work_time1 >> work_time2 >> work_time3;

    double total_water = (prod_tube1 * work_time1) + (prod_tube2 * work_time2) + (prod_tube3 * work_time3);

    cout << "The amount of water collected in the pool: " << total_water << " liters" << endl;

    return 0;
}