
                                            //Contains Duplicate


// Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

// Example 1:

// Input: nums = [1, 2, 3, 3]

// Output: true

// Example 2:

// Input: nums = [1, 2, 3, 4]

// Output: false



// Brute force-solution: O(n^2)
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

    int n=nums.size();
        
    for(int i=0; i<n-1; i++)
     {
        for (int j=i+1; j<n; j++)
        {
            if(nums[i]==nums[j])
              return true;
        }
     }
     return false;

    }    
};


// solution using the unordered_set, Time complexity: O(n)
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
      unordered_set<int>s;

      for (int num:nums)
        {
           if(s.count(num)==1)
             return true;
           s.insert(num);
        }
         return false;
        }     
};


class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
      

      // sort to make sure that the first and last elements are not same ;
      //ascending order sort so that the numbers are from smaller to greater


        //sorting alone is: O (n logn)  //but binary search alone is O(logn)
        sort(nums.begin(),nums.end()); //intro-sort (insertion sort, heap sort and quick sort)

       int n=nums.size();

       for(int i=0;i<n-1;i++) // O(n)
       {
          if(nums[i]==nums[i+1])
            return true;
        }    
        return false; 
    }
};

//Total time complexity = (O n log n )


//Range of time complexity is:

//O(c)< O(log logn) < O(logn) < O(n^1/2) < O(n) < O(nlogn) < O(n^2) < O(n^3) < O(n^k) < O(2^n) < O(n^n) < O(2^2^n)



// Best solution for this problem is unordered_set;
// Space Complexity
// Brute force                  	O(n²)	               O(1)
// unordered_set	                O(n) average	       O(n)
// Sorting	O(n log n)	          O(1)                 O(log n) 