#include<iostream>
#include<sstream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n;
    string p, numStr, token;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> p;
        cin >> n;
        cin >> numStr;
        istringstream iss(numStr);
        string res = "[";
        int pos = -1, intArr[100100] = {0, }, frontPos = 0, backPos;
        bool front = true, isError = false;
        if (n != 0){
            while (getline(iss, token, ',')){
               if (token[0] == '[') token = token.substr(1, token.length() - 1);
                else if (token[token.length() - 1] == ']') token = token.substr(0, token.length() - 1);
                intArr[pos + 1] = stoi(token);
                pos++;
            }
        }
        backPos = pos;

        for (auto c : p){
            if (c == 'R'){
                front = !front;
            }
            else if (c == 'D'){
                if (backPos < 0 || frontPos > pos){
                    cout << "error\n";
                    isError = true;
                    break;
                } 
                else if (front){
                    frontPos++;
                }
                else if (!front){
                    backPos--;
                }
            }
        }
        if (isError) continue;

        if (front){
            for (int j = frontPos; j <= backPos; j++){
                res += to_string(intArr[j]);
                if (j != backPos) res += ",";
            }
        }
        else{
            for (int j = backPos; j >= frontPos; j--){
                res += to_string(intArr[j]);
                if (j != frontPos) res += ",";
            }
        }
        res += "]";
        cout << res << "\n";
    }
    return 0;
}