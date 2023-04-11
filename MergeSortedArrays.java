import java.io;
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        for(int i=m-1;i<m+n;i++){
            nums1[i]=nums2[i-m+1];
        }
        Arrays.sort(nums1);
    }
}

public class MergeSortedArray {
    public static void main(String[] args) throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        int m = Integer.parseInt(br.readLine());
        int n = Integer.parseInt(br.readLine());
        int arr1[]= new int[m+n];
        int arr2[]= new int[n];
        System.out.println("enter");
        for(int i=0; i<m+n; i++){
            if(i<m)
                arr1[i]=Integer.parseInt(br.readLine());
            else
                arr1[i]=0;
        }
        for(int i=0; i<n; i++){
            arr2[i]=Integer.parseInt(br.readLine());  
        }
        Solution s= new Solution();
        s.merge(arr1, m, arr2, n);
        for(int j=0; j<m+n; j++){
            System.out.println(arr1[j]);}
}
}