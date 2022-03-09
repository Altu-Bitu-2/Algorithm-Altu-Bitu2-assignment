#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// x,y 좌표에 대한 구조체
struct coordinate {
    int x, y;
};

// 비교 함수
bool cmp(const coordinate &a, const coordinate &b){
    if (a.y != b.y){
        return a.y < b.y;
    }
    else
        return a.x < b.x;
}

int main(){
    int n;
    cin >> n;
    vector<coordinate> v(n); // 벡터 초기화

    // 입력
    for(int i = 0;i<n;i++){ // x,y 좌표
        cin >> v[i].x >> v[i].y;
    }

    // 연산
    sort(v.begin(),v.end(),cmp); // cmp 값이 false인 경우 swap

    // 출력
    for(int i = 0;i<n;i++){
        cout << v[i].x << ' ' << v[i].y << '\n';
    }
    return 0;
}