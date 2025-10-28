#include <bits/stdc++.h>
using namespace std;

vector<string> alphas = {
	{"c="}, {"c-"}, {"dz="}, {"d-"}, {"lj"}, {"nj"}, {"s="}, {"z="}
};

string input;
int cnt = 0;

int main() {
	
    cin >> input;
    
    for(string alpha : alphas) {
    	
    	auto start = 0;
    	auto end = input.find(alpha);
    	
    	do{
    	  if(end != string::npos) {
    		  cnt++;
    		  input.erase(end, alpha.size());
    		  input.insert(end, " ");
    	  }
    	  
    	  start = end;
    	  end = input.find(alpha, start);
    	}while(end != string::npos);
    }
    
    for(char s : input) {
    	if(s != ' ') {
    		cnt++;
    	}
    }
    
    cout << cnt;
}

