#include <stdio.h>
int main() {
    int i,j;
    printf("Hollow Rectangle\n\n");
    for(i=0;i<4;i++){
	for(j=0;j<5;j++){
            if(i==0 || i==3 || j==0 || j==4) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}