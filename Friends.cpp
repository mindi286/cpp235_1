#include "Friends.h"

Friends::Friends()
{
	placer = 0;
}

Friends::Friends(const Friends & other)
{
	placer = other.placer;
	for(int i=0; i < placer; i++)
		(*this).info[i] = other.info[i]; //copies other into my array
										// = is for data type FullName (shallow copy)
}
	
Friends::~Friends()
{
}

bool Friends::isFull(void) const
{
	return placer >= NUMBER_FRIENDS;
}

bool Friends::isEmpty(void) const
{
	return placer == 0;
}

bool Friends::addFront(const FullName & myNewFriend)
{
	if(isFull() ) return false;

	//return true;
}

bool Friends::addRear(const FullName & myNewFriend)
{
	if(isFull() ) return false;
	(*this).info[placer] = myNewFriend; //FullName objects
	placer++;
	return true;
}
	
bool Friends::removeFront()     // return true if not empty and data removed
{
	return true;
}
bool Friends::removeRear()      // return true if not empty and data removed
{
	return true;
}
const Friends & Friends::operator=(const Friends & )
{
	return *this;
}

bool Friends::isSorted(void) const           // return true is the names are sorted, use the < operator for FullName
{
	return false;
}

void Friends::printAll(ostream & out) const
{
	if(isEmpty())
	{
		out << "NO FRIENDS" << endl;
		return;
	}
	for(int i=0; i < placer; i++)
		out << (*this).info[i] << endl; //fullname datatype
	return;
}

int Friends::findFriend( const char * firstName) const  // return first location where a FullName
{	                                                // is found with the same firstName
	                                                // return -1 is not found
	return -1;
}

FullName Friends::retrieveFriend(int location ) const   // starting at 1 return the FullName in the
{	                                                //   requested location
	FullName answer;
	return answer;
}

	bool Friends::removeFriend(int location ) const   // starting at 1 delete the FullName in the
{	                                                //   requested location
	return true;
}