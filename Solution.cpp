
#include <vector>
using namespace std;

class Solution {
    
public:
    int hIndex(const vector<int>& citations) const {
        int hIndex = 0;
        int left = 0;
        int right = citations.size() - 1;

        while (left <= right) {

            int middle = left + (right - left) / 2;
            if (citations[middle] >= citations.size() - middle) {
                right = middle - 1;
                hIndex = citations.size() - middle;
            } else {
                left = middle + 1;
            }
        }

        return hIndex;
    }
};
