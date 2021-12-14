#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int H, M;

    cin >> H >> M;
    
    M = M - 45;
    if (M < 0) {
        M += 60;
        H -= 1;
        if (H < 0) H = 23;
    }

    cout << H << " " << M << "\n";

    return 0;
}