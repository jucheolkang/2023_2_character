#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int P[1000];
	int N;
	int sum = 0;
	int res = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&P[i]);
		
	}
	sort(P, P+N);
	
	for (int i = 0; i < N; i++)
	{
		sum += P[i];
		res += sum;
	}
	cout << res;
	return 0;
}
