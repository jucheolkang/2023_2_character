#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, ary[1000], price = 0, res = 0, j;
	cin >> n;
	//줄의 개수 N  <=100
	for (int i = 1; i <= n; i++)
	{
		//N개의 수 주어짐 <=1000
		cin >> ary[i];
		for (j = 1; j <= ary[i]; j++)
		{
			//만약 ary값이 j로 나눴을 때 0이면 진행 (약수)
			if (ary[i] % j == 0)
			{
				//약수의 개수 ++;
				price++;
			}
		}
		if (price == 2)//만약 약수가 2가 나오면
		{
			res++;//결과값 +1
		}
		price = 0;//개수 다시 0

	}
	cout << res;
	
	return 0;
}
