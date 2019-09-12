
#include <iostream>
using namespace std;

class Container
{
	virtual void Show();
	virtual  ~Container();
};

class MyArray : public Container
{
	int size;
	inty *ar;
public:
	MyArray(int size);
	Show();
	~MyArray();
};
