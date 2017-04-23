#include<iostream>


int main()
{
	int updates = 6;
	int * p_updates;
      
	p_updates = &updates;//assign address of int to pointer

	//express values two ways
	std::cout << "Values: updates = " << updates;
	std::cout << ", *p = " << *p_updates << std::endl;

	//express address two ways
	std::cout << "Addresses: &updates = " << &updates;
	std::cout << ", p_updates = " << p_updates << std::endl;

	//use pointer to change value
	*p_updates = *p_updates + 1;
	std::cout << "Now updates = " << updates << std::endl;


	return 0;
	

}