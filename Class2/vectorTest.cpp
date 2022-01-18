#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    cout << v.at(2) << endl;
    return 0;
}