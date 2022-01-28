#include<iostream>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, intArr[110000] = {0, }, nowNum;
    queue <int> q;
    cin >> N >> K;
    
    q.push(N);

    while (true){
        nowNum = q.front();
        q.pop();
        if (nowNum == K){
            break;
        }
        if (nowNum - 1 >= 0 && (intArr[nowNum - 1] > intArr[nowNum] + 1 || intArr[nowNum - 1] == 0)){
            intArr[nowNum - 1] = intArr[nowNum] + 1;
            q.push(nowNum - 1);
        }
        if (nowNum + 1 <= 100000 && (intArr[nowNum + 1] > intArr[nowNum] + 1 || intArr[nowNum + 1] == 0)){
            intArr[nowNum + 1] = intArr[nowNum] + 1;
            q.push(nowNum + 1);
        }
        if (nowNum * 2 < 110000 && (intArr[nowNum * 2] > intArr[nowNum] + 1 || intArr[nowNum * 2] == 0)){
            intArr[nowNum * 2] = intArr[nowNum] + 1;
            q.push(nowNum * 2);
        }
    }

    cout << intArr[K] << "\n";
    return 0;
}