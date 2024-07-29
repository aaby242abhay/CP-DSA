#include<iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int> > points;
        for(int i=0; i<n; i++){
            int x,y;
            cin >> x;
            cin >> y;
            points.push_back({x,y});
        }

        bool x_positive = true;
        for(auto i : points){
            if(i.first >= 0) continue;
            else x_positive = false;
        }

        bool y_positive = true;
        for(auto i : points){
            if(i.second >= 0) continue;
            else y_positive = false;
        }

        bool x_negative = true;
        for(auto i : points){
            if(i.first <= 0) continue;
            else x_negative = false;
        }

        bool y_negative = true;
        for(auto i : points){
            if(i.second <= 0) continue;
            else y_negative = false;
        }
        if (x_negative || x_positive || y_negative || y_positive){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

    }
    return 0;
}