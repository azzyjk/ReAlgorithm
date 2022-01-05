#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, tmp, now = 0, res = 0;
    bool boolArr[1010] = {false, };
    boolArr[1] = true;

    for (int i = 2; i < 1010; i++){
        if (boolArr[i]) continue;
        now = i * 2;
        while (now < 1010){
            boolArr[now] = true;
            now += i;
        }
    }

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> tmp;
        if (!boolArr[tmp]) res++;
    }

    cout << res << "\n";

    return 0;
}