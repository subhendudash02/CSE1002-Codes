#include <bits/stdc++.h>

using namespace std;

class Shape{
    public:
    void print(){
        cout << "This is a shape" << endl;
    }
};

class Polygon: public Shape{
    public:
    void print(){
        cout << "Polygon is a shape" << endl;
    }
};

class Rectangle: public Polygon{
    public:
    void print(){
        cout << "Rectangle is a polygon" << endl;
    }
};

class Triangle: public Rectangle{
    public:
    void print(){
        cout << "Triangle is a polygon" << endl;
    }
};

class Square: public Triangle{
    public:
    void print(){
        cout << "Square is a rectangle" << endl;
    }
};

int main(){
    
    Square x;
    x.Shape::print();
    x.Polygon::print();
    x.Rectangle::print();
    x.Triangle::print();
    x.Square::print();
    
    return 0;
}