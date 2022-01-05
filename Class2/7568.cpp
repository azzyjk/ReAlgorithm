#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, weight, height, moreBig = 0;
    vector < pair <int, int> > v;
    vector <int> res;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> weight >> height;
        v.push_back(make_pair(weight, height));
    }

    for (int i = 0; i < v.size(); i++){
        moreBig = 1;
        for (int j = 0; j < v.size(); j++){
            if (i == j) continue;
            if (v[i].first > v[j].first && v[i].second > v[j].second) continue;
            else if (v[i].first < v[j].first && v[i].second < v[j].second) moreBig++;

        }
        res.push_back(moreBig);
    }

    for (auto i : res){
        cout << i << " ";
    }
    return 0;
}