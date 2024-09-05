#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

vector<int> maxRevenue(vector<vector<int>> salesRecord){
std::vector<int> maxRevenuePerDay;

    for (const auto& day : salesRecord) {
        int maxRevenue = *std::max_element(day.begin(), day.end());
        maxRevenuePerDay.push_back(maxRevenue);
    }

    for (int i = 0; i < maxRevenuePerDay.size(); i++) {
        std::cout << maxRevenuePerDay[i];
        if (i != maxRevenuePerDay.size() - 1) {
            std::cout << " ";  // Print space between numbers
        }
    }
}
int main() {
    int days, products;

    std::cin >> days;

    std::cin >> products;

    std::vector<std::vector<int>> salesRecord(days, std::vector<int>(products));

    for (int i = 0; i < days; ++i) {
        for (int j = 0; j < products; ++j) {
            std::cin >> salesRecord[i][j];
        }
    }


    return 0;
}