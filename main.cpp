#include <iostream>

using namespace std;

class Shape
{
public:
    virtual int getArea()=0;
    void setWidth(int w)
    {
        width = w;
    }

    void setheight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};

class triangle:public Shape
{
public:
    int getArea()
    {
    return(width * height)/2;
    }
};

int main()
{
    triangle tri;
    tri.setWidth(5);
    tri.setheight(7);

    cout << "Total Triangle area: " << tri.getArea() <<endl;
    return 0;
}
