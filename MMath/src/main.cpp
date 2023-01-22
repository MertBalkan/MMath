#include <iostream>
#include "Vector3.h"
#include <vector>


int main()
{
	MMath::Vector3 myVector1(4.32f, 3.9f, 1.2f);
	MMath::Vector3 myVector2(-2.1f, 8.2f, -2.4f);

	MMath::Vector3 crossResult = myVector1.cross(myVector2);
	MMath::Vector3 summationResult = myVector1 + myVector2;
	MMath::Vector3 multiplicationResult = myVector1 * myVector2;

	std::cout << "Cross Result: " << crossResult << "\n";
	//std::cout << "Cross Result: " << MMath::Vector3::up() << "\n";
	std::cout << "Summation Result: " << summationResult << "\n";
	std::cout << "Multiplication Result : " << multiplicationResult << "\n";

}