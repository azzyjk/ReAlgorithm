#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, parent = 1, child = 1;
    double res = 0;
    cin >> N >> K;

    for (int i = N - K + 1; i <= N; i++){
        parent = parent * i;
    }

    for (int i = 2; i <= K; i++){
        child = child * i;
    }

    cout << parent / (double)child << "\n";
    return 0;
}