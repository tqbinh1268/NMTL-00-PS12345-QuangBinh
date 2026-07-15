#include <stdio.h>
int main(){
    //nhu cầu nhập a,b. tính nghiệm x
    int a,b;
    float x;
    printf("Nhap a,b: ");
    scanf("%d%d",&a,&b);

    x = -(float)b/a;
    printf("Phuong tinh %dX + %d = 0 có nghiem x = %.2f",a,b,x);

    return 0;
}