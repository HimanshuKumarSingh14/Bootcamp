#include<stdio.h>
#include<string.h>
//count consonent program
int main()
{
    char c[100];
    printf("enter the string\n");
    gets(c);
    int count=0;
    int l=strlen(c);
    for(int i=0;i<l;i++)
    {
        if(c[i]!='a'&&c[i]!='e'&&c[i]!='i'&&c[i]!='o'&&c[i]!='u'&&c[i]!='A'&&c[i]!='E'&&c[i]!='I'&&c[i]!='O'&&c[i]!='U')
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}