/*HOLLAAAAAAA
 *    Requeriments rMCU v0.1
 * 
 * - Guardar a la SD els missatges de CAN
 * - Informar en cas de error
 * - Informar del estat
 * - LIMITADOR_ON == 1 --> Parpadeig dels LED
 * - Activar/Desactivar funcio Parpadeig LED
 * - Activar/Desactivar la opcio de guardar missatges a la SD
 */

#include "mcp2515_can.h"

#define BAUDRATE CAN_500KBPS

int state = 0;
bool LIMITADOR_ON = 0;
 
void initCAN()
{
  // PRE: Res
  // POS: Initialitzar el CAN i amb cas d'error informar al usuari via un print
}

void initPIN()
{
  // PRE: Res
  // POS: Initcializar la placa amb tots els pins digitals
}

void initSD()
{
  // PRE: Res
  // POS: Initicializar la SD del shield
}

void initRTCC()
{
  // PRE: Res
  // POS: Initizalitzar el modul RTCC
}

void setup() {
  initCAN();
  initPIN();
  initSD();
  initRTCC();
}

void readCAN_Msg(CAN* CAN0, uint8_t* msg, uint8_t* dlc)
{
  // PRE: Pasarem la interfaz de lectura, el missatege a llegir y la seva longitut
  // POS: Llegirem el buffer de lectura y retornarem el valor llegit
}

int getTime()
{
  // PRE: Res
  // POS: Retornara el temps llegit del modul RTCC
}

void guardarSD(int temps, uint8_t* msg)
{
  // PRE: Pasarem el temps i el missatge a guardar
  // POS: Guardarem a la SD el missatge amb el temps passat
}

void informaState()
{
  // PRE: Res
  // POS: Informara del nou estat al usuari
}

void setState()
{
  // PRE: Res
  // POS: Actualizar las entradas y saldias del arduino

  if(LIMITADOR_ON == true)
    parpadea();
}

void loop() {
  // put your main code here, to run repeatedly:
  while(len(bufferCAN) > 0)
  {
    readCAN_Msg();
    getTime();
    guardarSD();
    processCAN_Msg();
  }
  setState();
}
