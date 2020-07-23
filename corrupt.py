
def find_corrupt(nums):
    i = 0
    n = len(nums)

    while i < n:
        j = nums[i] - 1
        if j <= n and nums[i] != nums[j]:
            nums[i], nums[j] = nums[j], nums[i]
        else:
            i += 1

    for i in range(n):
        if nums[i] != i + 1:
            return [nums[i], i+1]

    return []






def main():
    print(find_corrupt([3, 1, 2, 5, 2]))
    print(find_corrupt([3, 1, 2, 3, 6, 4]))

main()
