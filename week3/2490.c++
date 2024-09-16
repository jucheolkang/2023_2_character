#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int n, a, b, c, d, sum = 0, count = 0;
	for (int i = 0; i < 3; i++)//3번 반복
	{	
		cin >> a >> b >> c >> d ;
		for (int j = 0; j < 4; j++)//4번 반복
		{
			//sum 정의
			sum = a + b + c + d;
			//sum의 합계의 결과값 출력
		}
		if (sum == 1)
			cout << "C\n";
		else if (sum == 2)
			cout << "B\n";
		else if (sum == 3)
			cout << "A\n";
		else if (sum == 4)
			cout << "E\n";
		else if (sum == 0)
			cout << "D\n";
	}

	return 0;
}
