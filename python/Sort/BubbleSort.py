def bubbleSort(arr):
    for i in range(1, len(arr)):
        for j in range(0, len(arr)-i):
            if arr[j] > arr[j+1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr


if __name__ == '__main__':
    testlist = [17, 23, 20, 14, 12, 25, 1, 20, 81, 14, 11, 12]
    print(bubbleSort(testlist))