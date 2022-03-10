#include <iostream>

using namespace std;

int h, m, s;

// 시간 출력 함수
int print(int time)
{

    h = time / 3600;
    m = (time % 3600) / 60;
    s = time % 60;

    cout << h << ' ' << m << ' ' << s << '\n';

    return 0;
}

//
int timeChange(int n, int time)
{
    int t, c;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> c;
            time = time + c;
            time %= 86400; // 0~86400 이내의 값으로 변환
        }
        else if (t == 2)
        {
            cin >> c;
            time = time - c;
            while (time < 0)
                time += 86400;
            time %= 86400; // 0~86400 이내의 값으로 변환
        }
        else
            // 출력
            print(time);
    }
    return 0;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int time, n;
    // 입력
    cin >> h >> m >> s;
    time = 3600 * h + 60 * m + s; // 입력받은 시간을 sec으로 변경

    cin >> n;
    timeChange(n, time);

    return 0;
}
