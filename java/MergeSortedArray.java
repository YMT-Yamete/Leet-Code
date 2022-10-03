class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int totalElements = m + n;
        int j = 0;
        for (int i = m; i < totalElements; i++) {
            nums1[i] = nums2[j];
            j++;
        }
        selectionSort(nums1);
    }
     public void selectionSort(int[] arr){  
        for (int i = 0; i < arr.length - 1; i++)  
        {  
            int index = i;  
            for (int j = i + 1; j < arr.length; j++){  
                if (arr[j] < arr[index]){  
                    index = j;
                }  
            }  
            int smallerNumber = arr[index];   
            arr[index] = arr[i];  
            arr[i] = smallerNumber;  
        }  
     }
}