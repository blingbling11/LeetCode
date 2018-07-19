
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0)
			return nums.size(); //有一组测试数据是空的nums
		int j = 1;
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] != nums[j - 1])
			{
				nums[j] = nums[i];
				j++;
			}
		}
		nums.erase(nums.begin() + j, nums.end());//删除后面区间从j到最后的数
		return nums.size();
	}
};
