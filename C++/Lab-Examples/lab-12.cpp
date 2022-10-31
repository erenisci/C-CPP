#include <iostream>

class Rectangle
{
private:
    int height;
    int width;

public:
    int area();
    int peritemer()
    {
        return 2 * (width + height);
    }

    int getLength()
    {
        return height;
    }
    void setLength(int height1)
    {
        height = height1;
    }

    int getWidth()
    {
        return width;
    }
    void setWidth(int width1)
    {
        width = width1;
    }
};

int Rectangle::area()
{
    return width * height;
}

int main(void)
{
    Rectangle a;
    a.setLength(150);
    a.setWidth(50);
    std::cout << "Area: " << a.area() << " Perimeter: " << a.peritemer() << std::endl
              << "Width: " << a.getWidth() << " Height: " << a.getLength();

    return 0;
}