#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, from, to, connect, now, res = 0;
    bool isVisit[110] = {false, };
    vector < vector <int> > v(110);
    queue <int> q;
    cin >> num;
    cin >> connect;

    for (int i = 0; i < connect; i++){
        cin >> from >> to;
        v[from].push_back(to);
        v[to].push_back(from);
    }

    q.push(1);
    isVisit[1] = true;
    while (!q.empty()){
        now = q.front();
        q.pop();
        for (auto i : v[now]){
            if (!isVisit[i]){
                q.push(i);
                isVisit[i] = true;
                res += 1;
            }
        }
    }

    cout << res << "\n";
    return 0;
}