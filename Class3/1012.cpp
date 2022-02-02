#include<iostream>
#include<queue>

using namespace std;

int intArr[50][50], res = 0;
bool isVisit[50][50];
queue < pair<int, int> > q;

void init(){
    res = 0;
    for (int i = 0; i < 50; i++){
        for (int j = 0; j < 50; j++){
            intArr[i][j] = 0;
            isVisit[i][j] = false;
        }
    }
}

void check(int checkY, int checkX, int N, int M){
    int y, x, dx[] = {0, 0, -1, 1}, dy[] = {-1, 1, 0, 0}, nowY, nowX;
    res++;
    q.push(make_pair(checkY, checkX));
    isVisit[checkY][checkX] = true;

    while (!q.empty()){
        y = q.front().first;
        x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++){
            nowY = y + dy[i];
            nowX = x + dx[i];
            if (nowY >= 0 && nowY < N && nowX >= 0 && nowX < M && intArr[nowY][nowX] == 1 && !isVisit[nowY][nowX]){
                q.push(make_pair(nowY, nowX));
                isVisit[nowY][nowX] = true;
            }
        }

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, M, N, K, X, Y;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> M >> N >> K;
        init();
        for (int j = 0; j < K; j++){
            cin >> X >> Y;
            intArr[Y][X] = 1;
        }

        for (int y = 0; y < N; y++){
            for (int x = 0; x < M; x++){
                if (intArr[y][x] == 1 && !isVisit[y][x]){
                    check(y, x, N, M);
                }
            }
        }

        cout << res << "\n";
    }
    return 0;
}