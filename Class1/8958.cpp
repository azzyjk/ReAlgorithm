#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int res = 0, score = 0, T;
    string str;

    cin >> T;

    for(int i=0; i<T; i++){
        cin >> str;
        res = 0;
        score = 0;
        for(auto i : str){
            if(i == 'O') {
                score++;
                res += score;
            }
            else score = 0;
        }
        cout << res << "\n";
    }

    return 0;
}