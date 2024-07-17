#include <iostream>
#include <vector>

using namespace std;

/* My algorithm: 27ms Complexity: O(N) and use memory than using STL (Why ?)
   May be if I implement reverse manually ?

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;

        if(size > 1 && k > 0) {
            int* tmp = new int[k];
            
            for(int i = 0; i < k; i++) {
                tmp[i] = nums[size - k + i];
            }
            for(int i = size - k - 1; i >= 0; i--){
                nums[i + k] = nums[i];
            }
            for(int i = 0; i < k; i++) {
                nums[i] = tmp[i];
            }
        }
    }
};
*/

/* Most used: Using STL: 22ms Complexity: O(N)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
       reverse(nums.begin(),nums.end());
       reverse(nums.begin(),nums.begin()+k);
       reverse(nums.begin()+k,nums.end());
        }  
};
*/

/* Fastest: Using STL and remove runtime overhead 0ms Complexity: O(N)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
      k = k % nums.size();
      reverse(nums.begin() , nums.begin()+nums.size()-k);
      reverse(nums.begin()+(nums.size()-k) , nums.end());
      reverse(nums.begin(), nums.end());
    }
};
*/

void displayVector(vector<int>& nums) {
    cout << "[ ";
    for(auto it = nums.begin(); it < nums.end(); it++) {
        cout << *it << " "; 
    }
    cout << " ]" << endl;
}

int main() {
    Solution solution;
    vector<int> nums{1, 2, 3, 4, 5, 6};

    displayVector(nums);
    solution.rotate(nums, 3);
    displayVector(nums);
    
    return 0;
}
