#include <iostream>
using namespace std;


template <typename T>
class create_array {
private:
	size_t size_of_arr;
	T* our_array;
	T fill;

public:
	create_array(T value_size); //constructor
	~create_array();
	void fill_array();
	
	T* get_arr() {   //the return type of the function is a pointer ( just needed to check array's address for fun)
		return our_array;
	}
};

int main() {
	int size{};

	//EXAMPLE WITH <CHAR>
	cout << "Enter the size of your array: ";
	cin >> size;
	create_array<char> a (size); 
	cout << "Fill your array "<<endl;
	a.fill_array();
	
	cout << "==================================" << endl;

	//EXAMPLE WITH <INT>
	cout << "Enter the size of your array: ";
	cin >> size;
	create_array<int> b(size); 
    cout << "Fill your array " << endl;
	b.fill_array();
	
	return 0;
}

template<typename T>
create_array<T>::create_array(T value_size)
{
	this->size_of_arr = value_size;
	this->our_array = new T[size_of_arr];
	this->fill = 0;
}

template<typename T>
create_array<T>::~create_array()
{
	delete[]our_array;
	our_array = nullptr;
}

template<typename T>
void create_array<T>::fill_array()
{
	for (int i{ 0 }; i < size_of_arr; i++) {
		cin >> fill;
		our_array[i] = fill;
	}
	cout << "Your aray: ";
	for (int i{ 0 }; i < size_of_arr; i++) {
		cout<< our_array[i] <<" ";
	}
	cout << endl;
}





