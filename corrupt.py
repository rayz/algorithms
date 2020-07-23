


def find_corrupt(nums):
    i = 0
    n = len(nums)
    while i < n:
        j = nums[i] - 1
        if j <= n and nums[i] != nums[j]:
            nums[i], nums[j] = nums[j], nums[i]
        else:
            i += 1

    print(nums)





