#include<iostream>
#include<sstream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, intArr[10010]= {0, }, stackSize = 0;
    string command;
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; i++){
        getline(cin, command);
        if (command == "top"){
            if (stackSize == 0) cout << "-1\n";
            else cout << intArr[stackSize - 1] << "\n";
        }
        else if (command == "empty"){
            if (stackSize == 0) cout << "1\n";
            else cout << "0\n";
        }
        else if (command == "size") cout << stackSize << "\n";
        else if (command == "pop"){
            if (stackSize == 0) cout << "-1\n";
            else{
                stackSize--;
                cout << intArr[stackSize] << "\n";
            }
        }
        else{
            istringstream iss(command);
            string tmp;
            getline(iss, tmp, ' ');
            getline(iss, tmp, ' ');
            int number = stoi(tmp);
            intArr[stackSize] = number;
            stackSize++;
        }
    }
    return 0;
}