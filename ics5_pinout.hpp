/**
 * @file ics5_pinout.hpp
 * @author Felícito Manzano (felicito.manzano@detektor.com.sv)
 * @brief ics5_rev5
 * @version 0.1
 * @date 2020-09-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef __ICS5_PINOUT_H
#define __ICS5_PINOUT_H 

    //UART
    #define USART1_BLE_TX       PA_9
    #define USART1_BLE_RX       PA_10
    #define USART2_TTL_TX       PA_2
    #define USART2_TTL_RX       PA_3
    #define USART3_232_TX       PB_10 
    #define USART3_232_RX       PB_11
    #define USART3_485_TX       PB_10 // RS485 --> Precintos
    #define USART3_485_RX       PB_11 // RS485 --> Precintos
    #define USART4_TTL_TX       PA_0
    #define USART4_TTL_RX       PA_1
    #define USART5_TTL_TX       PB_3
    #define USART5_TTL_RX       PB_4

    // INPUT
    #define INPUT1_POSITIVE     PA_7
    #define INPUT2_NEGATIVE     PB_0
    #define INPUT3_NEGATIVE     PB_1
    #define INPUT4_NEGATIVE     PB_2
    #define INPUT5_NEGATIVE     PA_4
    #define INPUT6_NEGATIVE     PA_5

    // OUTPUT
    #define OUTPUT1_NEGATIVE    PA_12
    #define OUTPUT2_NEGATIVE    PA_11
    #define OUTPUT3_NEGATIVE    PB_7
    #define OUTPUT4_NEGATIVE    PB_6
    #define OUTPUT5_NEGATIVE    PB_5
    #define OUTPUT6_NEGATIVE    PA_15
    #define OUTPUT7_NEGATIVE    PA_8
    
    // BSP
    #define USER_BUTTON         PC_13
    #define USER_LED2           PB_14
    #define USER_LED3           PB_15

    // BLUETOOTH
    #define BT_STATE            PB_13
    #define BT_LED              PB_12

    // 1-WIRE
    #define ONE_WIRE            PA_6

    // I2C
    #define I2C_SCL             PB_8
    #define I2C_SDA             PB_9

    /* ******************************************** */
    /* *** PRUEBAS CON NUCLEO F303K8            *** */
    /* ******************************************** 
    #define USART2_232_TX       PA_2    // USB GV300
    #define USART2_232_RX       PA_15   // USB GV300
    #define USART3_485_TX       PA_9    // TTL - BUS 485 DU180
    #define USART3_485_RX       PA_10   // TTL - BUS 485 DU180
    #define INPUT1_POSITIVE     PA_12
    #define INPUT2_NEGATIVE     PB_0
    #define INPUT3_NEGATIVE     PB_7
    #define INPUT4_NEGATIVE     PB_6
    #define OUTPUT1_NEGATIVE    PB_1
    #define OUTPUT2_NEGATIVE    PF_0
    #define OUTPUT3_NEGATIVE    PF_1
    #define OUTPUT4_NEGATIVE    PA_8
    #define OUTPUT5_NEGATIVE    PA_11
    #define OUTPUT6_NEGATIVE    PB_5
    #define OUTPUT7_NEGATIVE    PB_4
    #define USER_LED2           PB_3    // LED BSP
    */

#endif  //__ICS5_PINOUT_H