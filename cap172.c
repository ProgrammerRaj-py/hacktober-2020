#include <stdio.h>
 
void main()
{
    printf("\n\n");
    for (int i = 0; i < 8; i++){  
         for (int j=0; j < 7; j++){
            if ((i==0 || i==7) || (i>0 && i<8 && j==3)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");


    for (int i=0; i < 2; i++){
        for (int j = 0; j < 9; j++)
        {
            if((i==0 && (j>0 && j<3)) || (i==0 && (j>5 && j<8)) || ((i==1 && j<4) || (i==1 && j>4))){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");  
    }
    for (int i=5; i >= 0; i--){
        for (int j=i; j < 5; j++){
            printf(" ");
        }
        for (int j = 1; j <= (i*2)-1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    printf("\n\n");
    for (int i=0; i < 6; i++){
        for (int j=0; j < 7; j++){
            if (((j==0 || j==6)&& i<4) || (i==4 && (j==1 || j==5)) || (i==5 && j>1 && j<5)){
                printf("*");
            }else{
                printf(" ");
            } 
        }
        printf("\n");
    }
    printf("\n\n");  
}



