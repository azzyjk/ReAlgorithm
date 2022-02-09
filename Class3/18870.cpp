#include<iostream>
#include<set>
#include<map>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector <int> v;
    map <int, int> m;
    set <int> s;
    int N, tmp, now = 0;

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> tmp;
        v.push_back(tmp);
        s.insert(tmp);
    }

    for (auto i : s){
        m[i] = now;
        now += 1;
    }

    for (int i = 0; i < v.size(); i++){
        cout << m[v[i]];
        if (i != v.size() - 1) cout << " ";
    }
    
    return 0;
}