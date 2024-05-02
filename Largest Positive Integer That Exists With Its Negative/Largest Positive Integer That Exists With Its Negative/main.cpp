//using hash table

#include <iostream>

using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxx=-1;
       map<int ,bool>mp;
       for(int num:nums)
       {
        mp[num]=true;
       }
       for(int num:nums)
       {
        if(mp[-num])
        {
           maxx= max(maxx,num);
        }
       }
   return maxx;
    }
};

//using binary search
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid;
        while (l <= r) {
            mid = (l + r) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return -1;
    }

    int findMaxK(vector<int>& nums) {
        int maxx = -1;
        sort(nums.begin(), nums.end());
        for (int num : nums) {
            if (binarySearch(nums, -num) != -1) {
                maxx = max(maxx, -num);
            }
        }
        return maxx;
    }
};

int main()
{

    return 0;
}
