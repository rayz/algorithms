
def prefix_sum(nums):
    prefix = [0]
    for n in nums:
        prefix.append(prefix[-1] + n)
    return prefix



def main():
    nums = [1,2,3,4,5]
    print(prefix_sum(nums))


main()
