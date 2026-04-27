def mergeList(list1, list2):
    list3 = []

    if list1 is None:
        return sorted(list2)
    if list2 is None:
        return sorted(list1)

    for i in list1:
        list3.append(i)

    for i in list2:
        list3.append(i)
    return sorted(list3)


if __name__ == "__main__":
    print(mergeList([1, 3, 5, -1], [0, 8, 2, 1]))
    print(mergeList([99, -22, 10, 9], []))
    print(mergeList(None, [5, 3, 1]))
    print(mergeList([], []))
    print(mergeList([1, 1, 1], [1, 1]))
