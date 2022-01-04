#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, now = 1, number = 666, sixCount = 0, tmp;
    cin >> N;

    while (now != N){
        sixCount = 0;
        number++;
        tmp = number;
        while (tmp != 0 && sixCount != 3){
            if (tmp % 10 == 6){
                sixCount++;
            } 
            else{
                sixCount = 0;
            } 
            tmp /= 10;
        }
        
        if (sixCount >= 3) now++;
    }

    cout << number << "\n";
    return 0;
}