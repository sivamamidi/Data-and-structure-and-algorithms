#decimaltobinary 
def decimaltobinary(n):
    st = ""
    while(n):
        if(n &1):
            st+= '1'
        else:
            st+= '0'
        n = n>>1 
    return st 
def reverse(st):
    return st[::-1]

n = 59
print(reverse(decimaltobinary(n)))

# the time complexity of this above code is o(1)
#space complexity of the above code is o(1)