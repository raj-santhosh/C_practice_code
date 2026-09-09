#include<stdio.h>
int strlen(char*p)
{       int c=0;
        while(*p)
        {
                p++; c++; }
        return c;
}
int main(int argc ,char**argv)
{
        if(argc<=1)
        {
                printf("usage:./a.out string");
                return 1;
        }
        int i;
        for(i=1;i<argc;i++)
                printf("length %s is %d\n",argv[i],strlen(argv[i]));
        return 0;
}
