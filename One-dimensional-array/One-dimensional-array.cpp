#include <iostream>
#include<algorithm>
#include<array>

std::array<double, 10> CreateArray()
{
    auto array = std::array<double, 10>{5.4, 3.01, -2.04, 6.1, -1.3, 4.5, 2.5, -2.5, 0.01, 2.09};
    return array;
}
 
std::array<double, 10> OrderValue(std::array<double, 10> array)
{
    std::sort(array.begin(), array.end());

    return array;

}

void outputOrderValue(std::array<double, 10> array)
{
    std::cout << "\nAscendling order of the real numbers: ";

    for (int i = 0; i < 10; ++i)
    {
        std::cout <<" " << array[i];
    }
    std::cout << "\n\n";
}

void CalculateSumNegativeValues(std::array<double, 10> array)
{
    double resultSum = 0;

    for (int i = 0; i < 10; ++i)
    {
        if (array[i] < 0)
        {
            resultSum += array[i];
        }
    }

    std::cout << "\n\nThe sum of the negative numbers in the array: " << resultSum << "\n";
}

void MultiplicationValue(std::array<double, 10> array)
{
    std::cout << "Multiplication of numbers with the condition that there is no smalest and largest value: ";
    std::cout << 
        array[1] * 
        array[2] * array[3] *
        array[4] * array[5] * 
        array[6] * array[7] * 
        array[8] * array[9];

}

int main()
{
    auto array = CreateArray();
    auto ordArr = OrderValue(array);

    CalculateSumNegativeValues(ordArr);
    MultiplicationValue(ordArr);
    outputOrderValue(ordArr);

    system ("pause");

    return 0;
}