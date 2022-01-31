#include<iostream>
#include<queue>

using namespace std;

class Position{
    public:
        int y, x;
        Position(int y, int x){
            this->y = y;
            this->x = x;
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, intArr[100][100] = {0, }, dx[] = {0, 0, -1, 1}, dy[] = {1, -1, 0, 0}, nowY, nowX, j;
    bool isVisit[100][100] = {false, }, isFinish = false;
    string str;
    queue < pair<Position, int> > q;
    cin >> N >> M;

    for (int i = 0; i < N; i++){
        cin >> str;
        j = 0;
        for (auto c : str){
            intArr[i][j] = c - '0';
            j++;
        }
    }
    
    q.push(make_pair(Position(0, 0), 1));
    isVisit[0][0] = true;

    while (!isFinish){
        Position pos = q.front().first;
        int nowCount = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++){
            nowY = pos.y + dy[i];
            nowX = pos.x + dx[i];
            if (nowY >= 0 && nowY < N && nowX >= 0 && nowX < M && !isVisit[nowY][nowX] && intArr[nowY][nowX] == 1){
                isVisit[nowY][nowX] = true;
                q.push(make_pair(Position(nowY, nowX), nowCount + 1));
            }
            if (nowY == N - 1 && nowX == M - 1){
                cout << nowCount + 1 << "\n";
                isFinish = true;
                break;
            }
        }
    }   
    return 0;
}