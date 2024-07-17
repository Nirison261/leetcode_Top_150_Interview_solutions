#include <iostream>
#include <vector>

using namespace std;

/*
In short,
- Skip nums[0] and nums[1] as they are already valable whenever their value
- We have two index i and n.
- Don't increment i if nums[n] == nums[i-2]. i stay here because i point to the element that has
  to be removed
- Replace nums[i] by nums[n] and increment i if nums[n] > nums[i-2] (a element which can replace
  nums[i] have been found)
  nums[n] > nums[i-2]
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int n = 0; n < nums.size(); n++) {
            if (i < 2 || nums[n] > nums[i-2]) {
                nums[i] = nums[n];
                i++;
            }
        }
        return i;
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
    vector<int> nums{0, 0, 0, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5, 5};

    displayVector(nums);
    int k = solution.removeDuplicates(nums);
    displayVector(nums);
    
    return 0;
}