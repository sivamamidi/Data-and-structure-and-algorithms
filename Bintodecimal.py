
def bintodecimal(n):
    num = n
    dec = 0
    i = 0
    while(num!=0):
        digit = num%10
        dec+= digit+pow(2,i)
        i = i+1
        num = num//10
    return dec 

n = 1010111
print(bintodecimal(n))

# the time complexity of this above code is o(logn)
#space complexity of the above code is o(1)