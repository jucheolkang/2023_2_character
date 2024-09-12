#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int count = 0; 
    int result = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
            if (count == K) {
                result = i;
                break;
            }
        }
    }

    if (count < K) {
        cout << "0" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}