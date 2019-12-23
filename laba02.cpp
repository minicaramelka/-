#include <iostream>

using namespace std;

typedef struct{
	char speed[3];
	bool wheels;
	double cost;
	char model[3];
}FirstCar;
typedef struct{
	double cost;
	char model[3];
	char speed[3];
	bool wheels;
}SecondCar;
#pragma pack(push,1)
typedef struct{
	char model[3];
	double cost;
	char speed[3];
	bool wheels;
}ThirdCar;
#pragma pack(pop)

int main(){
	FirstCar first;
	cout << "First Struct:" << "\n";
	cout << "Size of struct is " << sizeof(first) << "\n";
	cout << "Adress char -- " << &first.model << "\n";
	cout << "Adress char -- " << &first.speed << "\n";
	cout << "Adress bool -- " << &first.wheels << "\n";
	cout << "Adress double -- " << &first.cost << "\n";
	cout << "Size sum is " << sizeof(first.model) + sizeof(first.wheels) + sizeof(first.cost) + sizeof(first.speed) << "\n";
	SecondCar second;
	cout << "\n" << "Second Struct:" << "\n";
	cout << "Size of struct -- " << sizeof(second) << "\n";
	cout << "Adress char -- " << &second.model << "\n";
	cout << "Adress bool -- " << &second.wheels << "\n";
	cout << "Adress double -- " << &second.cost << "\n";
	cout << "Adress char -- " << &second.speed << "\n";
	cout << "Size sum is " << sizeof(second.model) + sizeof(second.wheels) + sizeof(second.cost) + sizeof(second.speed) << "\n";
	ThirdCar third;
	cout << "\n" << "Third Struct:" << "\n";
	cout << "Size of struct is " << sizeof(third) << "\n";
	cout << "Adress char -- " << &third.model << "\n";
	cout << "Adress double -- " << &third.cost << "\n";
	cout << "Adress char -- " << &third.speed << "\n";
	cout << "Adress bool -- " << &third.wheels << "\n";
	cout << "Size sum is " << sizeof(third.model) + sizeof(third.wheels) + sizeof(third.cost) + sizeof(third.speed) << "\n";
return 0;
}
