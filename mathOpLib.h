



#pragma once
#include<iostream>
#include<cmath>
using namespace std;
namespace mathOpLib{
	
	enum enOddOrEven { Odd = 1, Even = 2 };
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

struct strNumbers
{
	int num1, num2, num3;
};

	
	int SumOf3Numbers(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;  // Compute and return the sum.
}



float CalculateAverage(strNumbers Numbers){

	return (float) (SumOf3Numbers(Numbers.num1, Numbers.num2, Numbers.num3)/3);

}

int MaxOf2Numbers(int Num1, int Num2)
{
    // Compare the two numbers and return the greater one.
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

float CalculateRectangleArea(float A, float B)
{
    return A * B;  // Compute and return the rectangle's area.
}

float RectangleAreaBySideAndDiagonal(float A, float D)
{
    // Calculate the area using the formula: Area = A * sqrt(D² - A²)
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));

    return Area;  // Return the computed area.
}

float TriangleArea(float A, float H)
{
    // Calculate the area using the formula: Area = (1/2) * Base * Height.
    float Area = (A / 2) * H;

    return Area;  // Return the computed area.
}

float CircleArea(float R)
{
    const float PI = 3.141592653589793238;  // Define the mathematical constant PI.

    // Compute the area using the formula: Area = π * R².
    float Area = pow(R, 2) * PI;

    return Area;  // Return the computed area.
}

float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238;  // Define the mathematical constant PI.

    // Compute the area using the formula: Area = (π * D²) / 4.
    float Area = (pow(D, 2) * PI) / 4;

    return Area;  // Return the computed area.
}

float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.141592653589793238;  // Define the mathematical constant PI.

    // Compute the area using the formula: Area = (π * A²) / 4.
    float Area = (PI * pow(A, 2)) / 4;

    return Area;  // Return the computed area.
}

	float CircleAreaByCircumference(float L)
{
    const float PI = 3.141592653589793238;  // Define the mathematical constant PI.

    // Compute the area using the formula: Area = (L²) / (4π).
    float Area = pow(L, 2) / (4 * PI);

    return Area;  // Return the computed area.
}

float CircleAreaByITriangle(float A, float B)
{
    const float PI = 3.141592653589793238;  // Define the mathematical constant PI.

    // Compute the area using the given formula:
    // Area = π * (B² / 4) * ((2A - B) / (2A + B))
    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

    return Area;  // Return the computed area.
}

float CircleAreaByATriangle(float A, float B, float C)
{
    const float PI = 3.141592653589793238;  // Define the mathematical constant PI.
    
    // Compute the semi-perimeter of the triangle using P = (A + B + C) / 2.
    float P = (A + B + C) / 2;

    // Compute the radius (T) of the inscribed circle using:
    // T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)))
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    // Compute the area of the inscribed circle: Area = π * T².
    float Area = PI * pow(T, 2);

    return Area;  // Return the computed area.
}

enOddOrEven CheckOddOrEven(int Number)
{
    // If the number is not divisible by 2, return Odd; otherwise, return Even.
    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int Factorial(int N)
{
    int F = 1;  // Initialize the factorial result to 1.

    // Use a for loop to multiply the numbers from N down to 1.
    for (int Counter = N; Counter >= 1; Counter--)
    {
        F = F * Counter;  // Multiply the current value of F by Counter.
    }

    return F;  // Return the computed factorial value.
}

int PowerOfNamber(int Number, int Power)
{
    // Any number raised to the power of 0 is always 1.
    if (Power == 0)
    {
        return 1;
    }

    int Result= 1;  // Initialize the result.

    // Use a for loop to multiply the base number 'M' times.
    for (int c = 1; c <= Power; c++)
    {
       Result = Result* Number;  // Multiply the current value of P by Number.
    }

    return Result;  // Return the computed power.
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;  // Perform addition.
    case enOperationType::Subtract:
        return Number1 - Number2;  // Perform subtraction.
    case enOperationType::Multiply:
        return Number1 * Number2;  // Perform multiplication.
    case enOperationType::Divide:
        return Number1 / Number2;  // Perform division.
    default:
        return Number1 + Number2;  // Default case (fallback to addition).
    }
}

enPrimNotPrime CheckPrime(int Number)
{
    // A prime number must be greater than 1.
    if (Number < 2)
        return enPrimNotPrime::NotPrime;

    // Find the middle point to reduce iterations.
    int M = round(Number / 2);

    // Loop from 2 to M to check for factors.
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)  // If Number is divisible, it's not prime.
            return enPrimNotPrime::NotPrime;
    }

    return enPrimNotPrime::Prime;  // If no factors are found, it's prime.
}

	
} 