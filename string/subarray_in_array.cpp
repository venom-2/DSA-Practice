#include<iostream>
#include<vector>
using namespace std;
int result(vector<int>& arr, int k){
    int start = 0;
    int end = start+k-1;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    vector<int> temp;
    while(end<arr.size()){
        for(int i=start;i<=end;i++){
            if(arr[i] < min_val) min_val = arr[i];
        }
        start++;
        end++;
        temp.push_back(min_val);
        min_val = INT_MAX;
    }
    for(auto i:temp){
        if(i>max_val){
            max_val = i;
        }
    }
    return max_val;
}
int main(){
    vector<int> arr = {1,3,2,5,4};
    int k = 3;
    cout<<result(arr,k);
    return 0;
}