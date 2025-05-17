#include<iostream>
#include<algorithm>
using namespace std;
int check(string str1, string str2){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if(str1 == str2) return 1;
    return 0;
}
int main(){
    string str1 = "";
    string str2 = "";
    cout<<"Enter Adjacent student string"<<endl;
    cin>>str1;
    cout<<"Enter Rahul's string"<<endl;
    cin>>str2;
    cout<<check(str1,str2);
    return 0;
}