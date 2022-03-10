#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;

// 카드를 뒤집는 함수
int cardReverse()
{
    int n, m;

    for (int i = 0; i < 10; i++)
    {
        // 입력
        cin >> n >> m;
        for (int j = 0; j < (m - n) / 2 + 1; j++)
        {
            // 양끝의 카드부터 순서대로 swap
            swap(arr[n + j], arr[m - j]);
        }
    }
    return 0;
}
int main()
{

    arr.assign(21, 0); // 21개의 원소 생성, 0으로 초기화
    // 벡터에 원소 순차적으로 대입
    for (int i = 0; i < 21; i++)
    {
        arr[i] = i;
    }

    cardReverse();

    //출력
    for (int i = 1; i < 21; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}