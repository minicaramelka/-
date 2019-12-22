#include <iostream>

using namespace std;

typedef struct{
	double speed;
	short wheels;
	int cost;
	char model[3];
}FirstCar;
typedef struct{
	char model[3];
	char wheels[3];
	int cost;
	int speed;
}SecondCar;
#pragma pack(push,1)
typedef struct{
	char model[3];
	int cost;
	double speed;
	short wheels;
}ThirdCar;
#pragma pack(pop)

int main(){
	FirstCar first;
	cout << "First Struct:" << "\n";
	cout << "Size of struct is " << sizeof(FirstCar) << "\n";
	cout << "Adress char -- " << &first.model << "\n";
	cout << "Adress double -- " << &first.speed << "\n";
	cout << "Adress short -- " << &first.wheels << "\n";
	cout << "Adress int -- " << &first.cost << "\n";
	cout << "Size sum is " << sizeof(first.model) + sizeof(first.wheels) + sizeof(first.cost) + sizeof(first.speed) << "\n";
	SecondCar second;
	cout << "\n" << "Second Struct:" << "\n";
	cout << "Size of struct -- " << sizeof(SecondCar) << "\n";
	cout << "Adress char -- " << &second.model << "\n";
	cout << "Adress short -- " << &second.wheels << "\n";
	cout << "Adress int -- " << &second.cost << "\n";
	cout << "Adress double -- " << &second.speed << "\n";
	cout << "Size sum is " << sizeof(second.model) + sizeof(second.wheels) + sizeof(second.cost) + sizeof(second.speed) << "\n";
	ThirdCar third;
	cout << "\n" << "Third Struct:" << "\n";
	cout << "Size of struct is " << sizeof(ThirdCar) << "\n";
	cout << "Adress char -- " << &third.model << "\n";
	cout << "Adress int -- " << &third.cost << "\n";
	cout << "Adress double -- " << &third.speed << "\n";
	cout << "Adress short -- " << &third.wheels << "\n";
	cout << "Size sum is " << sizeof(third.model) + sizeof(third.wheels) + sizeof(third.cost) + sizeof(third.speed) << "\n";
return 0;
}
