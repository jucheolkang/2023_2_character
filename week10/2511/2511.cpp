#include <iostream>
using namespace std;

int main() {
    int A[10], B[10];

    // A�� B�� �þ���� ī���� ���ڸ� �Է� ����
    for (int i = 0; i < 10; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < 10; ++i) {
        cin >> B[i];
    }

    int scoreA = 0, scoreB = 0;
    char winner = 'D'; // �ʱ⿡ ��� ���·� ����

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
