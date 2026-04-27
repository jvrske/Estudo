def anagram(s, t):
    if len(s) != len(t):
        return False
    return sorted(s) == sorted(t)


if __name__ == "__main__":
    print(anagram("racecar", "carrace"))
    print(anagram("racecar", "carace"))
    print(anagram("Conversation", "Voices rant on"))
    print(anagram('listen', 'silent'))
    print(anagram('', ''))
