#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

set <string> s;
vector <string> v;

bool compare(string s1, string s2){
    if (s1.length() == s2.length()){
        return s1 < s2;
    }
    return s1.length() < s2.length();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    string tmp;

    for (int i = 0; i < N; i++){
        cin >> tmp;
        if (s.find(tmp) == s.end()){
            s.insert(tmp);
            v.push_back(tmp);
        }
    }

    sort(v.begin(), v.end(), compare);

    for (auto i : v){
        cout << i << "\n";
    }
    return 0;
}