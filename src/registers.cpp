#include "registers.h"

typedef struct {
    Word program_counter;
    Word stack_pointer;

    Byte bc_registers[2]; // B and C pair registers
    Byte de_registers[2]; // D and E pair registers
    Byte hl_registers[2]; // H and L pair registers
    Byte wz_registers[2]; // W and Z temporary registers

} Registers;
