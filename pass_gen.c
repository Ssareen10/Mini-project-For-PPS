#include <stdio.h>
#include <string.h>
int main()
{
    char name[1001],enc[100],inp[1001], temp;
    char alph[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u',
    'v','w','x','y','z'};
    char num[26][2]={{'0','1'},{'0','2'},{'0','3'},{'0','4'},{'0','5'},{'0','6'},{'0','7'},{'0','8'}
    ,{'0','9'},{'1','0'},{'1','1'},{'1','2'},{'1','3'},{'1','4'},{'1','5'},{'1','6'},{'1','7'},{'1','8'}
    ,{'1','9'},{'2','0'},{'2','1'},{'2','2'},{'2','3'},{'2','4'},{'2','5'},{'2','6'}};
    int i,len,k=0,a,c;
    printf("Enter Your Name:- ");
    scanf("%s",name);
    len=strlen(name);
    for(i=0;i<=len;i++)
    {
        if(i%2==0) 
        {
            enc[k]=name[i];
            k++;
        }
        else
        {
            for (int j=0;j<26;j++){
                if (name[i]==alph[j]){
                    for(int a=0;a<2;a++){
                        enc[k]=num[j][a];
                        k++;
                    }
                }
            }
        }
    }
    printf("Encrypted password:- %s", enc);
    a=strlen(enc);
    for(c=0;i<=a;c++)
    {
        if(c%2==0) 
        {
            name[i]=enc[k];
            i++;
        }
        else
        {
            for (int j=0;j<26;j++){
                for(int a=0;a<2;a++){
                    if (enc[k]==num[j][a]){
                        name[i]=alph[j];
                    i++;
                    }
                }
            }
        }
    }
    printf("\nName is:- %s",name);
    return 0;
}