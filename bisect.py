

def bisect_right(nums, target):
    left = 0
    right = len(nums) - 1
    while left < right:
        mid = left + right >> 1
        if target < nums[mid]:
            right = mid
        else:
            left = mid + 1
    return left

def bisect_left(nums, target):
    left = 0
    right = len(nums) - 1
    while left < right:
        mid = left + right >> 1
        if nums[mid] < target:
            left = mid + 1
        else:
            right = mid
    return left

def main():
    nums = [1,2,3,4,4,4,4,5,6,7]
    print(bisect_right(nums, 4))
    print(bisect_left(nums, 4))
    print(bisect_right(nums, 6))
    print(bisect_left(nums, 6))

main()
