#include<iostream>
#include<map>

using namespace std;

int main(){
    int A, B, C, res=0;
    map<int, int> m;
    string resStr;

    cin >> A >> B >> C;

    res = A * B * C;

    resStr = to_string(res);

    for(auto i : resStr){
        m[i - '0']++;
    }
    
    for(int i=0; i<=9; i++){
        auto iter = m.find(i);
        if(iter == m.end()) cout << "0\n";
        else cout << (*iter).second << "\n";
    }
    return 0;
}