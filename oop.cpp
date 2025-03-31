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

int main(){

	B newObj;

	
	return 0;
}
