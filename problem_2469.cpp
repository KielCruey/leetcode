#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<double> convertTemperature(double celsius) {
        std::vector<double> results;
        
        results.push_back(roundToPlace(celsius + 273.15, 4)); // kelvin
        results.push_back(roundToPlace(celsius * 1.8 + 32.0, 4)); // fahrenheit

        return results;
    }

    double roundToPlace(double number, int place) {
        double decimalPower = pow(10, place);
        return round(number * decimalPower) / decimalPower;
    }
};

int main() {
    Solution s;

    // test 1
    //double celsius = 36.50; // answer [309.65000,97.70000];

    // test 2
    double celsius = 122.11; // answer [395.26000,251.79800];

    std::vector<double> results = s.convertTemperature(celsius);
    std::cout << "results Kelvin: " << results[0] << std::endl;
    std::cout << "results Fahrenheit: " << results[1] << std::endl;

    return 0;
}