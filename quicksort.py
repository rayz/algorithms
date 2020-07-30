
def quicksort(nums):
    if not nums:
        return []
    smaller = []
    equal = []
    greater = []
    pivot = nums[-1]
    for n in nums:
        if n < pivot:
            smaller.append(n)
        elif n == pivot:
            equal.append(n)
        elif n > pivot:
            greater.append(n)

    return quicksort(smaller) + equal + quicksort(greater)



def main():
    print(quicksort([1,6,3,9,2,8,4]))


main()
