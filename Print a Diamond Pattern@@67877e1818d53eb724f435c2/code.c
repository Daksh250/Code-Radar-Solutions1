#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows-i-1; j++){
            printf(" ");
        }
        for(int k=0; k<rows; k++){
            printf("*");
        }
        for(int l=0; l<=rows-i-1;l++){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}