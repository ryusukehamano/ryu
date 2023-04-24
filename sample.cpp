#include <iostream>

int sum(int, int);

int main()
{
<<<<<<< HEAD
    std::cout << "This is master" << std::endl;
=======
    std::cout << "Git Training" << std::endl;
>>>>>>> new_branch
    int a = 5;
    int b = 3;
    std::cout << sum(a, b) << std::endl;
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}