.global main

.data
   //Prompts
//Hello Prompt
   welcome: .asciz "Hello! Welcome to Add Two Numbers.\n\n"
//Question 1
   q1: .asciz "Enter an integer for the first number: "
//Question 2
   q2: .asciz "Enter an integer for the second number: "
//Message Prompt
   mgs: .asciz "The sum of %d and %d is %d\n\n"
//Data type for the Scanf 
   pattern: .asciz "%d"

//Vars
// 1st number
    num1: .word 0
//2nd number
    num2: .word 0
//Total value
    sum: .word 0

.text

  main:
    push {lr}

//Takes Welcome Prompt, then displays it
    ldr r0, =welcome
    bl printf
 
//Takes Question1, then displays it
    ldr r0, =q1
    bl printf

//Deals with Scanf for 1st number
    ldr r0, =pattern
    ldr r1, =num1
    bl scanf
    
//Takes Question2, then displays it
    ldr r0, =q2
    bl printf

//Deals with Scanf for 2nd number
    ldr r0, =pattern
    ldr r1, =num2
    bl scanf


    mov r0, #0
    ldr r1, =num1
    ldr r1, [r1]
    ldr r2, =num2
    ldr r2, [r2] 
    add r0, r1, r2

    ldr r3, =sum
    str r0, [r3]
    mov r3, #0

    ldr r0, =mgs

    ldr r1, =num1
    ldr r1, [r1] 

    ldr r2, =num2
    ldr r2, [r2] 

    ldr r3, =sum
    ldr r3, [r3] 

    bl printf

    pop {pc}







//We add in two numbers 
//And then we store them into sum
//Then we output result

