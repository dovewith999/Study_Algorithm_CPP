#include <bits/stdc++.h>
using namespace std;

// 한 번의 테스트 케이스를 처리하는 solve 함수
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // LIS를 저장할 벡터
    vector<int> lis;

    for (int x : arr) {
        // lis 벡터에서 x가 들어갈 위치 탐색
        auto it = lower_bound(lis.begin(), lis.end(), x);
        if (it == lis.end()) {
            // x가 가장 큰 경우 → 맨 뒤에 추가
            lis.push_back(x);
        } else {
            // 기존 위치에 x로 대체 (길이는 변하지 않음)
            *it = x;
        }
    }

    // LIS의 길이 출력
    cout << lis.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    // 문제는 단일 테스트 케이스
    solve();
    return 0;
}