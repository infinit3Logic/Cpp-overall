#include <iostream>
using namespace std;

class ClassB;

class ClassA{
    private:
        int valueA;
    public:
        ClassA(int val) : valueA(val){}
        friend void addValues(ClassA obj1, ClassB obj2);
};

class ClassB{
    protected:
        int valueB;
    public:
        ClassB(int val) : valueB(val){}
        friend void addValues(ClassA obj1, ClassB obj2);
};

void addValues(ClassA obj1, ClassB obj2){
    cout << "Add to values > " << obj1.valueA + obj2.valueB << endl;
}

int main(){
    int x, y;
    cout << "First Value > ";
    cin >> x;
    cout << endl;
    cout << "Second Value > ";
    cin >> y;

    ClassA newA(x);
    ClassB newB(y);

    addValues(newA, newB);


    return 0;
}