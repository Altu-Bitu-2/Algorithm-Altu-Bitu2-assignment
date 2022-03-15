#include <iostream>
#include <unordered_set>

using namespace std;

/*
    set을 이용한 풀이.
    정렬할 필요 없이, 삽입과 검색만 쓰임
    입력의 수가 1,000,000으로 삽입과 탐색이 많이 일어남
    O(log N)이 아닌 O(1)인 unordered_set 사용 !
*/

int main()
{
    // 입출력 처리 속도 향상을 위한 코드 (cin, cout이 scanf보다 속도가 느림)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 입력
    int t;
    cin >> t;

    while (t--)
    { // testcase는 더이상 안쓰이므로, for문보다 while문이 깔끔
        int n, m, input;
        unordered_set<int> note1;

        // 수첩1에 해당되는 원소들을 set에 삽입
        cin >> n;
        while (n--)
        {
            cin >> input;
            note1.insert(input); // 정렬 안됨!
        }
        cin >> m;
        while (m--)
        {
            cin >> input;
            // 반복자를 이용해서 순회한다
            // auto는 자동으로 반복자를 선언하고 순회까지 한번에
            // auto: 입력 받는 값에 따라 알아서 자료형(?)을 결정
            auto iter = note1.find(input);

            // 출력
            if (iter == note1.end())
            { // end까지 감 -> 일치하는 수가 없음
                cout << "0\n";
            }
            else
            { // 일치하는 수 존재 -> 1 출력
                cout << "1\n";
            }
        }
    }

    return 0;
}