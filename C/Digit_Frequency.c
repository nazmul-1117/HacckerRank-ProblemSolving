#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n[9]={0};
    char *s;
    s = (char*) calloc(1024, sizeof(char));
    scanf("%[^\n]", s);
    s = (char*) realloc(s, strlen(s));
    
    
    for(int i=0; i<strlen(s); i++)
    {
        if('0'<=s[i] && s[i]<='9')
        {
           int c;
           c = s[i]-48;
           n[c]++;
        }
    }
    s[strlen(s)] = '\0';
    
    for(int i=0; i<=9; i++)
    {
        printf("%d ", n[i]);
    }

    return 0;
}
