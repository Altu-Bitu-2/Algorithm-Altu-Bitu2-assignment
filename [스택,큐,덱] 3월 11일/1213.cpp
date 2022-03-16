#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    string s;
    string even, odd;
    int cnt = 0;
    vector<int> alphabet(26,0);

    // 입력
    cin >> s;

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] % 2 == 1)
        {
            odd = (i + 'A');
            cnt++;
        }
    }

    if (cnt > 1)
    {
        cout << "I'm Sorry Hansoo";
        return 0;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < (alphabet[i] / 2); j++)
        {
            even += (i + 'A');
        }
    }

    cout << even << odd;
    reverse(even.begin(), even.end());
    cout << even << '\n';

    return 0;
}
