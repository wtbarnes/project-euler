# -*- coding: utf-8 -*-
"""
Created on Tue Oct 15 00:06:45 2013

@author: willbarnes
"""

#pe006.py

#initialize the square,sum vars
sumsq=0
sqsum=0

#how many numbers?
N=100

for i in range(1,N):
    sumsq=i**2+sumsq
    sqsum=i+sqsum
    
sqsum=sqsum**2

diff=sqsum-sumsq

print(diff)


