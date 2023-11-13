#include <iostream>
using namespace std;

int main() {
    int A[10], B[10];

    // A와 B가 늘어놓은 카드의 숫자를 입력 받음
    for (int i = 0; i < 10; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < 10; ++i) {
        cin >> B[i];
    }

    int scoreA = 0, scoreB = 0;
    char winner = 'D'; // 초기에 비긴 상태로 설정

    for (int round = 0; round < 10; ++round) {
        if (A[round] > B[round]) {
            scoreA += 3;
            winner = 'A';
        }
        else if (A[round] < B[round]) {
            scoreB += 3;
            winner = 'B';
        }
        else {
            scoreA++;
            scoreB++;
        }

        if (scoreA > scoreB) {
            winner = 'A';
        }
        else if (scoreB > scoreA) {
            winner = 'B';
        }
    }

    cout << scoreA << " " << scoreB << endl;
    cout << winner << endl;

    return 0;
}
