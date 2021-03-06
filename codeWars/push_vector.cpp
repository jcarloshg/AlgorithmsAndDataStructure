// vector::push_back
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myvector;
    int myint;

    std::cout << "Please enter some integers (enter 0 to end):\n";

    do
    {
        std::cin >> myint;
        myvector.push_back(myint);
    } while (myint);

    std::cout << "myvector stores " << int(myvector.size()) << " numbers.\n";

    for (int i : myvector)
        std::cout << i << std::endl;

    return 0;
}