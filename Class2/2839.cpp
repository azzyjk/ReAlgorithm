#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, fiveGram = 0, threeGram = 0, remain = 0;
    cin >> N;

    fiveGram = N / 5;
    remain = N - (5 * fiveGram);
    threeGram = remain / 3;
    remain = remain - (3 * threeGram);

    while (remain != 0){
        if (fiveGram <= 0) break;
        remain += 3 * threeGram;
        fiveGram--;
        remain += 5;
        threeGram = remain / 3;
        remain -= 3 * threeGram;
    }

    if (remain == 0) cout << fiveGram + threeGram << "\n";
    else cout << "-1\n";
    
    return 0;
}