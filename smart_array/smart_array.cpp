#include <iostream>

class  smart_array
{
public:	
	int* array;
	int index=0;
	int size;
	smart_array(int size) {
		this->size = size;
		array = new int[size];
	}
	void add_element(int number) {
		array[index] = number;	
		index++;
	}
	int get_element(int index) {return array[index];}
	~smart_array() { delete[] array; }
};

int main() {
	
	try {
		smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);		
		std::cout << arr.get_element(1) << std::endl;
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}	
}

