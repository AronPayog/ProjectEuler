#include <iostream>

int main()
{
    int F = 0;
    int P = 1;
    int A = 0;
    int sumofeven = 0;
    int Limiter;
    std::cout << "Limit: ", std::cin >> Limiter;
    for(int i = 0; i < 100000; i++)
    {
        if(A > Limiter){
            std::cout << "\nLoop: " << i << std::endl;
            break;
        }
        
        std::cout << A << ", ";
        A = F + P;
        F = P;
        P = A;
        
        if(A % 2 == 0){
            sumofeven += A;
        }
        
    }
    
    std::cout << "Last Value: " << A << std::endl;
    std::cout << "Sum of Even: " << sumofeven << std::endl;
    std::cout << "The Limit Of Loop is 10,000" << std::endl;
    return 0;
}