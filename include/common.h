#include <avr/eeprom.h>

// Calculates the checksum of the flash
void calculate_checksum( unsigned short length);

// Reads the module ID from EEPROM
uint8_t read_module_id(void);

// Reads th firmware version from EEPROM
uint8_t read_firmware_version(void);

