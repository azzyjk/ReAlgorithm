#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int N, intArr[100][100] = {0, }, res[100][100] = {0, };

void bfs(int startNum){
    bool isVisit[100] = {false, };
    int nowNum;
    queue <int> q;
    q.push(startNum);
    while (!q.empty()){
        nowNum = q.front();
        q.pop();
        for (int i = 0; i < N; i++){
            if (intArr[nowNum][i] == 1 && i != nowNum && !isVisit[i]){
                q.push(i);
                isVisit[i] = true;
                res[startNum][i] = 1;
            }
        }
    }  
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> intArr[i][j];
        }
    }
    
    for (int i = 0; i < N; i++){
        bfs(i);
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}