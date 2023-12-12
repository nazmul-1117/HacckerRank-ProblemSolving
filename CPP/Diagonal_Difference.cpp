#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    size_t n;
    cin>>n;
    int arr[n][n];
    int sum1=0, sum2=0, dif=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0, j=n-1; i<n; i++, j--){
          sum1 += arr[i][i];
          sum2 += arr[i][j];
    }
    cout<< abs(sum1-sum2) <<endl;
}
