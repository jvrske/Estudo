def permutation_checker(s, t):
    new_s = sorted(s)
    new_t = sorted(t)

    return new_s == new_t


print(permutation_checker('ldkfjeu', 'ldfjeuk'))
print(permutation_checker('ldkfjeu', 'ldfjeuk '))
print(permutation_checker('abc', 'bca'))
print(permutation_checker('abc', 'abcd'))
print(permutation_checker('', ''))
