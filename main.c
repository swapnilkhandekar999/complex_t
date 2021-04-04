#include <stdio.h>
#include "header.h"
int main()
{
    static complex a={0,0};
    static complex b={0,0};
    static complex c={0,0};
    int choice;
    while(1)
    {
        printf("Press 1 for addition\n");
        printf("Press 2 for subtraction\n");
        printf("Press 3 for multiplication\n");
        printf("Press 4 for division\n");
        printf("Press 5 to exit\n");
        printf("Enter the number.\n");
        scanf("%d", &choice);

        if(choice == 1){
            error res = sum(&a,&b,&c);
        }
        else if(choice == 2){
            error res = diff(&a,&b,&c);
                    }
        else if(choice == 3){
            error res = mul(&a,&b,&c);
        }
        else if(choice == 4){
            error res = divtest(&a,&b,&c);
        }
        
        else if(choice == 5){
            break;
        }
        else
        {
            printf("Invalid Choice\n");
        }

    } 
    return 0;
}