#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K;
    long long a = 1, b = 0, aTmp, bTmp;
    cin >> K;

    while (K--){
        bTmp = a;
        aTmp = b;
        bTmp += b;

        a = aTmp;
        b = bTmp;
    }

    cout << a << " " << b << "\n";
    return 0;
}