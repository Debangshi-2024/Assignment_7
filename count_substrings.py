def count_substrings(s, k):
    def helper(start, unique, freq):
        if start == len(s):
            return 0
        count = 0
        for end in range(start, len(s)):
            ch = s[end]
            if freq.get(ch, 0) == 0:
                unique += 1
            freq[ch] = freq.get(ch, 0) + 1
            if unique == k:
                count += 1
            elif unique > k:
                break
        return count + helper(start + 1, 0, {})

    return helper(0, 0, {})

s = input("Enter string: ")
k = int(input("Enter k: "))
print(count_substrings(s, k))
