/******************************************************************************
 * Họ và tên: [Nguyễn Vũ Đăng Khoa]
 * MSSV:      [PS49657]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

// Tạo hàm tìm số lớn nhất trong 3 số
int timMax(int so1, int so2, int so3) {
    int max = so1;

    if (so2 > max)
        max = so2;

    if (so3 > max)
        max = so3;

    return max;
}

int main() {
    int a, b, c;

    // Nhập 3 số từ bàn phím
    printf("Nhap 3 so bat ky: ");
    scanf("%d %d %d", &a, &b, &c);

    // Gọi hàm
    int soMax = timMax(a, b, c);

    // Xuất kết quả
    printf("So lon nhat la: %d", soMax);

    return 0;
}
