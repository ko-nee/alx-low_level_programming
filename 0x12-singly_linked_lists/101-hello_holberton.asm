section .data
    hello db "Hello, Holberton",10  ; The string to print, followed by a newline (10)

section .text
    global main

extern printf

main:
    push rdi  ; Preserve registers that are used for passing arguments
    lea rdi, [hello]  ; Load the address of the hello string into rdi
    call printf  ; Call the printf function
    pop rdi  ; Restore the original value of rdi
    ret

