#include<iostream>
using namespace std;
string newPassword(string a,string b){
    string password;
    int i = 0;
    int j = 0;
    while(i!=a.size() && j!=b.size()){
        password += a[i];
        password += b[j];
        i++;
        j++;
    }
    while(i!=a.size()){
        password += a[i];
        i++;
    }
    while(j!=b.size()){
        password += b[j];
        j++;
    }
    return password;
}
int main(){
    string a = "abc";
    string b = "def";
    cout<<newPassword(a,b);
    return 0;
}