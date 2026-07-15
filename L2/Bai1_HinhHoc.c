#include <stdio.h>
// #define PI 3.1419
const float PI = 3.14159;

int main(){
    //Nhu cầu nhập: dai, rong
    //lưu kiểu gì => số;
    //Số nguyên hay số thực => thực
    //khai báo biến, kiểu dữ liệu
    float dai, rong, r;
    //nhập dữ liệu từ bàn phím scanf, dùng printf xuất thông điệp
    printf("Nhap chieu dai: ");
    scanf("%f",&dai);
    printf("Nhap chieu rong: ");
    scanf("%f",&rong);

    //nhu cầu xuất thông tin chu vi và diện tích
    printf("Chieu dai: %.2f\nChieu rong: %.2f\nChu vi HCN: %.2f\nDien tich HCN: %.2f\n",
            dai,rong,(dai + rong)*2,dai*rong);

    //Tính chu vi và diện tích hình tròn
    //Nhu cầu là nhập vào bán kính: r : float
    //Ôn tập kiến thức về hằng số
    printf("Nhap ban kinh: ");
    scanf("%f",&r);
    printf("\nThong tin hinh tron:\nBan kinh: %.2f\nChu vi: %.2f\nDien tich: %.2f\n",r,r*2*PI,r*r*PI);

    return 0;
}