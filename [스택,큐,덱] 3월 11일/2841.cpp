#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 낮은 프렛부터 스택에 push -> push할 값과 top의 값을 비교 -> (push < top)이라면 -> pop !!

int main()
{
    int n, p;
    int cnt = 0;
    cin >> n >> p;

    stack<int> v[7]; // 기타줄이 6개니까 6 + 1

    while (n--)
    {
        int m;
        int k = 0;
        cin >> m >> k;

        if (v[m].empty()) // 스택이 비어있을 때
        {
            v[m].push(k);  
            cnt++;
            break;
        }

        if (v[m].top() == k) // top의 값과 연주하는 음이 같을 때 (연산 x)
            break;

        while (v[m].top() > k) // top의 값이 연주해야하는 음보다 높을 때
        {
            v[m].pop();
            cnt++;
        }
        v[m].push(k);
        cnt++;
    }

    cout << cnt << '\n';
}