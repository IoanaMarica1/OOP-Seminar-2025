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
    void speak() {
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
    void speak(){
        std::cout<<"I am a rectangle";
    }
};

#endif //SEMINAR3_H
