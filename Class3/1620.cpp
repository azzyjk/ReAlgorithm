#include<iostream>
#include<map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    string str;
    map <int, string> numberMap;
    map <string, int> nameMap;
    cin >> N >> M;

    for (int i = 0; i < N; i++){
        cin >> str;
        numberMap.insert(make_pair(i + 1, str));
        nameMap.insert(make_pair(str, i + 1));
    }

    for (int i = 0; i < M; i++){
        cin >> str;
        if (str[0] >= '0' && str[0] <= '9') cout << numberMap[stoi(str)] << "\n";
        else cout << nameMap[str] << "\n";
    }
    return 0;
}