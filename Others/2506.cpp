#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, res = 0, questionRes, nowScore = 0;
    cin >> N;
    while (N--){
        cin >> questionRes;
        if (questionRes == 1){
            nowScore++;
            res += nowScore;
        }
        else{
            nowScore = 0;
        }
    }

    cout << res << "\n";

    return 0;
}