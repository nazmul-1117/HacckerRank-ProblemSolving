#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    vector<int> v;
    int sum=0;

public:
    void input(const int a){
        this -> v.push_back(a);
    }

    void calculateTotalScore(){
        this -> sum = accumulate(v.begin(), v.end(), 0);
    }
};

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    size_t T, n;
    cin>>n;

    vector<Student> st(n);

    for (int i = 0; i < n; ++i)
    {
        int a;

        for (int j = 0; j < 5; ++j)
        {
            cin >> a;
            st[i].input(a);
        }

        st[i].calculateTotalScore();
    }

    int counter = 0;
    for(auto i=0; i < n; i++){
        
        if(st[i].sum > st[0].sum) counter++;
    }
    cout << counter <<endl;
  
}