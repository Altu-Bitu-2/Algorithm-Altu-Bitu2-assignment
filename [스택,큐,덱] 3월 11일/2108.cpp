#include <iostream>
#include <vector>
#include <math.h>
#include <utility>
#include <algorithm> // sort 함수 사용

using namespace std;

int n;

// 산술 평균 함수
double arithmeticMean(vector<int> v)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    return sum / n;
}

// 중앙값 함수
int meidan(vector<int> v)
{
    sort(v.begin(), v.end());

    return v[n/2];
}

// 최빈값 함수
int mode(vector<int> v)
{

}

// 범위 함수
int range(vector<int> v)
{
    sort(v.begin(), v.end());
    int rang = v[n-1] - v[0]; 
    return rang;
}

int main()
{

    vector<int> v;

    // 입력
    cin >> n;
    for(int i = 0; i < n;i++) // 여기서 for문 대신 while(n--)를 사용하면 오류가 나는데 왜 그런걸까요?
                              // 이 문제 뿐만 아니라 다른 문제에서도 그렇습니다.. 언제 for문을 사용하고 언제 while을 사용하나요?
    {

        int m;
        cin >> m;
        v.push_back(m);
    }

    cout << "=========\n";
    cout << round(arithmeticMean(v)) << '\n';
    cout << meidan(v) << '\n';
    // cout << mode(v) << '\n';
    cout << range(v) << '\n';
    
}