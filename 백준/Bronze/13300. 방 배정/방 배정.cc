#include <iostream>
using namespace std;

int N, K;
int cnt = 0;
int arr[2][6] = { 0 };
int main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> N >> K;

    for (int i = 0; i < N; ++i)
    {
        int gender, grade;
        cin >> gender >> grade;
        arr[gender][grade - 1]++;
    }


    for (int g = 0; g < 2; ++g)
    {
        for (int gr = 0; gr < 6; ++gr)
        {
            if (arr[g][gr] > 0)
            {
                cnt += (arr[g][gr] + K - 1) / K;
            }
        }
    }

    cout << cnt << '\n';
    return 0;
}