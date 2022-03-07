#include<iostream>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, intArr[10] = {0, }, res = 0;
    cin >> N;

    while (N != 0){
        intArr[N % 10]++;
        N /= 10;
    }

    res = ceil(((double)intArr[6] + intArr[9]) / 2);

    for (int i = 0; i < 10; i++){
        if (i == 6 || i == 9) continue;
        res = max(res, intArr[i]);
    }

    cout << res << "\n";
    return 0;
}