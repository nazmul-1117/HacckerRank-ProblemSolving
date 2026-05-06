# include <bits/stdc++.h>
using namespace std;

int main(){
    size_t n=6;
    // cin >> n;

    for (size_t i = 0; i < n; i++){
        for (size_t j = 0; j < n; j++){
            
            if(i < j-i+1){
                cout << " ";

            }else{
                cout << "#";
            }
        }
        
    }
    
}