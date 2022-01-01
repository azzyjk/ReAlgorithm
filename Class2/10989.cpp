#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, tmp, intArr[10010] = {0, };
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> tmp;
        intArr[tmp]++;
    }
    

    for (int i = 0; i < 10010; i++){
        if (intArr[i] != 0){
            for (int j = 0; j < intArr[i]; j++){
                cout << i << "\n";
            }
        }
    }
    return 0;
}