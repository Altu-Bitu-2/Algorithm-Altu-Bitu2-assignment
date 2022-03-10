#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> arr;

    cin >> n;
    arr.assign(n, 0); // 벡터 0으로 초기화

    // 입력
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<>()); // 내림차순 정렬

    long long calculator = 0; // 0으로 초기화

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] - i) > 0) // 팁이 음수가 아닐경우 cal에 더하기
        {
            calculator += (arr[i] - i);
        }
    }

    // 출력
    cout << calculator;
    return 0;
}

// int가 아닌 long long을 사용해야함 - 문제의 범위를 미리 생각하고 자료형 정하기