#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int rounds = n;
    for(int i=0; i<n; i++){
        int no = arr[i];
        for(int j = i+1; j<n; j++){
            if(no+1 == arr[j]){
                rounds--;
                break;
            }
        }
    }
    cout << rounds << endl;
}