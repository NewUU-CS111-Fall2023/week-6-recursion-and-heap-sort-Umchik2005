/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"

int main() {
    std::cout << "Task 1" << std::endl;
    int a, b;

    std::cin >> a;
    std::cin >> b;

    if (a < b) {
        ascendingOrder(a, b);
    } else {
        descendingOrder(a, b);
    }
    std::cout << std::endl;
    std::cout << "/////////////////////////////////////" << std::endl;
    
    std::cout << "Task 2" << std::endl;
    
    int n2;
    std::cin >> n2;
    bool isPowerOfTwo = secondTask(n2);
    if(isPowerOfTwo){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;
    std::cout << "/////////////////////////////////////" << std::endl;
    
    std::cout << "Task 3" << std::endl;
    
    std::cout << "Task 4" << std::endl;
    
    std::cout << "Task 5" << std::endl;
    
    return 0;
}
