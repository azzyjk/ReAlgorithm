#include<iostream>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, r, c, minRow = 0, maxRow, minCol = 0, maxCol, res = 0, all = 0, line, baseRow = 0, baseCol = 0;
    cin >> N >> r >> c;
    
    while (true){
        line = pow(2, N);
        all = pow(line, 2);
        minRow = baseRow + (line / 2);
        minCol = baseCol + (line / 2);
        maxRow = baseRow + line;
        maxCol = baseCol + line;
        int row[] = {minRow, minRow, maxRow, maxRow}, col[] = {minCol, maxCol, minCol, maxCol};
        for (int i = 0; i < 4; i++){
            if (r < row[i] && c < col[i]){
                res += (all / 4) * i;
                baseRow = row[i] - (line / 2);
                baseCol = col[i] - (line / 2);
                break;
            }
        }

        N -= 1;
        if (N == 0) break;
    }
    cout << res << "\n";

    return 0;
}