#!/bin/sh
# This is a comment!

echo "author-TN"
echo "Everything gonna be Daijobu!!!"
echo "Num_Test_case"

g++ sol.cpp -o main

read num_test
for ((i=1;i<=num_test;i++))
do
  ./main < "./tests/$i" > "./tests/out$i"
done

echo "done-delete-file-excutor"

rm main 
