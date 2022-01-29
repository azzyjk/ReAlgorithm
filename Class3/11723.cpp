#include<iostream>
#include<sstream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str, token, cmd;
    int M, num;
    bool boolArr[21] = {false, };
    cin >> M;
    cin.ignore();

    for (int i = 0; i < M; i++){
        getline(cin, str);
        istringstream iss(str);
        getline(iss, cmd, ' ');
        
        if (cmd == "all"){
            for (int j = 1; j <= 20; j++) boolArr[j] = true;
        }
        else if (cmd == "empty"){
            for (int j = 1; j <= 20; j++) boolArr[j] = false;
        }
        else{
            getline(iss, token, ' ');
            num = stoi(token);
            if (cmd == "add"){
                boolArr[num] = true;
            }
            else if (cmd == "remove"){
                boolArr[num] = false;
            }
            else if (cmd == "check"){
                if (boolArr[num]) cout << "1\n";
                else cout << "0\n";
            }
            else if (cmd == "toggle"){
                if (boolArr[num]) boolArr[num] = false;
                else boolArr[num] = true;
            }
        }
    }

    return 0;
}