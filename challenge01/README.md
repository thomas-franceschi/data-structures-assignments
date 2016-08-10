Challenge 01
============

## Problem

A **left rotation** operation on an array of **n** size shifts each of the
array's elements **1** unit to the left. For example, if **2** left rotations
are performed on array `[1, 2, 3, 4, 5]`, then the array would become `[3, 4,
5, 1, 2]`.

Similarly, a **right rotation** operation on an array of **n** size shifts each
of the array's elements **1** unit to the right.  For example if **2** right
rotations are performed on array `[1, 2, 3, 4, 5]`, then the array would become
`[4, 5, 1, 2, 3]`.

Given an array of **n** integers, a number **r**, and a direction **d** (e.g
`L` or `R`), perform **r** rotations on the **n** integers in the **d**
direction and output the resulting data.

**Note**: This problem is based on the [Left
Rotation](https://www.hackerrank.com/challenges/array-left-rotation) challenge
on [HackerRank](https://www.hackerrank.com/).

## Input

You will be given a series of inputs from [standard input] in the follow format:

    n r d
    n0 n1 ...

## Output


## Example

Given the following input:

    5 4 L
    1 2 3 4 5

Your program should output the following:

    5 1 2 3 4
