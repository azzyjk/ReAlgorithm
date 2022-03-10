#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, intArr[100010] = {-1, -1, 1, -1, 2, 1};
    cin >> n;

    for (int i = 6; i <= n; i++){
        if (intArr[i - 2] != -1) intArr[i] = intArr[i - 2] + 1;
        if (intArr[i - 5] != -1){
            if (intArr[i] == 0) intArr[i] = intArr[i - 5] + 1;
            else{
                intArr[i] = min(intArr[i], intArr[i - 5] + 1);
            }
        } 
    }
    if (intArr[n] == 0) cout << -1 << "\n";
    else cout << intArr[n] << "\n";
    return 0;
}