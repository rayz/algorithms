import random 

def partition(left, right, idx, arr):
    el = arr[idx]
    arr[idx], arr[right] = arr[right], arr[idx] 

    pivot_index = left 
    for i in range(left, right):
        if arr[i] <  el:
            arr[pivot_index], arr[i] = arr[i], arr[pivot_index]
            pivot_index += 1

    arr[pivot_index], arr[right] = arr[right], arr[pivot_index] 
    return pivot_index


def kth_smallest(arr, k):
    if k < 0 or k > len(arr) - 1:
        return print("Invalid K") 

    left = 0
    right = len(arr) - 1
    return _kth_smallest(left, right, arr, k)



def _kth_smallest(left, right, arr, k):
    if left == right:
        return arr[left]

    rand_index = random.randint(left, right)
    pivot_index = partition(left, right, rand_index, arr)
    if pivot_index == k:
        return arr[pivot_index]
    elif pivot_index > k:
        return _kth_smallest(left, pivot_index-1, arr, k)
    else:
        return _kth_smallest(pivot_index+1, right, arr, k)



def main():
    arr = [1,2,3,4,5,6,7,8,9]
    random.shuffle(arr)
    for i in range(0, len(arr)):
        print("{}th smallest is: {}".format(i, kth_smallest(arr, i)))

main()
