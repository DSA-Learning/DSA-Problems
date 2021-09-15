// Time Complexity - O ( N*logN)
// Space Complexity - O(1)

class Solution {
public:
    
    void merge(long long arr1[], long long arr2[], int n, int m)
    {
        
        int i = n - 1;
        int j = 0;

        while (i >= 0 and j < m) {

            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);

            i--;
            j++;
        }

        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
};
