import sys
import os
import matplotlib.pyplot as plt
import numpy as np
import math
import time

sys.path.append(os.path.abspath('../0xf2 - Partir un arreglo en 2'))
import quadratic
import linear


def main():
  max_n = 10000
  data_points = 100

  data_quadratic = [[], []]
  data_linear = [[], []]
  for n in range(2, max_n, math.floor((max_n - 2) / data_points)):
    input_array = [0] * (n - 2) + [1, -1]

    start = time.time()
    quadratic.solve(input_array)
    end = time.time()
    elapsed = end - start
    print("Quadratic time for n = {}: {}".format(n, elapsed))
    data_quadratic[0].append(n)
    data_quadratic[1].append(elapsed)

    start = time.time()
    linear.solve(input_array)
    end = time.time()
    elapsed = end - start
    print("Linear time for n = {}: {}".format(n, elapsed))
    data_linear[0].append(n)
    data_linear[1].append(elapsed)


  fig, ax = plt.subplots(figsize=(20, 10))
  ax.plot(data_quadratic[0], data_quadratic[1], label='O(n^2) - Quadratic', marker='.')
  ax.plot(data_linear[0], data_linear[1], label='O(n) - Linear', marker='.')

  # ax.set_xlim(0, 100)
  # start, end = ax.get_xlim()
  # ax.xaxis.set_ticks(np.arange(start, end, 5))

  ax.set_xlabel('Input size')
  ax.set_ylabel('Time')

  #ax.set_ylim(0, 200)
  ax.set_title("Comparison")
  ax.legend()  # Add a legend.

  fig.tight_layout()
  plt.show()

if __name__ == "__main__":
  main()