#include<iostream>
#include<stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K, tmp, res = 0;
    stack <int> s;
    cin >> K;

    for (int i = 0; i < K; i++){
        cin >> tmp;
        if (tmp != 0) s.push(tmp);
        else s.pop();
    }

    while (!s.empty()){
        res += s.top();
        s.pop();
    }

    cout << res << "\n";

    return 0;
}