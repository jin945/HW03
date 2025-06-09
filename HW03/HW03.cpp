#include "HW03.h"

int main()
{
    SimpleVector<int> vec(3);

    vec.push_back(30);
    vec.push_back(10);
    vec.push_back(20);
	vec.push_back(40);
    vec.push_back(5);
    vec.push_back(65);
    vec.push_back(7);
    vec.push_back(21);
    vec.push_back(93);
    vec.push_back(16);
    vec.push_back(11);


   
	vec.print();
    vec.sortData();
    vec.print();
    cout << "Current Size : "<< vec.size() << endl;
	cout << "Current Capacity : " << vec.capacity() << endl;
    vec.pop_back();
    vec.pop_back();
    vec.print();
	cout << "Current Size : " << vec.size() << endl;
    cout << "Current Capacity : " << vec.capacity() << endl;
	return 0;
}
