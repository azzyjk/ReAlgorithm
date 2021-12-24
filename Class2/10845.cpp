#include<iostream>
#include<sstream>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string command;
    queue <int> q;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++){
        getline(cin, command);
        if (command == "pop"){
            if (q.size() == 0) cout << "-1\n";
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (command == "size") cout << q.size() << "\n";
        else if (command == "empty"){
            if (q.size() == 0) cout << "1\n";
            else cout << "0\n";
        }
        else if (command == "front"){
            if (q.size() == 0) cout << "-1\n";
            else cout << q.front() << "\n";
        }
        else if (command == "back"){
            if (q.size() == 0) cout << "-1\n";
            else cout << q.back() << "\n";
        }
        else{
            string tmp;
            istringstream iss(command);

            getline(iss, tmp, ' ');
            getline(iss, tmp, ' ');

            int number = stoi(tmp);
            q.push(number);
        }

    }
    return 0;
}