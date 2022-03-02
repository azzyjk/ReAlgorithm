#include<iostream>
#include<queue>

using namespace std;

class Position{
public:
    int y, x, h, day;
    Position(int h, int y, int x, int day){
        this->h = h;
        this->y = y;
        this->x = x;
        this->day = day;
    }
};

int M, N, H, res = 0;
int tomato[100][100][100] = {0, }, remain = 0;
bool isVisit[100][100][100] = {false, };
queue <Position> q;

void bfs(){
    int nowY, nowX, nowH, nowDay, x, y, h;
    int dx[] = {0, 0, 0, 0, 1, -1}, dy[] = {0, 0, 1, -1, 0, 0}, dh[] = {1, -1, 0, 0, 0, 0};
    while (!q.empty()){
        nowY = q.front().y;
        nowX = q.front().x;
        nowH = q.front().h;
        nowDay = q.front().day;
        q.pop();
        
        if (res < nowDay) res = nowDay;
        for (int i = 0; i < 6; i++){
            x = nowX + dx[i];
            y = nowY + dy[i];
            h = nowH + dh[i];
            if (x >= 0 && x < M && y >= 0 && y < N && h >= 0 && h < H && !isVisit[h][y][x] && tomato[h][y][x] == 0){
                remain -= 1;
                isVisit[h][y][x] = true;
                q.push(Position(h, y, x, nowDay + 1));
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> H;
    for (int i = 0; i < H; i++){
        for (int j = 0; j < N; j++){
            for (int k = 0; k < M; k++){
                cin >> tomato[i][j][k];
                if (tomato[i][j][k] == 0){
                    remain += 1;
                }
                else if (tomato[i][j][k] == 1){
                    q.push(Position(i, j, k, 0));
                    isVisit[i][j][k] = true;
                }
            }
        }
    }

    if (remain != 0){
        bfs();
    }

    if (remain == 0){
        cout << res << "\n";
    }
    else{
        cout << "-1\n";
    }
    
    return 0;
}