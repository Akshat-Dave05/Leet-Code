#include<bits/stdc++.h>
using namespace std;
bool para(string s){

    unordered_map<char, int> m = {{'(', -1},{')', 1},{'{', -2},{'}', 2},{'[', -3},{']', 3}};
    stack<char> temp;

    for(char val : s){
        if (m[val] < 0){
            temp.push(val);
        }
        else{
            if (m[val] + m[temp.top()] == 0) temp.pop();
            else return false;
        }
        // else if(m[val] + m[temp.top()] == 0) temp.pop();

        // else{
        //     if (s.empty()) return false;

        //     else if(m[val] + m[temp.top()] == 0){temp.pop();}

        //     else{return false;}
        // }
    }
    if (temp.empty()) return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    cout << para(s) << endl;
    return 0;
}