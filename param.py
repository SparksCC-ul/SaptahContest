print("Enter the number of Test Cases")
N=int(input())
result=[]
print("Enter the numbers")
for i in range(0,N):
    x=input()
    y=input()
    print("next\n")
    result.append(int(x)+int(y))
print("result is: ",result)
    
