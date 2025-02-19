#include <Windows.h>
#include <iostream>                                           
#include "Worker.h"
#include "Manager.h"
#include "President.h"
#include "Aspirant.h"
using namespace std;

int main()
{
    setlocale(0, "");

    Manager m1{ "Denis", 23, 35000,2 };
    m1.Print();

    Worker w1{ "Egor", 19, 40000, 8 };
    w1.Print();

    President p1{ "Vadim", 27, 67000, 8 };
    p1.Print();


    Aspirant a1{ "Vlad", 21, 4, 4.3, "Market", 1 };
    a1.Print();
}