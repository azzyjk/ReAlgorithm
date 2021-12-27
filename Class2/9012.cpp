#include<iostream>
#include<stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string str;
    bool isWrong = false;
    cin >> T;

    for (int i = 0; i < T; i++){
        stack <char> s;
        isWrong = false;
        cin >> str;
        for (auto j : str){
            if (j == '(') s.push('(');
            else {
                if (s.empty()){
                    isWrong = true;
                    break;
                } 
                s.pop();
            }
        }

        if (s.empty() && !isWrong) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}