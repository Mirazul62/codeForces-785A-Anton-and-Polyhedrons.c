#include<stdio.h>
int main()
{
    char ch[100];
    long long int i,n,c=0;
    scanf("%lld", &n);

    while(n--)
    {
        scanf("%s", &ch);

        if(ch[0]=='T')
            c+=4;
        else if(ch[0]=='C')
            c+=6;
        else if(ch[0]=='O' )
            c+=8;
        else if(ch[0]=='D')
            c+=12;
        else
            c+=20;
    }

    printf("%lld", c);

}
