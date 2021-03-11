import os
import subprocess

# Getting the current work directory (cwd)
thisdir = os.getcwd()

# in future the unit test will output to unitest.log file
#log=open("unittest.log","wr")
# r=root, d=directories , f = files
for r, d, f in os.walk(thisdir):
    for file in f:
        if file.endswith(("_", "unittest")):
            print("\n------------------ " + file + " ------------------\n")
            print(os.path.join(r, file))
            subprocess.call(os.path.join(r, file))#, stdout=log)