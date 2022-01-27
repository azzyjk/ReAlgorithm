#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, intArr[1010] = {0, }, nowTime = 0, res = 0;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> intArr[i];
    }

    sort(intArr, intArr + N);

    for (int i = 0; i < N; i++){
        nowTime += intArr[i];
        res += nowTime;
    }

    cout << res << "\n";
    return 0;
}