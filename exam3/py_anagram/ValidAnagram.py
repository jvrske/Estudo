def anagram(s, t):
    new_s = s.replace(' ', '').lower()
    new_t = t.replace(' ', '').lower()
    return sorted(new_s) == sorted(new_t)


if __name__ == "__main__":
    print(anagram("racecar", "carrace"))
    print(anagram("racecar", "carace"))
    print(anagram("Conversation", "Voices rant on"))
