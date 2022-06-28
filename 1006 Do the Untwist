#include<stdio.h>
#include<string.h>
#define maxlength 256
#define mod 28
char ciphertext[maxlength];
int ciphercode[maxlength],plaincode[maxlength],key;
int main()
{
    while( scanf("%d ",&key) == 1 && key )
    {
        scanf("%s\n",ciphertext);
        int length = strlen(ciphertext),i;
        for( i = 0 ; i < length ; i++)
            switch(ciphertext[i])
            {
                case '.':
                    ciphercode[i] = 27;
                    break;
                case '_':
                    ciphercode[i] = 0;
                    break;
                default:
                    ciphercode[i] = ciphertext[i] - 'a' + 1 ;
                    break;
            }
        for( i = 0 ; i < length ; i++)
            plaincode[key*i%length] = (ciphercode[i] + i) % mod;
        /*一定要加上mod,否则出错*/
        for( i = 0 ; i < length ; i++)
        {
            switch(plaincode[i])
            {
                case 0:
                    printf("_");
                    break;
                case 27:
                    printf(".");
                    break;
                default:
                    printf("%c",plaincode[i]+'a'-1);
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}

