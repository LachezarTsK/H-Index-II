
using System;

public class Solution
{
    public int HIndex(int[] citations)
    {
        int hIndex = 0;
        int left = 0;
        int right = citations.Length - 1;

        while (left <= right)
        {

            int middle = left + (right - left) / 2;
            if (citations[middle] >= citations.Length - middle)
            {
                right = middle - 1;
                hIndex = citations.Length - middle;
            }
            else
            {
                left = middle + 1;
            }
        }

        return hIndex;
    }
}
