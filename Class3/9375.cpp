#include<iostream>
#include<sstream>
#include<map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n;
    long long res;
    string str, token;
    cin >> T;

    for (int i = 0; i < T; i++){
        map <string, int> m;
        cin >> n;
        cin.ignore();
        res = 1;
        for (int j = 0; j < n; j++){
            getline(cin, str);
            istringstream iss(str);
            getline(iss, token, ' ');
            getline(iss, token, ' ');
            m[token]++;
        }
    
        for (auto k : m){
            res *= k.second + 1; 
        }
        if (n == 0) cout << "0\n";
        else cout << res - 1 << "\n";
    }

    return 0;
}