#include <iostream>
#include <math.h>
void func1() {
    //Variant 19
    //Task_1

    double h, a, b; // a- катет, b- гипотенуза
    std::cout<<"enter h"<<std::endl;
    std::cin>>h;
    if (h<0){
        std::cout<<"error"<<std::endl;
    }else{
        b=2*h;//по свойству падения высоты на гипотенузу
        a=sqrt(pow(h,2.) + pow(h, 2.));// Пифагор
        std::cout<<"hypotenuse ="<<b<< std::endl;
        std::cout<<"cathetus ="<<a<<std::endl;
    }
}
    //Task_2

    void func2() {
        double Mx, My, r, x0, y0, M;
        std::cout<<"enter Mx, My, r, x0, y0 ="<<std::endl;
        std::cin>> Mx>>My>>r>>x0>>y0;
        M = sqrt(pow(Mx - x0,2.) + pow(My - y0, 2.));//находим координаты точки(расстояние от центра до точки)
        if (M<=r){
            std::cout<<"included"<<std::endl;
        }else{
            std::cout<<"not included"<<std::endl;
        }
}
    int main(){
    func1();
    func2();
}

