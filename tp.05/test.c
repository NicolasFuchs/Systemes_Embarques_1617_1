/*
 * test.c
 *
 *  Created on: Nov 25, 2016
 *      Author: lmi
 */

#include <stdint.h>

//accès aux registres pour le timer:

#define TIOCP_CFG_SOFTRESET (1<<1)
#define TIOCP_CFG_AUTOIDLE (1<<0)
#define TIOCP_CFG_ENUMFREE (1<<5)

//déclaration:
struct dmtimer1_regs{
	uint32_t tidr;		//00 - 03
	uint32_t res1[3];	//04 - 0f    		--> compenser les "trous" quand il y en a (voir le datasheet)
	uint32_t tiocp_cfg;	//10 - 13			(compléter l'offset entre les adresses)
	uint32_t tistat;	//14 - 17
	uint32_t tisr;		//18 - 1b
	uint32_t tier;		//1c - 1e
	short res2;						//1 seul octet?
	uint32_t twer;		//20 - 23
	uint32_t tclr;		//24 - 27
	uint32_t tcrr;		//28 - 2b
	uint32_t tldr;		//2c - 2f
	uint32_t ttgr;		//30 - 33
	uint32_t twps;		//34 - 37
	uint32_t tmar;		//38 - 3b
	uint32_t tcar1;		//3c - 3f
	uint32_t tsicr;		//40 - 43
	uint32_t tcar2;		//44 - 47
	uint32_t tpir;		//48 - 4b
	uint32_t tnir;		//4c - 4f
	uint32_t tcvr;		//50 - 53
	uint32_t tocr;		//54 - 57
	uint32_t towr;		//58 - 5b
};

static volatile struct dmtimer1_regs* timer1 = (struct dmtimer1_regs*)0x443e31000;

void f(){
	//utilisation:
	timer1->tiocp_cfg=0x10;			//write
	uint32_t a = timer1->tiocp_cfg;	//read
	timer1->tiocp_cfg |= 0x10;		//RMW -- set
	timer1->tiocp_cfg &= ~0x10;		//RMW -- clear

}
