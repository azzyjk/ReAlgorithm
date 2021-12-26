#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, string> p1, pair<int, string> p2){
    return p1.first < p2.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N ,age;
    string name, str, token;
    vector < pair<int, string> > v;

    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; i++){
        getline(cin, str);
        istringstream iss(str);
        getline(iss, token, ' ');
        age = stoi(token);
        getline(iss, token, ' ');
        name = token;
        v.push_back(make_pair(age, name));
    }

    stable_sort(v.begin(), v.end(), compare);

    for (auto i : v) cout << i.first << " " << i.second << "\n";

    return 0;
}