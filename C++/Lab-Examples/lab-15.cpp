#include <iostream>

class Shape
{
protected:
    int height;
    int width;

public:
    void setHeight(int height)
    {
        this->height = height;
    }
    void setWidth(int width)
    {
        this->width = width;
    }
    virtual int Area()
    {
        std::cout << "Area of shape: ";
        return 0;
    }
    Shape(int a, int b)
    {
        if (a < 0)
            width = 0;
        else
            width = a;
        height = b;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int a, int b) : Shape(a, b) {}
    int Area() // override
    {
        std::cout << "Area of rectangle: ";
        return width * height;
    }
};

class Triangle : public Shape
{
public:
    Triangle(int a, int b) : Shape(a, b) {}
    int Area()
    {
        std::cout << "Area of triangle: ";
        return width * height / 2;
    }
};

int main(void)
{
    Triangle t(4, 5);
    Rectangle r(4, 5);

    std::cout << "Area of triangle: " << t.Area() << std::endl;
    std::cout << "Area of rectangle: " << r.Area() << std::endl;

    Shape *s;
    s = &t;
    std::cout << "Area of shape (Triangle): " << s->Area() << std::endl;
    s = &r;
    std::cout << "Area of shape (Rectangle): " << s->Area() << std::endl;

    Shape x(40, 50);
    std::cout << "Area of shape (Object): " << x.Area() << std::endl;

    return 0;
}