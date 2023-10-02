
public class Solution {

    public int hIndex(int[] citations) {

        int hIndex = 0;
        int left = 0;
        int right = citations.length - 1;

        while (left <= right) {

            int middle = left + (right - left) / 2;
            if (citations[middle] >= citations.length - middle) {
                right = middle - 1;
                hIndex = citations.length - middle;
            } else {
                left = middle + 1;
            }
        }

        return hIndex;
    }
}
