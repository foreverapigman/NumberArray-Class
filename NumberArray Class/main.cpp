#include <iostream>
#include "NumberArray.h"
using namespace std;

int main()
{
    //test 1
    /*NumberArray num(5);
    num.print();
    NumberArray num2;
    num2.print();*/

    //test 2
    /*NumberArray num(5);
    num.setNumber(0, 1.0);
    num.setNumber(1, 2.0);
    num.setNumber(2, 3.0);
    num.setNumber(3, 4.0);
    num.setNumber(4, 5.0);
    num.print();
    num.setNumber(5, 2.0);
    num.print();*/

    //test 3
    NumberArray num(5);
    num.setNumber(0, 10.0);
    num.setNumber(1, 20.0);
    num.setNumber(2, 5.0);
    num.setNumber(3, 15.0);
    num.setNumber(4, 25.0);
    num.print();
    cout << num.getNumber(2) << endl;
    cout << num.getMin() << endl;
    cout << num.getMax() << endl;
    cout << num.getAverage() << endl;
    cout << num.getNumber(5) << endl;

}