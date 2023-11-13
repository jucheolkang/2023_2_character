#include <iostream>
using namespace std;

int main() {
    int n, k;

    while (cin >> n >> k) {
        int total_chickens = n; // 총 치킨 개수
        int max_chickens = 0;   // 먹을 수 있는 최대 치킨 개수
        max_chickens = n; // 처음 주문한 치킨 개수

        while (total_chickens >= k) {

            // k개의 도장을 모으면 치킨 쿠폰으로 교환
            int exchanged_chickens = total_chickens / k;
            max_chickens += exchanged_chickens; // 최대 치킨 개수 업데이트
            // 교환한 치킨 쿠폰은 제외하고 남은 치킨 쿠폰 개수 갱신
            total_chickens = total_chickens % k + exchanged_chickens;
        }

        cout << max_chickens << endl;
    }

    return 0;
}
