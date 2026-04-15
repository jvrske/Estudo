def twister(nums, n):
    if not nums:
        return []

    n = n % len(nums)
    return nums[-n:] + nums[:-n]


if __name__ == "__main__":
    print(twister([1, 2, 3, 4, 5], 2))
    print(twister([1, 2, 3], 3))
    print(twister([1, 2, 3], 5))
    print(twister([1, 2, 3, 4], -1))
    print(twister([], 3))
    print(twister([1], 10))
