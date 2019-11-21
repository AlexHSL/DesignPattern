#include <iostream>
class A
{
public:
    A() { f(); }
    virtual void f()
    {
        std::cout << "Af" << std::endl;
    }
    void g()
    {
        std::cout << "Ag" << std::endl;
    }
    void h()
    {
        std::cout << "Ah" << std::endl;
        f();
        g();
    }
};
class B : public A
{
public:
    void f()
    {
        g();
        std::cout << "Bf" << std::endl;
    }
    void g()
    {
        std::cout << "Bg" << std::endl;
    }
};
int main(int argc, const char **argv)
{
    B b;
    A *p = &b;
    p->f();
    p->g();
    p->h();

    return 0;
}
