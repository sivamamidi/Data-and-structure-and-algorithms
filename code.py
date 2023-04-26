# e#code
# even or odd digit sum 
def getSum(n): 
    sumodd = 0
    sumeven = 0
    num = str(n)
    for i in range(len(num)):
        if(i%2==0):
            sumeven+= int(num[i])
        else:
            sumodd+= int(num[i])
    print("Sum odd = ", sumodd)
    print("Sum even = ", sumeven)
if __name__ == "__main__":
    n = 457892
    getSum(n)
print("GfG")