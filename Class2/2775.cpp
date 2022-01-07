#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, k, n, intArr[15][15] = {0, }, sum = 0;
    cin >> T;
    for (int i = 1; i < 15; i++) intArr[0][i] = i;
    
    for (int i = 1; i < 15; i++){
        sum = 0;
        for (int j = 1; j < 15; j++){
            sum += intArr[i - 1][j];
            intArr[i][j] = sum;
        }
    }
    for (int i = 0; i < T; i++){
        cin >> k;
        cin >> n;
        cout << intArr[k][n] << "\n";
    }

    return 0;
}