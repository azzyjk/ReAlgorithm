#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, now, two = 0, five = 0;
    cin >> N;

    for (int i = 1; i <= N; i++){
        now = i;
        while (now % 2 == 0){    
            now /= 2;
            two += 1;
        }

        while (now % 5 == 0){
            now /= 5;
            five += 1;
        }
    }

    if (two <= five){
        cout << two << "\n";
    }
    else{
        cout << five << "\n";
    }
    return 0;
}