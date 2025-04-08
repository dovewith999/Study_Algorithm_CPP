#include <iostream>
#include <algorithm>

#define MAX 1001

using namespace std;

int n;
double sum = 0;
double arr[MAX];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; ++i) 
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i < n; ++i) 
		sum = sum + (arr[i] / arr[n - 1]) * 100;

	cout << sum / n;

	return 0;
}