#include <bits/stdc++.h>
using namespace std;

struct Student{
    	int age, standard;
    	string fName, lName;
};

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    struct Student st;

    cin >> st.age >> st.fName >> st.lName >> st.standard;
 
    cout << st.age << " " 
    << st.fName << " " << st.lName 
    << " " << st.standard;
}