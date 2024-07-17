#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int max_profit = 0;
        for(int i=1; i<prices.size(); i++) {
            if(prices[i] < buy) {
                buy = prices[i];
            }
            /*else if (max_profit < prices[i] - buy) {
                max_profit = prices[i] - buy;
            }*/
            // This is faster
            max_profit = max(prices[i] - buy, max_profit);
        }
        return max_profit;
    }
};

void displayVector(vector<int>& nums) {
    cout << "[ ";
    for(auto it = nums.begin(); it < nums.end(); it++) {
        cout << *it << " "; 
    }
    cout << " ]" << endl;
}

int main() {
    Solution solution;
    
    return 0;
}
