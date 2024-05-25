#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, N, sum =0;
    cin>> A;


    do
    {
    	cin>>N;
    } while (N <= 0);


    for (int i = 0; i < N; ++i)
    {
    	sum += (A + i);
    }
     cout<<sum<<endl;

  
}