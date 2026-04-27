def cryptic_sorter(t_list):
    def vowels_counter(s):
        counter = 0

        for i in s:
            if i in "aeiou":
                counter += 1
        return counter

    final_list = sorted(t_list, key=lambda s: (len(s), s.lower(), s.isupper(), vowels_counter(s)))
    return final_list


print(cryptic_sorter([""]))
words = ["bat", "cat", "ant"]
print(cryptic_sorter(words))
# ["sky", "rhythm", "test", "Apple", "aeiou"]
print(cryptic_sorter(["BBB", "bbb", "ccc", "CCC"]))
print(cryptic_sorter(['apple', 'bat', 'car', 'ae', 'b']))
print(cryptic_sorter(['dog', 'cat', 'hi', 'a']))
print(cryptic_sorter(['bat', 'cat', 'ant']))
print(cryptic_sorter([]))
