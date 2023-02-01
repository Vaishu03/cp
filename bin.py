# def num(n):
#     if n==0:
#         return 0
#     if n==1:
#         return 2
#     if n == 2:
#         return 3
#     return num(n-1)+num(n-2)

# n = int(input())
# print(num(n))

def matchSpecificPattern(words, n, pattern):
    ans = []
    for word in words:
        if len(pattern) == len(word) == 1:
            ans.append(word)
            continue
        if len(word) != len(pattern):
            continue
        charmap = {}
        check = True
        for i in range(len(word)):
            if pattern[i] not in charmap.keys() and word[i] not in charmap.values():
                charmap[pattern[i]] = word[i]
            
            else:
                if pattern[i] not in charmap.keys():
                    check = False
                    break
                if charmap[pattern[i]] != word[i]:
                    check = False
                    break
        if check:
            ans.append(word)
    return ' '.join(ans)
T = int(input())
for i in range(T):
	N = int(input())
	L = input().split()
	P = input()
	print(matchSpecificPattern(L, N, P))
