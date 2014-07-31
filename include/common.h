#include <avr/eeprom.h>

extern unsigned short checksum;

// Calculates the checksum of the flash
void calculate_checksum( unsigned short length);

// Reads the module ID from EEPROM
uint8_t read_module_id();

// Reads th firmware version from EEPROM
uint8_t read_firmware_version();

