#include <iostream>

using namespace std;
const int IntGlobal = 5;
int main(){
	int IntAuto;
	int *IntDynamic = new int;
        cout << "Adress of global -- " << &IntGlobal << "\n";
	cout << "Adress of automatic -- " << &IntAuto << "\n";
	cout << "Adress of dynamic -- " << IntDynamic << "\n";
	delete IntDynamic;
	return 0;
}
