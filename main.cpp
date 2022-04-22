#include <iostream>
#include <math.h>
 
using namespace std;
 
main()
{
    int a,b,c,S;
    cout<<"Введите первый катет: ";
    cin>>a;
    cout<<"Введите второй катет: ";
    cin>>b;
    c=sqrt(a*a+b*b);
    S=a*b/2; //формула для вычисления, площади 
    cout<<"Гипотенуза равна: "<< c << ", Площадь равна: "<< S;
    return 0;
}
