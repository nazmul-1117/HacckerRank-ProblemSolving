#include <bits/stdc++.h>
#define lld long long int
using namespace std;

vector<int> stringToIntegers(string &str){
	int n;
	char ch;
	vector<int> v;
	stringstream ss(str);

	while(ss){
		if((ss.peek() != ',') && (ss >> n)){
			v.push_back(n);
		}
		else{
			ss >> ch;
		}
	}
	return v;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin>>str;

    vector<int> v = stringToIntegers(str);
    for(auto i: v){
    	cout<<i<<endl;
    }
}