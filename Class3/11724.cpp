#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, from, to, now, res = 0;
    vector < vector <int> > v(1010);
    queue <int> q;
    bool isVisit[1010] = {false, };
    cin >> N >> M;

    for (int i = 0; i < M; i++){
        cin >> from >> to;
        v[from].push_back(to);
        v[to].push_back(from);
    }

    for (int i = 1; i <= N; i++){
        if (!isVisit[i]) {
            res += 1;
            q.push(i);
            isVisit[i] = true;
            while (!q.empty()){
                now = q.front();
                q.pop();
                for (auto i :v[now]){
                    if (!isVisit[i]){
                        q.push(i);
                        isVisit[i] = true;
                    }
                }
            }
        }
    }

    cout << res << "\n";
    
    return 0;
}