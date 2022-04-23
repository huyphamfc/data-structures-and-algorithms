/**
 * Purpose: QuickSort algorithm
 * Author: huyphamfc
 * Create on Apr 23, 2022
 */

let array = [4, 1, 0, 3, 2];

const quicksort = function (array, left, right) {
    let i = left;
    let j = right;
    const center = array[Math.trunc((left + right) / 2)];
    do {
        while (array[i] < center) {
            i++;
        }
        while (array[j] > center) {
            j--;
        }
        if (i <= j) {
            let temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    } while (i < j);
    if (left < j) {
        quicksort(array, left, j);
    }
    if (right > i) {
        quicksort(array, i, right);
    }
}

quicksort(array, 0, array.length - 1);
console.log(array);