#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, intArr[1010] = {0, 1, 3, 5};
    cin >> n;

    for (int i = 4; i <= n; i++){
        intArr[i] = (intArr[i - 1] + (intArr[i - 2] * 2 % 10007)) % 10007;
    }

    cout << intArr[n] << "\n";
    
    return 0;
}