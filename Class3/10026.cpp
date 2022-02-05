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

char charArr[100][100] = {' ', };
bool isNormalVisit[100][100] = {false, }, isRedVisit[100][100] = {false, };
int N, normalRes = 0, redRes = 0;

void normalVisit(int i, int j){
    queue <Position> q;
    int nowY, nowX, dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0}, y, x;
    char color = charArr[i][j];
    q.push(Position(i, j));

    while (!q.empty()){
        y = q.front().y;
        x = q.front().x;
        q.pop();
        for (int i = 0; i < 4; i++){
            nowY = y + dy[i];
            nowX = x + dx[i];
            if (nowY >= 0 && nowY < N && nowX >= 0 && nowX < N && !isNormalVisit[nowY][nowX] && charArr[nowY][nowX] == color){
                q.push(Position(nowY, nowX));
                isNormalVisit[nowY][nowX] = true;
            }
        }
    }
}

void redVisit(int i, int j){
    queue <Position> q;
    int nowY, nowX, dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0}, y, x;
    char color = charArr[i][j];
    q.push(Position(i, j));

    while (!q.empty()){
        y = q.front().y;
        x = q.front().x;
        q.pop();
        for (int i = 0; i < 4; i++){
            nowY = y + dy[i];
            nowX = x + dx[i];
            if (nowY >= 0 && nowY < N && nowX >= 0 && nowX < N && !isRedVisit[nowY][nowX]){
                if (charArr[nowY][nowX] == color || (charArr[nowY][nowX] != 'B' && color != 'B')){
                    q.push(Position(nowY, nowX));
                    isRedVisit[nowY][nowX] = true;
                }
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
            cin >> charArr[i][j];
        }
    }

    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (isNormalVisit[i][j] == false){
                normalRes += 1;
                normalVisit(i, j);
            }
            if (isRedVisit[i][j] == false){
                redRes += 1;
                redVisit(i, j);
            }
        }
    }

    cout << normalRes << " " << redRes << "\n";
    return 0;
}