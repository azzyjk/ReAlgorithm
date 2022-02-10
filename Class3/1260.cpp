#include<iostream>
#include<set>
#include<stack>
#include<queue>

using namespace std;

set <int> s[1010];
bool isDfsVisit[1010] = {false, }, isBfsVisit[1010] = {false, };
queue <int> q;

void dfs(int V){
    isDfsVisit[V] = true;
    cout << V << " ";
    for (auto i : s[V]){
        if (!isDfsVisit[i]){
            dfs(i);
        }
    }
}

void bfs(int V){
    int now;
    q.push(V);
    isBfsVisit[V] = true;

    while (!q.empty()){
        now = q.front();
        q.pop();
        cout << now << " ";
        for (auto i : s[now]){
            if (!isBfsVisit[i]){
                isBfsVisit[i] = true;
                q.push(i);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, V, from, to;    
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++){
        cin >> from >> to;
        s[from].insert(to);
        s[to].insert(from);
    }

    dfs(V);
    cout << "\n";
    bfs(V);
    
    return 0;
}