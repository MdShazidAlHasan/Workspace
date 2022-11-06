#include <bits/stdc++.h> 
#include <string>

void solve(string str, string s, vector<string>& output, int index){
    if(index>=str.size()){
        if(s.size()>0){
            output.push_back(s);
        }
        return;
    }
    
    //exclude
    solve(str, s, output, index+1);

    //include
    s.push_back(str[index]);
    solve(str, s, output, index+1);
}

vector<string> subsequences(string str){
	
	vector<string> output;
    string s="";
    int index = 0;
    solve(str, s, output, index);
    return output;
	
}
