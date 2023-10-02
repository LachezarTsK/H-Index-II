
/**
 * @param {number[]} citations
 * @return {number}
 */
var hIndex = function (citations) {
    let hIndex = 0;
    let left = 0;
    let right = citations.length - 1;

    while (left <= right) {

        let middle = left + Math.floor((right - left) / 2);
        if (citations[middle] >= citations.length - middle) {
            right = middle - 1;
            hIndex = citations.length - middle;
        } else {
            left = middle + 1;
        }
    }

    return hIndex;
};
