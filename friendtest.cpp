//友元函数定义在类的外部，有权访问类的私有、保护成员
//友元函数、友元类
//关键字friend
#include <iostream>
class Box
{
public:
    // Box();
    // ~Box();
    friend void printWidth(Box b);
    void setWidth(double w);

private:
    double width;
};
void Box::setWidth(double w)
{
    width = w;
}
void printWidth(Box b)
{
    std::cout << "Width of box : " << b.width << std::endl;
}
int main(int argc, const char **argv)
{
    Box b;
    b.setWidth(10.0);
    printWidth(b);
    return 0;
}