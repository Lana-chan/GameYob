/*
 * Thanks to Epicpkmn11: https://github.com/Epicpkmn11/dsi-camera/
 * Original code published under public domain (Unlicense)
 */

#ifndef I2C_HANDLER_H
#define I2C_HANDLER_H

#include "fifo_vars.h"

#include <nds/ndstypes.h>

#ifdef __cplusplus
extern "C" {
#endif

void i2cFifoHandler(u32 value32, void *userdata);

#ifdef __cplusplus
}
#endif

#endif // I2C_HANDLER_H
