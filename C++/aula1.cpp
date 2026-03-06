#include<iostream>
int main(){
    float litros = 3.4;
    float *ptr = &litros;
    std::cout<<" O valor de litros e " << litros<<std::endl; 
    float torque[10]={2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9};
    float *ptro = &torque[0];
    std::cout<<*ptro<<std::endl;
    float *ptroo = &torque[9];
    std::cout<<*ptroo<<std::endl;
    return 0;
}