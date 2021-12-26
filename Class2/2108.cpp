#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, tmp, sum = 0, maxPresent = 0;
    vector <int> v, vPair;
    map <int, int> m;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> tmp;
        sum += tmp;
        m[tmp]++;
        if (m[tmp] > maxPresent) maxPresent = m[tmp];
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    cout << round((double)sum / N) << "\n";
    cout << v[N / 2] << "\n";
    for (auto i : m){
        if (i.second == maxPresent){
            vPair.push_back(i.first);
        }
    }
    if (vPair.size() > 1) cout << vPair[1] << "\n";
    else cout << vPair[0] << "\n";
    cout << v[v.size() - 1] - v[0] << "\n";
    return 0;
}