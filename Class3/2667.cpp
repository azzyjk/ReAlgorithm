#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, intArr[25][25], directionCol[4] = {1, -1, 0, 0}, directionRow[4] = {0, 0, -1, 1}, nextRow, nextCol, count, j;
    bool isVisit[25][25] = {false, };    
    string str;
    vector <int> v;
    queue < pair<int ,int> > q;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> str;
        j = 0;
        for (auto number : str){
            intArr[i][j] = number - '0';
            j++;
        }
    }

    for (int  i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (intArr[i][j] == 1 && isVisit[i][j] == false){
                count = 0;
                isVisit[i][j] = true;
                q.push(make_pair(i, j));
                while (!q.empty()){
                    count++;
                    for (int direction = 0; direction < 4; direction++){
                        nextRow = q.front().first - directionRow[direction];
                        nextCol = q.front().second - directionCol[direction];
                        if (nextRow < 0 || nextRow >= 25) continue;
                        if (nextCol < 0 || nextCol >= 25) continue;
                        if (intArr[nextRow][nextCol] == 1 && isVisit[nextRow][nextCol] == false){
                            isVisit[nextRow][nextCol] = true;
                            q.push(make_pair(nextRow, nextCol));
                        }
                    }
                    q.pop();
                }
                v.push_back(count);        
            }
        }
    }
    sort(v.begin(), v.end());   
    cout << v.size() << "\n";
    for (auto i : v){
        cout << i << "\n";
    }

    return 0;
}