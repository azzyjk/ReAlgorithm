#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    string tmp;
    vector <string> v;
    map <string, int> m;
    cin >> N >> M;

    for (int i = 0; i < N; i++){
        cin >> tmp;
        m[tmp]++;
    }

    for (int i = 0; i < M; i++){
        cin >> tmp;
        if (m[tmp] == 1) v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    cout << v.size() << "\n";
    for (auto i : v){
        cout << i << "\n";
    }
    return 0;
}