#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c,i;
    int l=0;
    int t=0;
    char s[100]={'/0'};
    char s1[100]={'/0'};
    scanf("%d%d",&a,&b);
    c=a+b;
    sprintf(s,"%d",c);
    l=strlen(s);
    if(s[0]=='-') {printf("%c",'-');
        for(i=0;i<l-1;i++) {s1[i]=s[i+1];}}
    else for(i=0;i<l;i++) {s1[i]=s[i];}
    t=strlen(s1);
    if(t>=4)
    for(i=0;i<t;i++){
        printf("%c",s1[i]);
        if(i==t-1) continue;
        if((i+1-t%3)%3==0)
            printf(",");
        }
    else if(t<4) printf("%s",s1);
    return 0;
}