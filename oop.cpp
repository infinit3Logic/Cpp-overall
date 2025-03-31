#include <iostream>
using namespace std;

class A {
	public:
		// Constructor
		A(){
			cout << "Class A Constructor\n";
		}
		// Destructor
		~A(){
			cout << "Class A Destructor\n";
		}
};

class B : public A{
	public:
		// Constructor
		B(){
			cout << "Class B Constructor\n";
		}
		// Destructor
		~B(){
			cout << "Class B Destructor\n";
		}
};

class C : public B{
	public:
		// Constructor
		C(){
			cout << "Class C Constructor\n";
		}
		// Destructor
		~C(){
			cout << "Class C Destructor\n";
		}
};

int main(){

	B newObj;

	
	return 0;
}
