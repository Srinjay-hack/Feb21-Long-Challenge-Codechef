n=int(input())
arr=[]
arr1=[]
for i in range(1,n+1):
    if(n%i==0):
        arr.append(i)
for j in arr:
    if( (j>=1) and (j<=10)):
        arr1.append(j)
print(max(arr1)) 
