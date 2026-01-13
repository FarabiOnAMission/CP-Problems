class Solution {
public:

bool increasingTriplet(vector<int> &nums)
{

  if(nums.size()<3)
    return false;

  int n=nums.size();

  vector<int>minleft(n);
  vector<int>maxright(n);

  minleft[0]=nums[0];

  for(int i=1;i<n;i++)
  {
      minleft[i]=min(minleft[i-1],nums[i]);
  }
  maxright[n-1]=nums[n-1];

  for(int i=1;i<n;i++)
  {
      minleft[i]=min(minleft[i-1],nums[i]);
  }

  for(int i=n-2;i>=0;i--)
  {
      maxright[i]=max(maxright[i+1],nums[i]);
  }

  for(int i=1;i<n-1;i++)
  {
      if(nums[i]>minleft[i] && nums[i]<maxright[i])
        return true;
  }

  return false;

}
};
