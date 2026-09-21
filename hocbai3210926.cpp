//21/9/2026. Nay học cin cout và khai báo biến, các phép toán + - x : : lấy dư
#include <iostream>
int main (){
    int a, b;
    float c;
    std::cout<<"Nhap diem toan:";
    std::cin >> a;
    std::cout<<"Nhap diem van:";
    std::cin >> b;
    std::cout<<"Nhap diem tieng Anh:";
    std::cin >> c;
    std::cout << "Diem trung binh cua ban la " << (a+b+c)/3;
    

    



    return 0;
}