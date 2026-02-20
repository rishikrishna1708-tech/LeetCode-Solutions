/*
Problem: 2600. K Items With the Maximum Sum

Approach:
Pick +1 items first, then 0 items, and finally -1 items if needed
to maximize total sum.

Time Complexity: O(1)
Space Complexity: O(1)

Language: C
*/
int kItemsWithMaximumSum(int a,int b,int c,int k)
{
	int sum=0;
	if(a>=k) {
			return k;
		}
		
			sum=sum+a;
			k=k-a;
		if(b>=k)
        {
            return sum;
        }
			k=k-b;;
			sum=sum-k;
				
	return sum;

}
