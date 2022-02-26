#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n, intArr[11] = {0, 1, 2, 4};

    for (int i = 4; i <= 10; i++){
        intArr[i] = intArr[i - 1] + intArr[i - 2] + intArr[i - 3];
    }

    cin >> T;
    while (T--){
        cin >> n;
        cout << intArr[n] << "\n";
    }

    return 0;
}