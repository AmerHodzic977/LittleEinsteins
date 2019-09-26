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
    void setradius(int r)
    {
        radius =r;
    }
protected:
    int width;
    int height;
    int radius;
};


class triangle:public Shape
{
public:
    int getArea()
    {
    return(width * height)/2;
    }
};

class rectangle:public Shape
{
public:
    int getArea()
    {
    return(width * height);
    }
};
class circle:public Shape
{
public:
    int getArea()
    {
    return(3.14*radius*radius);
    }
};
int main()
{
    double Total;
    triangle tri;
    rectangle REC;
    circle cir;

    REC.setWidth(8);
    REC.setheight(12);


    tri.setWidth(5);
    tri.setheight(7);

    cir.setradius(2);

    Total=tri.getArea()+REC.getArea()+cir.getArea();

    cout << "Total Triangle area: " << tri.getArea() <<endl;
    cout << "Total Rectangle area: " << REC.getArea() <<endl;
    cout << "Total Circle area: " << cir.getArea() <<endl;
    cout << "Total area of all shapes: " << Total <<endl;
    return 0;
}
