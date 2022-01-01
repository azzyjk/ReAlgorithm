#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    if (p1.second != p2.second) return p1.second < p2.second;
    return p1.first < p2.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x, y;
    vector < pair<int ,int> > v;

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);

    for (auto i : v) cout << i.first << " " << i.second << "\n";
    return 0;
}