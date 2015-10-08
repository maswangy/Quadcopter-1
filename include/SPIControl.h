/*
    Quadcopter -- SPIControl.h
    Auther: Wan-Ting CHEN (wanting@gmail.com)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef H_SPICONTROL
#define H_SPICONTROL
#include <pthread.h>
#include "RF24_Interface.h"

typedef struct {
    pthread_mutex_t mutex;
    float voltage;
    int control;
    int output;
} SPIVariables;

void SPIVariables_init(SPIVariables *spi_var);
int SPIVariables_end(SPIVariables *spi_var);
void RF24_Renew(SPIVariables *spi_var);
void MCP3008_Renew(SPIVariables *spi_var);

#endif