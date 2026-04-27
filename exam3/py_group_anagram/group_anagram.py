def groupAnagrams(strs):
    stash = {}

    for i in strs:
        key = ''.join(sorted(i))
        if key in stash:
            stash[key].append(i)
        else:
            stash[key] = [i]
    return list(stash.values())


print(groupAnagrams(['act','pots','tops','cat','stop','hat']))
print(groupAnagrams(['x']))
print(groupAnagrams(['']))
