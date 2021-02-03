import time

def speed(nSize):
    start = time.time()

    for i in range(nSize):
        out = i

    stop = time.time()
    
    duration = stop - start
    return duration * 1000
    
def main():

    fp = open("py.csv","w")

    nSample = 500

    for i in range(nSample):
        m = round(speed(1000000),4)
        mstring = str(m) + "\n"
        fp.write(mstring)

    fp.close()


main()



