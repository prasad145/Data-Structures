#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}		

		int maxi = a[0], sum = 0;
		for(int i = 0; i < n; i++)
		{
			sum  += a[i];
			if(sum > maxi)
			{
				maxi = sum;
			}
			if(sum < 0)
			{
				sum = 0;
			}
		}
		cout << maxi << "\n";
	}
	return 0;
}