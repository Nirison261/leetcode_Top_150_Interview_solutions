#include <iostream>
#include <vector>

using namespace std;

/* Works but TIME EXCEEDED in the final test | My algorithm XD
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i, j, count;
        for(i = 0; i < nums.size(); i++) {
            for(j = i + 1; j < nums.size(); j++) {
                if(nums[j] == nums[i]) {
                    count++;
                }
                if(count > nums.size() / 2) {
                    return nums[i];
                }
            }
        }

        return -1;
    }
};
*/

/* Sort and choose nums[nums.size() / 2] | Time O(n log n)
// This is faster than O(n) if the size of the array is not large
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
*/

/* Using Hash Map | Time O(N) space O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        n = n/2;
        for(auto x: m){
            if(x.second > n){
                return x.first;
            }
        }
        return 0;
    }
};
*/

/* time O(N) Space O(1) | Moore's Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        
        return candidate;
    }
};
*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        
        return candidate;
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
    vector<int> nums{3, 2, 2, 3, 3, 1, 5, 4, 9, 3, 3, 3, 3, 3};

    displayVector(nums);
    int majority = solution.majorityElement(nums);
    cout << "key = " << majority << endl;
    
    return 0;
}
