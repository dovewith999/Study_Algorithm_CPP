#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
bool isPossible = true;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        string a, b;
        cin >> a >> b;
        isPossible = true;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b)
            cout << "Possible" << '\n';
        
        else 
            cout << "Impossible" << '\n';
    }

    return 0;
}