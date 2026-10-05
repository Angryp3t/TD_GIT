#include <stdio.h>
#include<string.h>

int main()
{
    int false = 0;
    int false2 =0;
    char motbase[100]="bonjour";
    char mottrouve[100];
    char lettre;
    int size = strlen(motbase);
    int tiret=0;

    for (int i = 0; i < size; i++)
    {
        mottrouve[i]='_';
        tiret = tiret+1;
    }
    mottrouve[size] = '\0';
    
    while (false<7 && tiret != 0)
    {
        printf("Lettre proposee ? \n");
        scanf("%c",&lettre);
        getchar();

        for (int i = 0; i < size; i++)
        {
            if (lettre == motbase[i])
            {
                mottrouve[i] = lettre;
                tiret = tiret - 1;
            } 
            else 
            {
                false2= false2+1;
            }
            
        }
        if (false2==size)
        {
            false = false+1;
        }
        false2=0;

        if (false==1)
        {
            printf("\n\n\n\n\n\n\n-------\n");
        } else if (false==2)
        {
            printf("\n |\n |\n |\n |\n |\n |\n-------\n" );
        } else if (false==3)
        {
            printf(" -------\n |     |\n |\n |\n |\n |\n-------\n");
        } else if (false==4)
        {
            printf(" -------\n |     |\n |     O\n |\n |\n |\n-------\n");
        } else if (false==5)
        {
            printf(" -------\n |     |\n |     O\n |     |\n |\n |\n-------\n");
        } else if (false==6)
        {
            printf(" -------\n |     |\n |     O\n |    /|\\\n |\n |\n-------\n" );
        } else if (false==7){
            printf(" -------\n |     |\n |     O\n |    /|\\\n |    / \\\n |\n-------\n");
        }

        printf("%s \n",mottrouve);  
        
    }    

    return 0;
}