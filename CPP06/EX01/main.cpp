#include <iostream>

struct Data {};

uintptr_t serialize(Data* content)
{
	return reinterpret_cast<uintptr_t>(content);
}

Data* deserialize(uintptr_t content)
{
	return reinterpret_cast<Data*>(content);
}

int main()
{
	Data* data = deserialize(42);
	
	uintptr_t tmp = serialize(data);

	Data* data2 = deserialize(tmp);
	std::cout << data << std::endl;
	std::cout << data2 << std::endl;
	std::cout << tmp << std::endl;
}