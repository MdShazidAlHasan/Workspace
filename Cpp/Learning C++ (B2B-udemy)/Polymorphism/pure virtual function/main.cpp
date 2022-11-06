#include <iostream>
#include <vector>

using namespace std;

class Shape{
    public:
        virtual void draw()=0;
        virtual void rotate()=0;
    virtual ~Shape(){}
};

class Open_shape: public Shape{
    // abstract class
    public:
        virtual ~Open_shape(){}
};

class Closed_shape:public Shape{
    public:
        virtual ~Closed_shape(){};
};

class Line: public Open_shape{
    public:
        virtual void draw() override{
            cout<<"drawing a line "<<endl;
        }
        virtual void rotate() override{
            cout<<"Rotaing line "<<endl;
        }
    virtual ~Line(){}
};   

class Circle: public Closed_shape{
    public:
        virtual void draw() override{
            cout<<"Drawing a Circle "<<endl;
        }
        virtual void rotate() override{
            cout<<"Rotating a Circle "<<endl;
        }
        virtual ~Circle(){}
};

class Square: public Closed_shape{
    public:
        virtual void draw() override{
            cout<<"Drawing a Square "<<endl;
        }
        virtual void rotate() override{
            cout<<"Rotating a Square " <<endl;
        }
    virtual ~Square(){}
};

void artist(vector<Shape*> &shapes){
    for (auto p:shapes){
        p->draw();
    }
}

int main(){
    // Shape s;
    // Shape *p = new Shape();

    Circle c;
    c.draw();

    Shape *ptr = new Square();
    // ptr->draw();
    // ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    vector<Shape *> shapes{s1, s2, s3};

    // for (const auto p: shapes){
    //     p->draw();
    // }

    artist(shapes);

    return 0;
}
