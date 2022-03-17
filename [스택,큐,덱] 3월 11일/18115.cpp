#include <iostream>
#include <deque>
#include <vector>
#include <algorithm> // 잊지말자: reverse 함수 사용하기 위해 algorithm 헤더 작성

using namespace std;

// 원리 자체를 이해하기까지 오래 걸렸던 문제...
// 앞뒤로 자유롭게 push, pop 해야하므로 deque 이용

int cardReverse(vector<int> v, deque<int> dq, int n)
{
    reverse(v.begin(), v.end()); // 입력을 정반대로 정렬 -> 했던걸 정반대로 되돌린다고 생각하기

    // 문제와 똑같이 덱에 넣어주기 !!
    // v[i] == 1: 맨 앞에 넣기
    // v[i] == 2: 앞에서 두번째에 넣기
    // v[i] == 3: 맨 뒤에 넣기

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            dq.push_front(i + 1);
        }
        if (v[i] == 2)
        {
            int k;
            k = dq.front();
            dq.pop_front();
            dq.push_front(i + 1);
            dq.push_front(k);
        }
        if (v[i] == 3)
        {
            dq.push_back(i + 1);
        }
    }

    return 0;
}
int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    vector<int> v; // 1e6: int 범위안
    deque<int> dq;

    // 입력
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cardReverse(v, dq, n);

    // 출력
    while (!dq.empty())
    {
        cout << dq.front() << ' ';
        dq.pop_front();
    }

    return 0;
}