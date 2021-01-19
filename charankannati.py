from matplotlib import pyplot as plt
#Data
Ages_x = [25,26,27,28,29,30,31,32,33,34,35]
dev_y = [38496, 42000, 46752, 49320, 53200,56000,62315, 64928, 67317, 68748, 73752]
py_dev_y = [45372, 48876, 53850, 57287, 63016,65998, 70003, 70000, 71496, 75370, 83640]
js_dev_y = [37810, 43515, 46823, 49293, 53437, 56373, 62375, 66674, 68745, 68746, 74583]
#Data
#Plotting
plt.plot(Ages_x, dev_y,'k--',label = 'All Developers')#Self Documenting
plt.plot(Ages_x, py_dev_y,'b',label='Only Python Developers')
plt.plot(Ages_x, js_dev_y,'bs',label= 'Only Javascript Developers')
#Plotting
#labels and Legends
plt.xlabel('Ages')
plt.ylabel("Median_Salary(USD)")
plt.title("Median Salary(USD) by age")
plt.legend()
#laels and Legends

plt.show()
