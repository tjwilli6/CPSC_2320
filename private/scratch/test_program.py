#! /usr/bin/env python3

import subprocess as sub
import sys
import random
import time

executable = "./montyhall"
N = 1000
if len(sys.argv) > 1:
    N = int(sys.argv[-1])

p = sub.Popen(
    [executable],
    stdin=sub.PIPE,
    stdout=sys.stdout,
    universal_newlines=True
)

for i in range(N):
    choosedoor = random.randint(1,3)
    print("{}\n".format(choosedoor),file=p.stdin,flush=True)
    switch = random.randint(0,1)
    #inp = "0\n"
    inp = "1\n"
    if switch:
        inp = "2\n"
        #inp = "1\n"
    print(inp,file=p.stdin,flush=True)
    #input()
    if i < N-1:
        print("1\n",file=p.stdin,flush=True)
    else:
        print("0\n",file=p.stdin,flush=True)
