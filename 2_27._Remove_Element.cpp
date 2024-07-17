#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
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
    vector<int> nums{3, 2, 2, 3};

    displayVector(nums);
    cout << endl;

    int k = solution.removeElement(nums, 3);
    cout << "k=" << k << endl;
    displayVector(nums);
    
    return 0;
}