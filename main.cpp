#include<iostream>
//#include<conio.h>
#include"add.h"
#include"multiply.h"
//#include<iostream>
#include"power.h"



int main()
{

std::cout<<power(add(multiply(2,2),4),3)<<"\n";



return 0;
}
