
def prefix_sum(nums):
    prefix = [0]
    for n in nums:
        prefix.append(prefix[-1] + n)
    return prefix

def suffix_sum(nums):
    n = len(nums)
    suffix = [0] * (n+1) 
    for i in range(n-1, -1, -1):
        suffix[i] = suffix[i+1] + nums[i]
    return suffix

def main():
    nums = [1,2,3,4,5]
    print(prefix_sum(nums))
    print(suffix_sum(nums))


main()
