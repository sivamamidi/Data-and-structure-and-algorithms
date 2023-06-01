#decimaltobinary 
def decimaltobinary(n):
    i = 0
    binary = [0]*n 
    while(n!=0):
        binary[i] = n%2
        i = i+1 
        n = n//2
    for j in range(i-1,-1,-1):
        print(binary[j])
n = 17
print(decimaltobinary(n))
# the time complexity of this above code is o(logn)
#space complexity of the above code is o(1)