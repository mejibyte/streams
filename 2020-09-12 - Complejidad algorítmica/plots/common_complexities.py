import matplotlib.pyplot as plt
import numpy as np


x = np.linspace(1, 1000, 1000)
fig, ax = plt.subplots(figsize=(20, 10))

# ax.plot(x, np.log2(x), label='log(n) - Logarithmic', marker='o')
# ax.plot(x, np.sqrt(x), label='sqrt(n)')  # ... and some more.
# ax.plot(x, x, label='O(n) - Linear')
# ax.plot(x, 2*x, label='O(n) - Linear')
# ax.plot(x, 4*x + 3, label='O(n) - Linear')
# ax.plot(x, 5*x + 7, label='O(n) - Linear')

# ax.plot(x, x*np.log2(x), label='O(n log n)')
ax.plot(x, x**2, label='O(n^2) - Quadratic', marker='d')
ax.plot(x, 2*x**2, label='O(n^2) - Quadratic', marker='d')
ax.plot(x, 3*x**2 + x, label='O(n^2) - Quadratic', marker='d')
ax.plot(x, 3*x**2 + 2*x + 7, label='O(n^2) - Quadratic', marker='d')

ax.plot(x, x**3, label='O(n^3) - Cubic')
ax.plot(x, x**3 - 2*x**2, label='O(n^3) - Cubic')

ax.set_xlim(0, 1000)
start, end = ax.get_xlim()
ax.xaxis.set_ticks(np.arange(start, end, 5))
ax.set_xlabel('Input size')
ax.set_ylabel('Time')

ax.set_ylim(0, 20)
ax.set_title("Comparison")
ax.legend()  # Add a legend.

fig.tight_layout()
plt.show()