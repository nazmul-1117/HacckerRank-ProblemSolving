#include <stdio.h>
#include <stdlib.h>

int marks_summation(void){
    
    int sum = 0;
    
    int *marks, n;
    char gender;
    scanf("%d", &n);
    marks = (int*) calloc(n, sizeof(int));
    
    char gen;
    
     for(int i=0; i<n; i++){
            scanf("%d", (marks+i));
        }
        
     scanf(" %c", &gen);
    
    if(gen == 'b'){
        for(int i=0; i<n; i+=2){
            sum += *(marks+i);
        }
    }
    
    else if(gen == 'g'){
        for(int i=1; i<n; i+=2){
            sum += *(marks+i);
        }
    }
    
    return sum;
}


int main()
{
    int sum = marks_summation();
    printf("%d", sum);

    return 0;
}
