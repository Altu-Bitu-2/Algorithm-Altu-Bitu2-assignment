#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> arrA;
    vector<int> arrB;

    // 입력
    cin >> n;
    arrA.assign(n, 0);
    arrB.assign(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arrB[i];
    }

    sort(arrA.begin(), arrA.end());              // 오름차순 정렬
    sort(arrB.begin(), arrB.end(), greater<>()); // 내림차순 정렬

    int calculator = 0; // 0올 초기화 미리 꼭 하기

    for (int i = 0; i < n; i++)
    {
        calculator += (arrA[i] * arrB[i]);
    }

    cout << calculator;
}