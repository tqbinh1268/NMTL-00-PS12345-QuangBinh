#include <stdio.h>
int main(){
    int a,b;
    float x;
    printf("Nhap a,b: ");
    scanf("%d%d",&a,&b);
    if(a==0){
        if(b==0){
            printf("Phuong trinh vo so nghiem.\n");
        }else{
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        x = -b/a;
        printf("Phuong trinh %dx + %d = 0 co nghiem x = %.2f\n",a,b,x);//Phuong trinh ax + b = 0 co nghiem x = ...
    }
    return 0;
}