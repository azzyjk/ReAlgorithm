#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, intArr[1000000] = {0, }, min = 0, max = 0, mid, res = 0;
    long long sum = 0;
    cin >> N >> M;
    
    for (int i = 0; i < N; i++){
        cin >> intArr[i];
        if (max < intArr[i]) max = intArr[i];
    }

    while (min <= max){
        sum = 0;
        mid = (min + max) / 2;
        for (int i = 0; i < N; i++){
            if (mid < intArr[i]) sum += intArr[i] - mid;
        }

        if (sum >= M){
            res = mid;
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }
    }

    cout << res << "\n";
    return 0;
}