
#ifndef   __CONFIG_H__
#define   __CONFIG_H__
#include "xip_ovly.h"

#define OS_ENABLE			    0
#define IRQ_STACK_SIZE			256
#define	CFG_NONE_OS             1


#define MHz(x)				((x)*1000000)
#define SYS_CLK				MHz(40) /* 40 MHz */
#define TICK_HZ				1000 	/* tick: 1ms */
#define KAL_HZ                  	TICK_HZ 

#if ((ILM_ENA == 1) && (DLM_ENA == 1))
#define ILM_SIZE			64	/* KBytes */
#define DLM_SIZE			64	/* KBytes */
#define USE_SRAM_SIZE			(ILM_SIZE + DLM_SIZE)
#endif

#define UART_BAUD_RATE			115200

#define CLI_EN				1u 	/* Enable/Disable CLI */
#define CLI_BUFF_SIZE			256	/* CLI Buffer size */

/* GPT timer list */
#define GLOBAL_TIMER_SIZE   1				/* must be power of 2 */

#if 0
#define DEFAULT_IOT_CLOUD_KEY {\
    0x8d, 0xc2, 0xf2, 0xae,\
    0xbc, 0x7b, 0xdc, 0x93,\
    0x80, 0xde, 0xb9, 0x6c,\
    0xa0, 0xe3, 0x93, 0x5d,\
    0x89, 0x30, 0x7f, 0x1e,\
    0xec, 0x7f, 0xd3, 0x75,\
    0x3c, 0x3d, 0x4b, 0xd6,\
    0x59, 0x8a, 0xb3, 0x2b,\
    0x01, 0x00, 0x01\
}
#endif
#define DEFAULT_IOT_CLOUD_KEY {\
    0xb1, 0x2c, 0xca, 0x70,\
    0xd6, 0xf8, 0x29, 0x9e,\
    0x15, 0xc7, 0x99, 0xf0,\
    0xe1, 0xcc, 0x2b, 0x6c,\
    0x26, 0xb5, 0xcf, 0x02,\
    0xca, 0xfb, 0xaf, 0x70,\
    0x78, 0x04, 0x8f, 0x00,\
    0x81, 0x8e, 0xf7, 0x79,\
    0x01, 0x00, 0x01\
}
#if 0
#define DEFAULT_IOT_PRIVATE_KEY {\
    0x8d, 0xc2, 0xf2, 0xae,\
    0xbc, 0x7b, 0xdc, 0x93,\
    0x80, 0xde, 0xb9, 0x6c,\
    0xa0, 0xe3, 0x93, 0x5d,\
    0x89, 0x30, 0x7f, 0x1e,\
    0xec, 0x7f, 0xd3, 0x75,\
    0x3c, 0x3d, 0x4b, 0xd6,\
    0x59, 0x8a, 0xb3, 0x2b,\
    0xea, 0x76, 0xb5, 0x4d,\
    0x3a, 0xb8, 0x75, 0xfc,\
    0xbb, 0xc6, 0x49, 0xa3,\
    0x48, 0x5b, 0x89, 0x2f,\
    0x9a, 0xc8, 0x65, 0x68,\
    0x9a, 0x07, 0x15, 0x71,\
    0x03, 0x92, 0x10, 0x0e,\
    0x8c, 0x7b, 0x7e, 0xc5,\
    0x1e, 0x8b, 0x9c, 0x8f,\
    0x15, 0x29, 0x56, 0xe5,\
    0xb8, 0x28, 0xdb, 0x0b,\
    0x14, 0xb0, 0x28, 0x2d,\
    0x7d, 0x68, 0xd9, 0x21,\
    0x83, 0x8b, 0x31, 0xc8,\
    0x3b, 0xc8, 0x60, 0xd2,\
    0x28, 0xe8, 0xf6, 0xb1,\
    0xcb, 0x26, 0x19, 0x68,\
    0x7c, 0x69, 0x4a, 0x80,\
    0xa5, 0x80, 0xd8, 0x0c,\
    0x3f, 0x43, 0x8f, 0x95\
}
#else
#define DEFAULT_IOT_PRIVATE_KEY {\
    0xB4,0xAB,0xBE,0x1C,  \
    0x0B,0x8D,0x32,0x62,  \
    0x57,0xEE,0x7F,0x77,  \
    0x50,0x4D,0x3B,0x9B,  \
    0x14,0xB2,0xEF,0x57,  \
    0x58,0x89,0xB1,0x0F,  \
    0xC3,0x00,0x19,0x59,  \
    0x55,0x51,0xAD,0x5D,  \
    0xC2,0x3A,0xF1,0xCE,  \
    0x99,0x1C,0xF0,0x27,  \
    0x9C,0xC4,0x69,0x62,  \
    0x8B,0x10,0xCC,0x2B,  \
    0xEE,0x20,0xDF,0xFA,  \
    0xF4,0x12,0x46,0xD7,  \
    0xCD,0x34,0xEA,0x51,  \
    0x66,0x5B,0xC0,0x97,  \
    0x5D,0xF8,0xDE,0xDD,  \
    0x32,0x3F,0x4A,0x02,  \
    0x20,0x5A,0xF7,0x11,  \
    0xF2,0x6E,0xA2,0x19,  \
    0xAA,0x65,0x7B,0xE0,  \
    0xE7,0xA5,0xEC,0x6B,  \
    0x9F,0xBB,0xAD,0xB0,  \
    0x71,0xBE,0x56,0x21,  \
    0x14,0x50,0x34,0x85,  \
    0xEB,0xAB,0xDB,0x7A,  \
    0x3F,0xDF,0x2E,0xCB,  \
    0xB2,0x69,0x10,0x5C   \
}
#endif


#endif
