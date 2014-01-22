#include"add.h"
#include"multiply.h"
#include<iostream>
#include"power.h"
void areaEquals(double expected, double got){

if(expected != got)
{
std::cout<<"blad \n";

}
else{

std::cout<<"sukces\n";
}
}



int main(){

areaEquals(4,add(2,2));
areaEquals(12,multiply(3,4));
areaEquals(32,power(2,5));

std::cout<<"end \n";

return 0;
}
