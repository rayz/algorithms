

def bisect_right(nums, target):
    left = 0
    right = len(nums) - 1
    while left < right:
        mid = left + right >> 1
        if nums[mid] > target:
            right = mid - 1
        else:
            left = mid
    return left



def main():
    nums = [1,2,3,4,4,4,4,5,6,7]
    print(bisect_right(nums, 4))

main()
