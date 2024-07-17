#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
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
    vector<int> nums{0, 0, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5, 5};

    displayVector(nums);
    int k = solution.removeDuplicates(nums);
    displayVector(nums);
    
    return 0;
}