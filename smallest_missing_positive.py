

def first_missing_positive(nums):
    i = 0
    n = len(nums)
    while i < len(nums):
        j = nums[i] - 1
        if j <= n and j >= 0 and nums[i] != nums[j]:
            nums[i], nums[j] = nums[j], nums[i]
        else:
            i += 1


    print(nums)


