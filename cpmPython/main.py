#!/home/pinoystat/Documents/python/mymachine/bin/python

#* get execution time 
import time

start_time = time.time()

#*****

import pandas as pd
from pandas_ods_reader import read_ods

#import created scripts:
from task import *

#for ods files:
mydata = read_ods("data.ods", "Sheet1")
#for xlsx files:
#mydata = pd.read_excel(io = "data.xlsx",sheet_name = "Sheet1")

#compute for the Critical Path
mydata = computeCPM(mydata)

printTask(mydata)

#*** execution time
print("Execution time: %s milli-seconds" %((time.time() - start_time)* 1000))
	





			
		


	
	


	

