#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Masukkan angka: ");
    scanf("%d",&n);
    for( int i=1;i <= n;i++){
            for(int j=1;j<=i;j++){
                    printf("*", j);
            }
            printf("\n");
            }
    for (int i=1;i<=4;i++){
    for (int j=4;j>=i;j--){
            printf("*",j);
    }
    printf("\n");
}
}




