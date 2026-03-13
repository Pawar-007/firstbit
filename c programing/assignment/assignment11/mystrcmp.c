//mystrcmp
// The mystrcmp() is a built-in library function in C. This function takes two strings as arguments, compares these two strings lexicographically and returns an integer value as a result of comparison.
#include<stdio.h>
int mystrcmp(char [], char []);
void main()
{
    char st1[]="hellozsk";
    char st2[]="hellowef";
    int res=mystrcmp(st1,st2);
    printf("%d",res);
}
int mystrcmp(char st1[],char st2[]){
    int i=0;
    while(st1[i]!='\0' && st2[i]!='\0'){
        if(st1[i]<st2[i])return -1;
        else if(st1[i]>st2[i]) return 1;
        i++;
    }
    if (st1[i] < st2[i])
        return -1;
    else if (st1[i] > st2[i])
        return 1;
    return 0;
}