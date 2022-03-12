#include<iostream>
#include<queue>

using namespace std;

struct compare{
    bool operator()(int a, int b){
        return a > b;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x, intArr[100];
    priority_queue <int, vector <int>, compare> pq;
    cin >> N;

    while (N--){
        cin >> x;
        if (x == 0){
            if (pq.empty()) cout << "0\n";
            else{
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else{
            pq.push(x);
        }
    }
    return 0;
}