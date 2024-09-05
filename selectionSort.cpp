#include<bits/stdc++.h>
using namespace std; // for max_element function

// Function to find the maximum revenue for each day
vector<int> maxRevenue(std::vector<std::vector<int>> salesRecord) {
    std::vector<int> answer;

    for (const auto& day : salesRecord) {
        int maxRevenue = *std::max_element(day.begin(), day.end());
        answer.push_back(maxRevenue);
    }

    return answer;
}

int main() {
    int days, products;

    std::cin >> days;

    // std::cout << "Enter the number of products: ";
    std::cin >> products;

    // Initialize a 2D vector to store the sales records
    std::vector<std::vector<int>> salesRecord(days, std::vector<int>(products));

    // Taking input for sales revenue for each product on each day
    for (int i = 0; i < days; ++i) {
        for (int j = 0; j < products; ++j) {
            std::cin >> salesRecord[i][j];
        }
    }

    // Call the maxRevenue function to get the maximum revenue per day
    std::vector<int> result = maxRevenue(salesRecord);

    // Print the maximum revenue for each day
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << " ";  // Print space between numbers
        }
    }
    std::cout << std::endl;  // End the output with a newline

    return 0;
}