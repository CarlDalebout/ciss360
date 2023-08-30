#========================================================
# Filename: hello.s
# Author: John Doe
#
# Description:
# Prints "Hello World!\nMy name is SPIM!\n" to console.
#========================================================

#########################################################
#
# text segment
#
#########################################################
    .text
    .globl main
main:
    la $a0, hello # a0 = hello
    li $v0, 4 # syscall 4: print string
    syscall
    li $v0, 10 # syscall 10: exit
    syscall

#########################################################
#
# data segment
#
#########################################################
    .data
hello: .asciiz "Hello World!!!!!!!!\nMy name is SPIM!\n"

# EOF (hello.s)
