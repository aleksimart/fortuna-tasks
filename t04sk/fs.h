#pragma once

#include <stdio.h>

#define MAX_FILES 300
#define EEPROM_START 256
#define EEPROM_LEN 1600
#define BLOCK_SIZE 64


typedef uint8_t fileName;

void open_for_write(fileName file);
void open_for_append(fileName file);
void open_for_read(fileName file);
void close(fileName file);

void write(fileName file, uint8_t *buf);
uint8_t read(fileName file, uint8_t *buf);
void delete(fileName file, uint8_t *buf);







