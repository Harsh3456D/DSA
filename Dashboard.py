import numpy as np
import matplotlib.pyplot as plt

fig = plt.figure(figsize=(16, 10))
fig.suptitle('Stack Time complexity Dashboard', fontsize=20, fontweight='bold')

parameterAxis = np.array([1,2,3,4,5,6,7,8,9])
pyAxis = np.array([0.00010,0.00030,0.00057,0.0030,0.028,0.27,3.14,32.34,304.3])
jsAxis = np.array([0.000013,0.000048,0.000063,0.00037,0.0056,0.022,0.16,1.54,15.7])
cppAxis = np.array([0.0000057,0.000013,0.000031,0.00023,0.0042,0.025,0.27,2.8,29.1])

plt.subplot (1,3,1)
plt.plot(parameterAxis,pyAxis)
plt.subplot (1,3,2)
plt.plot(parameterAxis,jsAxis)
plt.subplot (1,3,3)
plt.plot(parameterAxis,cppAxis)

plt.show()