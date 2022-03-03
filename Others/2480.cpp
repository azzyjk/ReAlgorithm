#include<iostream>
#include<map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int big = 0, tmp;
    map <int, int> m;
    for (int i = 0; i < 3; i++){
        cin >> tmp;
        big = max(big, tmp);
        m[tmp]++;
    }
    
    if (m.size() == 3){
        cout << big * 100 << "\n";
    }
    else if (m.size() == 2){
        for (auto i : m){
            if (i.second == 2){
                cout << 1000 + (i.first * 100) << "\n";
            }
        }
    }
    else{
        cout << 10000 + (big * 1000) << "\n";
    }

    return 0;
}