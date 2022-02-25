#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int intArr[1010] = {0, 1, 2};
    int n;
    cin >> n;

    for (int i = 3; i <= n; i++){
        intArr[i] = (intArr[i - 1] + intArr[i - 2]) % 10007;
    }

    cout << intArr[n] << "\n";
    return 0;
}