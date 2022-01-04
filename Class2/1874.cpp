#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, tmp, now = 1;
    bool isWrong = false;
    stack <int> s;
    vector <char> res;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (now <= tmp){
            while (now <= tmp){
                s.push(now);
                now ++;
                res.push_back('+');
            }
        }
        if (s.top() == tmp){
            res.push_back('-');
            s.pop();
        } 
        else isWrong = true;
    }

    if (isWrong) cout << "NO\n";
    else{
        for (auto i : res){
            cout << i << "\n";
        }
    }
    return 0;
}