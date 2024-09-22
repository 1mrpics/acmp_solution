N = int(input())
summa = 0

if N > 0:
    for i in range(N+1):
        summa += i
    print(summa)
elif N < 0:
    for i in range(N, 2):
        summa += i
    print(summa)
else:
    print(1)
  
