.global ADD_NO_PUSH
.global ADD_PUSH

.section .text

ADD_PUSH:
    pushq %R8

    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8

    popq %R8
    ret

ADD_NO_PUSH:
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    addq %R8, %R8
    ret

