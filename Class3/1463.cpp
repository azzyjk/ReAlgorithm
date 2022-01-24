#include<iostream>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, intArr[1000100] = {0, }, num;
    queue <int> q;
    cin >> N;

    if (N == 1){
        cout << 0 << "\n";
        return 0;
    } 
    
    q.push(N);
    while (true){
        num = q.front();
        q.pop();
        if (num % 3 == 0){
            if (intArr[num / 3] == 0 || intArr[num / 3] > (intArr[num] + 1)){
                intArr[num / 3] = intArr[num] + 1;
                q.push(num / 3);
            }
        }
        if (num % 2 == 0){
            if (intArr[num / 2] == 0 || intArr[num / 2] > (intArr[num] + 1)){
                intArr[num / 2] = intArr[num] + 1;
                q.push(num / 2);
            }
        }
        if (num - 1 > 0){
            if (intArr[num - 1] == 0 || intArr[num - 1] > (intArr[num] + 1)){
                intArr[num - 1] = intArr[num] + 1;
                q.push(num - 1);
            }
        }
    
        if (intArr[1] != 0){
            cout << intArr[1] << "\n";
            break;
        } 
    }
    return 0;
}