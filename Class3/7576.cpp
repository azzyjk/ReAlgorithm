#include<iostream>
#include<queue>

using namespace std;

class Position{
public:
    int x, y, day;
    Position(int y, int x, int day){
        this->y = y;
        this->x = x;
        this->day = day;
    }
};

int M, N, intArr[1000][1000] = {0, }, remain = 0, res = 0;
queue<Position> q;

void bfs(){
    int y, x, nowY, nowX, nowDay, dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
    bool isVisit[1000][1000] = {false, };
    while (!q.empty()){
        nowY = q.front().y;
        nowX = q.front().x;
        nowDay = q.front().day;
        q.pop();
        
        if (nowDay > res) res = nowDay;
        for (int i = 0; i < 4; i++){
            y = nowY + dy[i];
            x = nowX + dx[i];
            if (y >= 0 && y < N && x >= 0 && x < M && !isVisit[y][x] && intArr[y][x] == 0){
                remain -= 1;
                q.push(Position(y, x, nowDay + 1));
                intArr[y][x] = 1;
                isVisit[y][x] = true;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> intArr[i][j];
            if (intArr[i][j] == 0){
                remain += 1;
            }
            else if (intArr[i][j] == 1){
                q.push(Position(i, j, 0));
            }
        }
    }

    bfs();

    if (remain == 0){
        cout << res << "\n";
    }   
    else{
        cout << "-1\n";
    }
    
    return 0;
}