#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

bool CheckDuplicate(std::vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	if (nums.size() == 2)
	{
		for (int i = 1; i < nums.size();i++)
		{
			if (nums[i - 1] == nums[i])
			{
				return true;
			}
		}
	}
	return false;
}
uint32_t ReverseBits(uint32_t n)
{
	std::vector<int> n_Binary;
	while (n != 0)
	{
		if (n % 2 == 0)
		{
			n_Binary.push_back(0);
		}
		else
		{
			n_Binary.push_back(1);
		}
		n /= 2;
	}
	int ReverseN{};
	for (int i = 0; i < n_Binary.size(); i++)
	{
		if ( n_Binary.pop_back() == 1)
		{
			ReverseN += pow(2, i);
		}
	}
	return ReverseN;
}

int main()
{

}