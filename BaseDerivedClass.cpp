// Code example wrote by me to visualize the relationships between classes

#include <iostream>
#include <math.h>

class Shape
{
public:
    Shape() {};
    virtual ~Shape() {};

    virtual double getArea(void) const { return 0.0; };

    virtual double getPerimeter(void) const { return 0.0; };

    virtual void draw(void) const {};
};

// Is-a relationship class
class Rectangle : public Shape
{
public:
    Rectangle(double side1, double side2) : longSide(side1), shortSide(side2) {}    
    ~Rectangle() {}

    double getArea(void) const override { return longSide * shortSide; }

    double getPerimeter(void) const override { return 2 * (longSide + shortSide); }

    void draw(void) const override { std::cout << "Drawing a rectangle." << std::endl; }

private:
    double longSide;
    double shortSide;
};

// Is-like-a relationship class
class Circle : public Shape
{
public:
    Circle(double r) : radius(r) {}    
    ~Circle() {}

    double getArea(void) const override { return M_PI * (radius * radius); }

    double getPerimeter(void) const override { return 2 * M_PI * radius; }

    void draw(void) const override { std::cout << "Drawing a circle." << std::endl; }

    // Function not available to the Base class
    double getDiameter(void) const { return 2 * radius; } 

private:
    double radius;
};

int main()
{
    // Both initializations will use the Rectangle::getArea() function override
    Rectangle* newRectangle = new Rectangle(5.0, 3.0);
    std::cout << "Area: " << newRectangle->getArea() << std::endl;

    // Example of initializing the Base class with the child class
    Shape* newShape = new Rectangle(5.0, 3.0);
    std::cout << "Area: " << newShape->getArea() << std::endl;

    // This is not possible because Shape does not have getDiameter() function in its interface
    // Shape* newCircle = new Circle(5.0);
    //! std::cout << "Diameter: " << newCircle->getDiameter() << std::endl;

    delete newShape;
    delete newRectangle;

    return 0;
}