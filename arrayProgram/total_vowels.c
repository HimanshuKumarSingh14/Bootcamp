#include<stdio.h>
int main()
{
    char c[20];
    printf("Enter the string:\n");
    gets(c);
    int l=strlen(c);
    int count=0;
    for(int i=0;i<l;i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='U')
        {
            count++;
        }
    }
    printf("Total number of vowels is %d",count);
return 0;
}