#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, roomCount = 1, maxRoomNumber = 1, roomExpand = 6;
    cin >> N;

    while (maxRoomNumber < N){
        maxRoomNumber += roomExpand;
        roomExpand += 6;
        roomCount++;
    }

    cout << roomCount << "\n";
    return 0;
}