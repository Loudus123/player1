#include <stdio.h>
int main()
{
    char s1[1000],char s2[1000],i1,i2;
    printf("Enter a string1: ");
    scanf("%s",s1);
    for(i1=0; s1[i1]!='\0'; ++i1);
    printf("Length of string: %d",i1);
    printf("Enter a string2: ");
    scanf("%s",s2);
    for(i2=0; s2[i1]!='\0'; ++i2);
    printf("Length of string: %d",i2);
    if(i1==i2)
    {
    printf("the sring is isomorphic so ans is true");
    else
    printf(""false");
    }
    return 0;
}
