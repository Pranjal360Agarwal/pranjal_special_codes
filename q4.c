#geeksforgeeks


#missing number in the array

class Solution 
{
    int i,sum=0;
    int MissingNumber(int array[], int n) 
    {
        int total = n * (n + 1) / 2;
        for(i=0;i<n-1;i++)
        {
            sum = sum+array[i];
        }

        return total - sum;
    }
}