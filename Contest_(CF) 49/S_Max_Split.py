s = input()

left = 0
right = 0
st = []
ans = []

for i in s:
    st.append(i)
    if i == "L":
        left += 1
    else:
        right += 1

    if (left == right):
        ans.append("".join(st))
        st = []
        left = 0
        right = 0


print (len(ans))
for string_s in ans:
    print(string_s)