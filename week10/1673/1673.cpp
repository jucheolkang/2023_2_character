#include <iostream>
using namespace std;

int main() {
    int n, k;

    while (cin >> n >> k) {
        int total_chickens = n; // �� ġŲ ����
        int max_chickens = 0;   // ���� �� �ִ� �ִ� ġŲ ����
        max_chickens = n; // ó�� �ֹ��� ġŲ ����

        while (total_chickens >= k) {

            // k���� ������ ������ ġŲ �������� ��ȯ
            int exchanged_chickens = total_chickens / k;
            max_chickens += exchanged_chickens; // �ִ� ġŲ ���� ������Ʈ
            // ��ȯ�� ġŲ ������ �����ϰ� ���� ġŲ ���� ���� ����
            total_chickens = total_chickens % k + exchanged_chickens;
        }

        cout << max_chickens << endl;
    }

    return 0;
}
