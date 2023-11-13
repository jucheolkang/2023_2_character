#include <iostream>
using namespace std;

int main() {
    int cA[10];
    int cB[10];
    int scoreA = 0;
    int scoreB = 0;
    char last = 'D';

    // A의 카드 입력 받기
    for (int i = 0; i < 10; i++) {
        cin >> cA[i];
    }

    // B의 카드 입력 받기
    for (int i = 0; i < 10; i++) {
        cin >> cB[i];
    }

    // 각 라운드 진행
    for (int i = 0; i < 10; i++) {
        if (cA[i] > cB[i]) {
            scoreA += 3;
            last = 'cA';
        }
        else if (cA[i] < cB[i]) {
            scoreB += 3;
            last = 'cB';
        }
        else {
            scoreA++;
            scoreB++;
        }
    }

    if (scoreA > scoreB) {
        cout << scoreA << " " << scoreB << endl;
        cout << "A" << endl;
    }
    else if (scoreA < scoreB) {
        cout << scoreA << " " << scoreB << endl;
        cout << "B" << endl;
    }
    else {
        cout << scoreA << " " << scoreB << endl;
        cout << last << endl;
    }

    return 0;
}
