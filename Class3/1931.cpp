#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Meeting{
public:
    int startTime, endTime;

    Meeting(int startTime, int endTime){
        this->startTime = startTime;
        this->endTime = endTime;
    }
};

bool compare(Meeting m1, Meeting m2){
    if (m1.endTime != m2.endTime){
        return m1.endTime < m2.endTime;
    }

    return m1.startTime < m2.startTime;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, startTime, endTime, res = 0, roomEnd = 0;
    vector <Meeting> meeting;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> startTime >> endTime;
        meeting.push_back(Meeting(startTime, endTime));
    }
    
    sort(meeting.begin(), meeting.end(), compare);

    for (auto meet : meeting){
        if (meet.startTime >= roomEnd){
            roomEnd = meet.endTime;
            res += 1;
        }    
    } 

    cout << res << "\n";

    return 0;
}