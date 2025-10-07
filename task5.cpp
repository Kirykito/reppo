#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

int sumOfDigits(int num) {
    return (num / 100) + ((num / 10) % 10) + (num % 10);
}

int main() {
    std::vector<int> luckyTickets;
    
    std::cout << "Finding Lucky Tickets..." << std::endl;
    
    int sumCount[28] = {0};
    
    for (int i = 0; i <= 999; i++) {
        int sum = sumOfDigits(i);
        sumCount[sum]++;
    }
    
    long long totalLucky = 0;
    for (int i = 0; i < 28; i++) {
        totalLucky += (long long)sumCount[i] * sumCount[i];
    }
    
    std::cout << "\n===STATISTIC===" << std::endl;
    std::cout << "Total number of lucky tickets:" << totalLucky << std::endl;
    std::cout << "\nDistribution by amounts:" << std::endl;
    for (int i = 0; i < 28; i++) {
        if (sumCount[i] > 0) {
            std::cout << "Summ " << i << ": " << sumCount[i] << " combinations" << std::endl;
        }
    }
    
    return 0;
}
