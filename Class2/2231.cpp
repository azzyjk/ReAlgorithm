#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, now = 1, tmp = 0, sum = 0;
    cin >> N;

    while (true){
        tmp = now;
        sum = now;
        while (tmp != 0){
            sum += tmp % 10;
            tmp /= 10;
        }
        if (sum == N){
            cout << now << "\n";
            break;
        }
        else if (now > N){
            cout << "0\n";
            break;
        }
        now++;    
    }
    return 0;
}