#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s;
    string even, odd;
    int cnt = 0;
    vector<int> alphabet(26, 0);

    // 입력
    cin >> s;
    
    // 각각의 알파벳 개수 헤아리기
    for (int i = 0; i < s.size(); i++)
    {
        alphabet[s[i] - 'A']++;
    }

    // 홀수개의 알파벳 count & stirng으로 저장
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] % 2 == 1)
        {
            odd = (i + 'A');
            cnt++;
        }
    }

    // 홀수개의 알파벳이 2개 이상인 경우
    if (cnt > 1)
    {
        cout << "I'm Sorry Hansoo";
        return 0;
    }

    // 짝수개의 알파벳 절반만큼 사전순으로 나열
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < (alphabet[i] / 2); j++)
        {
            even += (i + 'A');
        }
    }

    cout << even << odd; // 짝수개 알파벳 절반 + 홀수개의 알파벳
    reverse(even.begin(), even.end()); // 짝수개 알파벳 reverse
    cout << even << '\n'; 

    return 0;
}
