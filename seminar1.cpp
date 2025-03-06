#include <iostream>

class Dog {
public:
    bool eat() {
        std::cout<<"Dog eats";
        return true;
    }
    int getAge() {
        return age;
    }
    int setAge(int varsta) {
        age=varsta;
    }
private:
    int age;
};
int main() {
    Dog dog1=Dog();
    dog1.eat();
    dog1.setAge(5);
    dog1.getAge();
    std::cout<<dog1.getAge();

    return 0;
}

