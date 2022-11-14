#include<stdio.h>
int main(){
    int arr[4][4],arrNew[4][4];
    int pos=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=pos;
            pos++;
        }
    }

    int newPos=1;
    for (int i = 0; i < 4; i++)
    {
        for(int j=0;j<4;j++){
            arrNew[j][i]=newPos;
            newPos++;
        }
        
    }


    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for(int j=0;j<4;j++)
            printf("%d ",arr[i][j]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for(int j=0;j<4;j++)
            printf("%d ",arrNew[i][j]);
    }
    return 0;

}