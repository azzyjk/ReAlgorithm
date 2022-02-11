#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int res[110] = {0, }, finalRes = INT32_MAX;
vector < vector<int> > v(110);

class Info{
public:
    int nowNum, count;
    Info(int nowNum, int count){
        this->nowNum = nowNum;
        this->count = count;
    }
};

void bfs(int startNum){
    bool isVisit[110] = {false, };
    queue <Info> q;
    int nowNum, nowCount;
    isVisit[startNum] = true;
    q.push(Info(startNum, 0));

    while (!q.empty()){
        nowNum = q.front().nowNum;
        nowCount = q.front().count;
        q.pop();
        res[startNum] += nowCount;
        for (auto i : v[nowNum]){
            if (!isVisit[i]){
                isVisit[i] = true;
                q.push(Info(i, nowCount + 1));
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, from, to;

    cin >> N >> M;
    for (int i = 0; i < M; i++){
        cin >> from >> to;
        v[from].push_back(to);
        v[to].push_back(from);
    }

    for (int i = 1; i <= N; i++){
        bfs(i);
        if (finalRes > res[i]) finalRes = res[i];
    }

    for (int i = 1; i <= N; i++){
        if (finalRes == res[i]){
            cout << i << "\n";
            break;
        } 
    }
    return 0;
}