#include <bits/stdc++.h>
using namespace std;

void arrInput(int* &arr2, int &n){
    for(int i=0; i<n; i++){
        cin>>*(arr2+i);
    }
}

void arrOutput(int* &arr2, int &n){
    for(int i=0; i<n; i++){
        cout<<*(arr2+i)<<" ";
    }
    cout<<endl;
}

void checkUnique(int* arr2, int &n){
    int i, j;
    for(i=0; i<n; i++){
        int iNum = arr2[i];
        bool isUnique = true;
        
        for(j=0; j<n;j++){
            int jNum = arr2[j];
            if(iNum==jNum && i != j){
                isUnique = false;
                break;
            }
        }
       
        if(isUnique){
            cout<<iNum;
            break;
        }
    }
    
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    int* arr;
    arr = (int*) calloc(n, sizeof(int));
    
    arrInput(arr, n);
    checkUnique(arr, n);
    
    
    free(arr);
    return 0;
}
