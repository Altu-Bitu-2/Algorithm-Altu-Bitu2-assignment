#include <iostream>

using namespace std;

int h,m,s;

// 시간 출력 함수
int print(int time){

    h = time/3600;
    m = (time%3600)/60;
    s = ((time%3600)%60);

    cout << h << ' ' << m << ' ' << s << '\n';

    return 0;
}

int timeChange(int n, int time){
    int t, c;

    for(int i = 0; i<n;i++){
        cin >> t;
        if(t == 1){
            cin >> c;
            time = time + c;
            if(time > 86400){
                time = time - 86400;
            }
        }
        else if(t == 2){
            cin >> c;
            time = time - c;
            if(time < 0){
                time = time + 86400;
            }
        }
        else
            print(time);
    }
    return 0;
}

int main(){
    int time, n;
    cin >> h >> m >> s;
    time = 3600 * h + 60 * m + s;

    cin >> n;
    timeChange(n, time);
    return 0;
}

