#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 낮은 프렛부터 스택에 push -> push할 값과 top의 값을 비교 -> (push < top)이라면 -> pop !!

int main()
{
    ios_base :: sync_with_stdio(false);
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

        // 스택이 비어있을 때
        if (v[m].empty()) 
        {
            v[m].push(k);  
            cnt++;
        }

        // 연산 안하는 코드는 굳이 작성할 필요 없음
        // if (v[m].top() == k) // top의 값과 연주하는 음이 같을 때 (연산 x)
        //     break;

        // top의 값이 연주해야하는 음보다 높을 때
        while (v[m].top() > k && !v[m].empty()) 
        {
            v[m].pop();
            cnt++;
        }
        
        // top의 값이 연주해야하는 음보다 낮을때 -> 그냥 push 한다
        if(v[m].top() < k && !v[m].empty()){
            v[m].push(k);
            cnt++;  
        }

    }

    cout << cnt << '\n';
}