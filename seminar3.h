#include<string>
#include<iostream>
#ifndef SEMINAR3_H
#define SEMINAR3_H
class Shape {
public:
    int x;
    Shape() {
        this->x=42;
    }
    virtual void speak() {
        std::cout<<"I am a shape";
    }
};
//tot ce e in clasa shape devine public,private
class Rectangle: public Shape {
public:
    int y;
    Rectangle(int y) {
        this->y=y;
    }
    void speak() override{
        std::cout<<"I am a rectangle ";
    }
};
class Triangle {
public:
    void speak() {
        std::cout<<"I am a triangle ";
    }
};
#endif //SEMINAR3_H
