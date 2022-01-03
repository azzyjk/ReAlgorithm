#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, dropNumber = 1;
    bool boolArr[500010] = {false, };
    cin >> N;

    for (int i = 0; i < N - 1; i++){
        boolArr[dropNumber] = true;
        for (int j = 0; j < 2; j++){
            do{
                dropNumber++;
                if (dropNumber > N) dropNumber = 1;
            } while(boolArr[dropNumber]);
        }
    }

    for (int i = 1; i <= N; i++){
        if (!boolArr[i]){
            cout << i << "\n";
            break;
        } 
    }
    return 0;
}