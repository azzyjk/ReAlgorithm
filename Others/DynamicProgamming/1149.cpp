#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, r, g, b, intArr[1010][3] = {0, };
    cin >> N;

    for (int i = 1; i <= N; i++){
        cin >> r >> g >> b;
        intArr[i][0] = min(intArr[i - 1][1], intArr[i - 1][2]) + r;
        intArr[i][1] = min(intArr[i - 1][0], intArr[i - 1][2]) + g;
        intArr[i][2] = min(intArr[i - 1][0], intArr[i - 1][1]) + b;
    }

    cout << min(min(intArr[N][0], intArr[N][1]), intArr[N][2]) << "\n";
    return 0;
}