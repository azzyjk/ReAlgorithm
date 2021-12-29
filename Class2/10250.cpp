#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, H, W, N, floor, number;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> H >> W >> N;
        if ((N % H) == 0){
            floor = H;
            number = (N / H);
        } 
        else{
            floor = (N % H);
            number = (N / H) + 1;
        }
        
        if (number < 10) cout << floor << "0" << number << "\n";
        else cout << floor << number << "\n";
    }

    return 0;
}