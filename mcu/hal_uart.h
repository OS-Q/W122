															/**
  ******************************************************************************
  * @file    
  * @author  
  * @version 
  * @date   
  * @brief   
  ******************************************************************************  
  * 
  * 
  ******************************************************************************
  */
#ifndef    HAL_UART_H
#define    HAL_UART_H


/*-- includes  ---------------------------------------------------------------*/
#include "../includes/_sys_config.h"



/*-- defined  ----------------------------------------------------------------*/
typedef   void  (*Uart0tRxCallbackPt)(u8_t dat);


/*-- functions  ---------------------------------------------------------------*/
extern   void   mcu_uart0_init(u32_t u32Baudrate);
extern   void   uart0_rx_callback_register(Uart0tRxCallbackPt  func);


#endif   /* HAL_UART_H */

/*---------------------- end of file -----------------------------------------*/
