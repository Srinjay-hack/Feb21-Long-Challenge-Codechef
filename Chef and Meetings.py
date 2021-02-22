def convert(str1):
    if str1[-2:] == 'AM' and str1[:2] == '12':
        return "00"+ str1[2:-2]
    
    elif str1[-2:] == 'AM':
        return str1[:-2]
    elif str1[-2:] == 'PM' and str1[:2] == '12':
        return str1[:-2]
    else:
        return str(int(str1[:2])+ 12) + str1[2:8]
        


def toMinutes(a1):
    t1=a1[:-3]
    t1+=":00"
    t2=a1[-3:]
    s1=t1+t2
    return a1
    
if __name__== '__main__':
    t=int(input())
    
    while t>0:
        s=input()
        s=toMinutes(s)
        s=convert(s)
        
        
        num=int(s[:2])
        num=num*100+int(s[3:5])
        n=int(input())
        
        ans= ""
        
        for x in range(n):
            s1=input()
            s2=convert(toMinutes(s1[:8]))
            n1=int(s2[:2])
            n1=n1 * 100 +int(s2[3:5])
            
            s3=convert(toMinutes(s1[9:]))
            n2=int(s3[:2])
            n2= n2 * 100 + int(s3[3:5])
            
            if num>=n1 and num<=n2:
                ans+='1'
            else:
                ans+='0'
        print(ans)
        
        t -=1
    
