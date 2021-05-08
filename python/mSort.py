# -*- coding: utf-8 -*-
import numpy as np
import random

def quick_sort(nums):
    n = len(nums)

    def quick(left, right):
        if left >= right:
            return nums
        pivot = left
        i = left
        j = right
        while i < j:
            while i < j and nums[j] > nums[pivot]:
                j -= 1
            while i < j and nums[i] <= nums[pivot]:
                i += 1
            nums[i], nums[j] = nums[j], nums[i]
        nums[pivot], nums[j] = nums[j], nums[pivot]
        quick(left, j - 1)
        quick(j + 1, right)
        return nums

    return quick(0, n - 1)

def selection_sort(nums):
    n = len(nums)
    for i in range(n):
        for j in range(i, n):
            if nums[i] > nums[j]:
                nums[i], nums[j] = nums[j], nums[i]
    return nums

def selectionSort(nums):
    for i in range(len(nums) - 1):  # 遍历 len(nums)-1 次
        minIndex = i
        for j in range(i + 1, len(nums)):
            if nums[j] < nums[minIndex]:  # 更新最小值索引
                minIndex = j  
        nums[i], nums[minIndex] = nums[minIndex], nums[i] # 把最小数交换到前面
    return nums

def insertion_sort(nums):
    n = len(nums)
    for i in range(1, n):
        while i > 0 and nums[i - 1] > nums[i]:
            nums[i - 1], nums[i] = nums[i], nums[i - 1]
            i -= 1
    return nums

if __name__ == "__main__":
    # execute only if run as a script
    arr = np.array([1, 4, 3, 8, 5])
    random.shuffle(arr)
    print("arr:", arr)
    res = quick_sort(arr)
    print("result:", res)