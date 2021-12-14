#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, X, tmp;
    
    cin >> N >> X;

    for (int i=0; i < N; i++){
        cin >> tmp;
        if (tmp < X) cout << tmp << " ";
    }
    return 0;
}