#include <iostream>
#include <set> // 시간복잡도 O(log N)

using namespace std;

// 중복없이 정렬가능한 set 활용

// 서로 다른 부분 문자열을 구하는 함수
int cntDiff(string s)
{
    set<string> sub;                     // 중복 없는 부분 문자열
    for (int i = 0; i < s.length(); i++) // s의 길이만큼 반복
    {
        string temp = ""; // temp 초기화

        // 길이가 긴 문자열부터 순차적으로 sub에 저장
        for (int j = i; j < s.length(); j++)
        {
            temp += s[j];
            sub.insert(temp); // sub은 set이므로, 자동으로 중복없이 저장됨
        }
    }

    return sub.size(); // sub의 크기 리턴
}
int main()
{
    string s;

    // 입력
    cin >> s;

    // 연산 & 출력
    cout << cntDiff(s);
    return 0;
}