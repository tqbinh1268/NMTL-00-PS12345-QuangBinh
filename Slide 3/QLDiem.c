#include <stdio.h>
int main(){
    float diem;
    printf("Nhap diem: ");
    scanf("%f",&diem);
    //xet dau/rot
    if(diem >= 5.0){
        printf("Dau\n");
    }else{
        printf("Rot\n");
    }

    //xep loai
    // 0 <= Yeu < 5 <= TB < 6.5 <= Kha < 8 <= Gioi <=10  
    //diem nam trong 0 - 10
    if(diem>=8){
        printf("Gioi\n");
    }else if(diem>=6.5){
        printf("Kha\n");
    }else if(diem>=5){
        printf("Trung binh\n");
    }else{
        printf("Yeu\n");
    }

    printf("a = %f",diem); //log
    return 0;
}