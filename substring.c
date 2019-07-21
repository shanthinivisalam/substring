#include<stdio.h>
#include<string.h>>
main()
{
    char str1[30];
    char str2[12];
    int i=0,j=0;
    gets(str1);
    gets(str2);
    for(i=0,j=0; str1[i]!='\0' && str2[j]!='\0';i++)
    {
            if(str1[i]==str2[j])
                j++;
            else
                j=0;
    }
    if(j==strlen(str2))
        printf( "present");
    else
        printf("not present");
}
