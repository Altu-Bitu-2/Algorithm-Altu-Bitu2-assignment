#include <iostream>
#include <queue>

using namespace std;

// 앞에서 제거하고, 뒤에 넣는 문제 -> queue 사용 !

//연산 & 출력 함수
int josephusProblem(queue<int> q, int k)
{
    cout << '<';

    while (q.size() != 1) // 큐에 원소가 2개 이상 남아있을 때
    {
        for (int i = 0; i < k - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }

    cout << q.front() << '>'; // 큐에 원소가 1개일 때, 남은 원소 반환
    return 0;
}

int main()
{
    // 입력
    int n, k;
    cin >> n >> k;
    queue<int> q;

    // 큐에 순서대로 원소 삽입
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    josephusProblem(q, k);

    return 0;
}