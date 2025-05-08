#include<iostream>
using namespace std;
int main(){
    int prev2 = 0;
    int prev1 = 1;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){  //space optimization in the tabulation method
        int curi = prev1 + prev2;
        prev2 = prev1;
        prev1 = curi;
    }
    cout<<prev1<<endl;
    return 0;
}