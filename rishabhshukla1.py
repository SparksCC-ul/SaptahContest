sum=[]
kases = input('no. of cases: ')
for kase in range(int(kases)):
    a,b = input().split()
    s = int(a) + int(b)
    sum.append(s)
for kase in sum:
  print(kase)
