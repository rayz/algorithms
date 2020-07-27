

def first_missing_positive(nums):
    i = 0
    n = len(nums)
    while i < len(nums):
        j = nums[i] - 1
        if j < n and j >= 0 and nums[i] != nums[j]:
            nums[i], nums[j] = nums[j], nums[i]
        else:
            i += 1

    print(nums)


    for i in range(n):
        if nums[i] != i+1:
            return i+1

    return n + 1 



def main():
    print(first_missing_positive([-3, 1, 5, 4, 2]))
    print(first_missing_positive([-5,-3,-6,-2, 3]))
    print(first_missing_positive([0, -3,-2,0,1,2,3,4,5]))


main()
