#include<iostream>
#include<deque>
#include<sstream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque <int> dq;
    int N, number;
    string command, token, numberStr;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++){
        getline(cin, command);
        if (command == "pop_front"){
            if (dq.empty()) cout << "-1\n";
            else{
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if (command == "pop_back"){
            if (dq.empty()) cout << "-1\n";
            else{
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if (command == "size"){
            cout << dq.size() << "\n";
        }
        else if (command == "empty"){
            if (dq.empty()) cout << "1\n";
            else cout << "0\n";
        }
        else if (command == "front"){
            if (dq.empty()) cout << "-1\n";
            else cout << dq.front() << "\n";
        }
        else if (command == "back"){
            if (dq.empty()) cout << "-1\n";
            else cout << dq.back() << "\n";
        }
        else{
            istringstream iss(command);
            getline(iss, token,' ');
            getline(iss, numberStr, ' ');
            number = stoi(numberStr);
            if (token == "push_front"){
                dq.push_front(number);
            }
            else if (token == "push_back"){
                dq.push_back(number);
            }
        }
    }
    return 0;
}