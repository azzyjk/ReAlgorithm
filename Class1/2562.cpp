#include<iostream>
#include<vector>
#include<algorithm>
#define SIZE 9

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    return a.first > b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tmp;
    vector< pair<int, int> > v;

    for(int i=1; i<=SIZE; i++){
        cin >> tmp;
        v.push_back(make_pair(tmp, i));
    }

    sort(v.begin(), v.end(), compare);

    cout << v[0].first << "\n" << v[0].second << "\n";

    return 0;
}