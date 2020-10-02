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

    extern const int ICS_BOARD_ID;

    #if (ICS_BOARD_ID == 5)
        //UART
        #define BLE_TX          PA_9    //USART1
        #define BLE_RX          PA_10
        #define TTL_1_TX        PA_9    //USART1
        #define TTL_1_RX        PA_10
        #define TTL_2_TX        PA_2    //USART2
        #define TTL_2_RX        PA_3
        #define RS232_CH1_TX    PA_2    //USART2
        #define RS232_CH1_RX    PA_3
        #define RS232_CH2_TX    PB_10   //USART3
        #define RS232_CH2_RX    PB_11
        #define RS485_TX        PB_10   //USART3
        #define RS485_RX        PB_11
        #define TTL_4_TX        PA_0    //USART4
        #define TTL_4_RX        PA_1
        #define TTL_5_TX        PB_3    //USART5
        #define TTL_5_RX        PB_4
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
    #elif (ICS_BOARD_ID == 3)
        //UART
        #define BLE_TX              PB_10   //USART3
        #define BLE_RX              PB_11
        #define RS232_CH1_TX        PA_9    //USART1
        #define RS232_CH1_RX        PA_10
        #define RS232_CH2_TX        PA_2    //USART2
        #define RS232_CH2_RX        PA_3
        #define TTL_3_TX            PB_10
        #define TTL_3_RX            PB_11
        #define TTL_4_TX            PA_0    //USART4
        #define TTL_4_RX            PA_1
        // INPUT 
        #define INPUT1_POSITIVE     PA_5
        #define INPUT2_NEGATIVE     PA_6
        #define INPUT3_NEGATIVE     PA_7
        #define INPUT4_NEGATIVE     PA_15
        // OUTPUTS 
        #define OUTPUT1_NEGATIVE    PB_9
        #define OUTPUT2_NEGATIVE    PB_8
        #define OUTPUT3_NEGATIVE    PB_7
        #define OUTPUT4_NEGATIVE    PB_6
        #define OUTPUT5_NEGATIVE    PB_5
        #define OUTPUT6_NEGATIVE    PB_4
        #define OUTPUT7_NEGATIVE    PB_3
        // BSP
        #define USER_BUTTON         PC_13
        #define USER_LED2           PA_4
        #define USER_LED2           PB_0
        // 1-WIRE 
        #define ONE_WIRE            PB_1
        #define ONE_WIRE2           PB_2
        // TTL
        #define TTL_IO1             PA_11
        #define TTL_IO2             PA_12
        #define RF_TTL_DIN0         PA_8
        #define RF_TTL_DIN1         PB_15
        #define RF_TTL_DIN2         PB_14
        #define RF_TTL_DIN3         PB_13
        #define RF_TTL_DIN_VT       PB_12

    #elif (ICS_BOARD_ID == 8)
        /* ******************************************** */
        /* *** PRUEBAS CON NUCLEO F303K8            *** */
        /* ******************************************** */
        #define TTL_1_TX            PA_2    //USART1
        #define TTL_1_RX            PA_15
        #define RS232_CH1_TX        PA_2    // USART1
        #define RS232_CH1_RX        PA_15   
        #define TTL_2_TX            PA_9    //USART2
        #define TTL_2_RX            PA_10
        #define RS232_CH2_TX        PA_9   
        #define RS232_CH2_RX        PA_10
        #define RS485_TX            PA_9   
        #define RS485_RX            PA_10
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
    #endif
#endif  //__ICS5_PINOUT_H