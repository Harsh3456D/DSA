import time

setPass = "373905289"
setPassLen = len(setPass)

PassCombi = 10 ** len(setPass)
print(f"Checking {PassCombi} combinations")

startTime = time.time()
for i in range(PassCombi):
    if len(str(i)) < setPassLen:
        i = str(0)*(setPassLen-len(str(i))) + str(i)
        if int(i) == int(setPass):
            print(f"Pass found -- {i}")
            print(f"It took {time.time()-startTime} sec")
            break
        else:
            i = int(i) + 1
    else:
        if int(i) == int(setPass):
            print(f"Pass found -- {i}")
            print(f"It took {time.time()-startTime} sec")
            break
        else:
            i += 1