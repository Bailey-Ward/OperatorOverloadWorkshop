#include <iostream>

class A
{
private:
    int _value;
public:
    void setValue() {
        _value = value;
    }
    int getValue() {
        return value; //Getters and setters are used to access private variable
    }
    int value{};
    A(int v) : value(v) {}
    void print() { std::cout << "My value is " << value << std::endl; }

};

/*A operator+(const A&) {
}

A operator++(const A&){
}
*/


A add(A a1, A a2)
{
    return A(a1.value + a2.value);
}


int main()
{
    A a1 = A(2);
    A a2 = A(3);

    a1.print();
    a2.print();

    A a3 = add(a1, a2);
    a3.print();

    /*A a4 = ++a3;
    a4.print();
    return 0;*/
}