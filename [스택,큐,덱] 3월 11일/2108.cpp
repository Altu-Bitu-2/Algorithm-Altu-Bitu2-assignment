#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <utility>
#include <algorithm> // sort 함수 사용

using namespace std;


// 산술 평균 함수
double arithmeticMean(vector<int> v, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    double result = (double)sum / n;
    return (int)round(result);
}

// 중앙값 함수
int meidan(vector<int> v, int n)
{
    sort(v.begin(), v.end());

    return v[n / 2];
}

// 최빈값을 구하기 위해 사용되는 함수
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    else
        return a.first < b.first;
}

// 최빈값 함수
int mode(map<int, int> m)
{
    vector<pair<int, int>> frequency(m.begin(), m.end());
    sort(frequency.begin(), frequency.end(), cmp);

    if (frequency[0].second == frequency[1].second)
    {
        return frequency[1].first;
    }
    else
        return frequency[0].first;
}

// 범위 함수
int range(vector<int> v, int n)
{
    sort(v.begin(), v.end());
    int rang = v[n - 1] - v[0];
    return rang;
}

int main()
{   
    int n;
    vector<int> v;
    map<int, int> m;

    // 입력
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        int k;
        cin >> k;
        v.push_back(k);
        m[k]++;
    }

    // 출력
    cout << arithmeticMean(v, n) << '\n';
    cout << meidan(v, n) << '\n';
    cout << mode(m) << '\n';
    cout << range(v, n) << '\n';
}