// ex3 : Calculator w exepttion
#include "Calculator.h"

int main()
{
	Calculator calculator;
	calculator.run2();

	return EXIT_SUCCESS;
}


//#include <initializer_list>
//#include <iostream>
//

//static int c = 0;
//template<typename... ArgTypes>
//void print(std::string t1, ArgTypes... args) {}
//
//template<typename T, typename... ArgTypes>
//void print(std::string t1, T t, ArgTypes... args)
//{
//	std::cout << t <<" ";
//	c++;
//	print(t1, args...);
//}
//template<> void print(std::string t1) { std::cout << "c=" << c; } // end recursion
//
//int main()
//{
//
//
//	print(std::string("hello"), 1, 2, 3/*, "hello", 'a'*/);
//	return 0;
//}