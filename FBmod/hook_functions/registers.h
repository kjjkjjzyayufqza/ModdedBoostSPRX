
extern int temp_registers[32]; // This location is dynamic.
extern float temp_float_registers[32]; // This location is dynamic.

void get_temp_registers_pointer();
void get_temp_float_registers_pointer();
void save_registers();
void retrieve_registers();