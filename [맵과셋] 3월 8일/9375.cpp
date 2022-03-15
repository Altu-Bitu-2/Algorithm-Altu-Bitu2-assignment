#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t, n;            // testcase
    string outfit, kind; // 의상, 종류
    cin >> t;

    while (t--)
    {                       // 일회성 사용, for문보다 while문
        map<string, int> m; // map 선언

        // 입력
        cin >> n;
        while (n--)
        {
            cin >> outfit >> kind;
            m[kind]++; // 같은 종류의 의상 개수 count
        }

        // 연산
        int result = 1;
        // 반복자를 사용, end 전까지 이동
        for (auto iter = m.begin(); iter != m.end(); iter++)
        {
            result *= (iter->second + 1); // 해당 종류의 옷 입기 + 안입기
            // ex: 3개의 바지라면 -> 3 + 1 -> 4C1
        }

        // 출력
        // 알몸인 경우 제외
        cout << result - 1 << '\n';
    }
    return 0;
}