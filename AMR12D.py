def fun(s,s2):
    for i in range(len(s)):
        for j in range(i+1,len(s)+1):
            if not s[i:j] in s2:
                return "NO"
    return "YES"

def main():
    t = int(raw_input())
    for i in range(t):
        s = raw_input()
        if( s==''):
            s = raw_input()
        s2 = s[::-1]
        print fun(s,s2)

main()

