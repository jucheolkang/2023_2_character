#include <iostream>
using namespace std;

int main() {
    int n, k;

    while (cin >> n >> k) {
        int total_chicken = n;
        int remaining_coupon = n;

        while (remaining_coupon >= k) {
            int exchanged_chicken = remaining_coupon / k;
            remaining_coupon = remaining_coupon % k + exchanged_chicken;
            total_chicken += exchanged_chicken;
        }

        cout << total_chicken << endl;
    }

    return 0;
}