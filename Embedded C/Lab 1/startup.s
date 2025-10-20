@@ Simple Startup file to load stack pointer and branch to main

.global reset,

reset:
    ldr sp, = stack_top
    bl main

stop: b stop