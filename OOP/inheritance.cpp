#include<stdio.h>

class Shape{
    public:
    void printArea()
    {
        printf("\nArea printed for shape");
    }
};

class Circle : public Shape{
    public:
    void printArea()
    {
        printf("\nArea printed for Circle");
    }
};

int main(int argc, char const *argv[])
{
    Shape s;
    s.printArea();

    Circle c;
    c.printArea();
    return 0;
}
