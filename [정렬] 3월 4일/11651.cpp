#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// x,y 좌표에 대한 구조체
struct coordinate
{
    int x, y;
};

// 비교 함수
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    return a.first < b.first; // else를 굳이 쓸 필요 x
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n); // 벡터 초기화

    // 입력
    for (int i = 0; i < n; i++)
    { // x,y 좌표
        cin >> v[i].first >> v[i].second;
    }

    // 연산
    sort(v.begin(), v.end(), cmp); // cmp 값이 false인 경우 swap

    // 출력
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
    return 0;
}