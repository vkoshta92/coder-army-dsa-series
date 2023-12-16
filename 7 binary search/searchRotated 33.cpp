// search in rotated array
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1, mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            // i find my element of left side sorted or
            if (nums[mid] == target)
            {
                return mid;
            }
            // left side sorted h
            else if (nums[mid] >= nums[0])
            {
                if (nums[start] <= target && nums[mid] > target)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
                // right sorted hai left nhi h ab
            }
            else
            {
                if (nums[mid] < target && nums[end] >= target)
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};