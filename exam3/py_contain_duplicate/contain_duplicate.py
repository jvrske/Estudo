def hasDuplicate(lis):
    if len(set(lis)) < len(lis):
        return True
    else:
        return False


print(hasDuplicate([1,2,3,3]))
print(hasDuplicate([1,2,3,4]))
print(hasDuplicate([1]))
print(hasDuplicate([]))
print(hasDuplicate([1,1,1,1]))
