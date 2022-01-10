#include<iostream>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y, res = 64, change = 0;
    string strArr[55];
    cin >> y >> x;

    for (int i = 0; i < y; i++){
        cin >> strArr[i];
    }

    for (int i = 0; i <= y - 8; i++){
        for (int j = 0; j <= strArr[i].length() - 8; j++){
        change = 0;
            for (int nowY = i; nowY <= i + 7; nowY ++){
                for (int nowX = j + (nowY % 2); nowX <= j + 7; nowX += 2){
                    if (strArr[nowY][nowX] == 'W') change++;
                }
            }
            for (int nowY = i; nowY <= i + 7; nowY ++){
                for (int nowX = j + ((nowY + 1) % 2); nowX <= j + 7; nowX += 2){
                    if (strArr[nowY][nowX] == 'B') change++;
                }
            }
            if (change > abs(64 - change)) change = abs(64 - change);
            if (res > change) res = change;
        }
    }

    cout << res << endl;
    return 0;
}