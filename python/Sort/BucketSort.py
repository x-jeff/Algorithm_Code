def bucket_sort_simplify(arr, max_num):
    buf = {i: [] for i in range(int(max_num) + 1)}
    arr_len = len(arr)
    for i in range(arr_len):
        num = arr[i]
        buf[int(num)].append(num)
    arr = []
    for i in range(len(buf)):
        if buf[i]:
            arr.extend(sorted(buf[i]))
    return arr


if __name__ == "__main__":
    lis = [18, 11, 28, 45, 23, 50]
    print(bucket_sort_simplify(lis, max(lis)))
