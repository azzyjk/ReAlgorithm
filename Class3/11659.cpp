#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, tmp, intArr[100100] = {0, }, i, j;
    cin >> N >> M;

    for (int idx = 1; idx <= N; idx++){
        cin >> tmp;
        intArr[idx] = tmp + intArr[idx - 1];
    }

    for (int idx = 0; idx < M; idx++){
        cin >> i >> j;
        cout << intArr[j] - intArr[i - 1] << "\n";
    }
    return 0;
}