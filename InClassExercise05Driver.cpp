#include <iostream>
using namespace::std;
#include "FullName.h"
#include "Friends.h"


void main()
{
	Friends myFriends;
	myFriends.printAll(cout);
	myFriends.addRear(FullName("Mike", 'A', "Adams"));
	myFriends.addRear(FullName("Benji", 'A', "Hansen"));
	myFriends.addRear(FullName("Anne", 'A', "John"));
	myFriends.addRear(FullName("Mindz", 'A', "Lansen"));
	myFriends.addRear(FullName("Bill", 'A', "Moore"));
	myFriends.addRear(FullName("Steve", 'A', "Smith"));
	myFriends.printAll(cout);

	return;
}