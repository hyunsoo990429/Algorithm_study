#include <bits/stdc++.h>
using namespace std;

vector<int> students;
int n;

int main() {
	
	for(int i = 0; i < 30; i++){
		students.push_back(i + 1);
	}
	
	for(int i = 0; i < 28; i++){
	    cin >> n;
	    
	    students.insert(students.begin() + n - 1, 0);
		students.erase(students.begin() + n);	
	}
	
	sort(students.begin(), students.end());
	
	for(int student : students) {
		if(student != 0){
		   cout << student  << "\n";	
		}
	}
	
}
