#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 낮은 프렛부터 스택에 push -> push할 값과 top의 값을 비교 -> (push < top)이라면 -> pop !!

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, p;
    int cnt = 0;
    cin >> n >> p;

    stack<int> v[7]; // 기타줄이 6개니까 6 + 1

    while (n--)
    {
        int m;
        int k = 0;
        cin >> m >> k;


        // top의 값이 연주해야하는 음보다 높을 때
        while (!v[m].empty() && v[m].top() > k)
        {
            v[m].pop();
            cnt++;
        }

        // top이 비어있지 않고, top과 연주하는 음이 같을 경우 그냥 넘어간다 -> 고려안하면 같을 때에도 cnt++ 된다!
        if (!v[m].empty() && v[m].top() == k)
        {
            continue;
        }
        else // top이 비어있거나, top의 값이 연주해야하는 음보다 낮을 때 -> push
        {
            v[m].push(k);
            cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}