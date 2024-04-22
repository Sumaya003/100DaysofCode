class Solution {
public:
    void heapifyMax(vector<int>& nums, int n, int i) {
        int largest = i;
        int left = (2 * i) + 1, right = (2 * i) + 2;
        if (left < n && nums[left] > nums[largest])
            largest = left;
        if (right < n && nums[right] > nums[largest])
            largest = right;
        if (largest != i) {
            swap(nums[largest], nums[i]);
            heapifyMax(nums, n, largest);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = n / 2 - 1; i >= 0; i--)
            heapifyMax(nums, n, i);
        for (int i = n - 1; i >= 0; i--) {
            swap(nums[0], nums[i]);
            heapifyMax(nums, i, 0);
        }
        return nums;
    }
};
