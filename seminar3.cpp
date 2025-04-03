
#include<seminar3.h>
#include<string>
#include <vector>
using namespace std;

int main() {
    // Shape s;
    // s.speak();
    // Rectangle r;
    // r.speak();
    // Shape s1;
    // cout<<s1.x<<endl;
    // Shape s2=Rectangle(43);
    // cout<<s2.x<<endl;

    Shape* s_ptr;
    Shape s;
    Rectangle r(43);
    Triangle t;
    s_ptr=&s;
    s_ptr->speak();

    s_ptr=&r;
    s_ptr->speak();
    vector<Shape*>Shapes={
        new Shape(),
        new Rectangle(22),
    };

    return 0;
}
