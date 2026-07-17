#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c, Delta;
    float x,x1,x2;

    printf("Nhap a,b,c: "); //Nhap dung kieu số
    scanf("%d%d%d",&a,&b,&c);
    if(a==0){
        //đúng
        if(b==0){
            //b đúng
            if(c==0){
                //c đúng
                printf("Phương trình vô số nghiệm - Phương trình đúng với mọi x (0x + 0 = 0)\n");
            }else{
                //c sai
                printf("Phương trình vô nghiệm (x = -c/0)\n");
            }
        } else {
            //b sai
            //Phương trình có nghiệm x = -c/b
            x = -(float)c/b;
            printf("Phuong trinh %dx + %d = 0 co nghiem x = %.2f\n",b,c,x);
        }
    }else{
        //sai
        //Lập Delta = b*b - 4ac
        Delta = b*b - 4*a*c;
        if(Delta < 0){
            //đúng
            printf("Phuong trinh vo nghiem\n");
        } else if (Delta == 0)
        {
            x = -(float)b/(2*a);
            printf("Phuong trinh co nghiem kep x = %.2f\n",x);
        } else {
            //có 2 nghiệm
            x1 = (-b+sqrt(Delta))/(2*a);
            x2 = (-b-sqrt(Delta))/(2*a);
            printf("Phuong trinh co hai nghiem x1 = %.2f\tx2 = %.2f\n",x1,x2);
        }
    }
    return 0;
}

//test case  test data KCS