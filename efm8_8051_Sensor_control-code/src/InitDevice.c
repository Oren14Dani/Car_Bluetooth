//=========================================================
// src/InitDevice.c: generated by Hardware Configurator
//
// This file will be regenerated when saving a document.
// leave the sections inside the "$[...]" comment tags alone
// or they will be overwritten!
//=========================================================

// USER INCLUDES
#include <SI_EFM8UB2_Register_Enums.h>
#include "InitDevice.h"

// USER PROTOTYPES
// USER FUNCTIONS

// $[Library Includes]
// [Library Includes]$

//==============================================================================
// enter_DefaultMode_from_RESET
//==============================================================================
extern void
enter_DefaultMode_from_RESET (void)
{
  // $[Config Calls]
  // Save the SFRPAGE
  uint8_t SFRPAGE_save = SFRPAGE;
  PCA_0_enter_DefaultMode_from_RESET ();
  PCACH_0_enter_DefaultMode_from_RESET ();
  PCACH_1_enter_DefaultMode_from_RESET ();
  PCACH_2_enter_DefaultMode_from_RESET ();
  PORTS_0_enter_DefaultMode_from_RESET ();
  PORTS_1_enter_DefaultMode_from_RESET ();
  PORTS_2_enter_DefaultMode_from_RESET ();
  PORTS_3_enter_DefaultMode_from_RESET ();
  PBCFG_0_enter_DefaultMode_from_RESET ();
  HFOSC_0_enter_DefaultMode_from_RESET ();
  CLOCK_0_enter_DefaultMode_from_RESET ();
  CIP51_0_enter_DefaultMode_from_RESET ();
  TIMER01_0_enter_DefaultMode_from_RESET ();
  TIMER16_2_enter_DefaultMode_from_RESET ();
  TIMER16_3_enter_DefaultMode_from_RESET ();
  TIMER16_4_enter_DefaultMode_from_RESET ();
  TIMER16_5_enter_DefaultMode_from_RESET ();
  TIMER_SETUP_0_enter_DefaultMode_from_RESET ();
  SPI_0_enter_DefaultMode_from_RESET ();
  EXTINT_0_enter_DefaultMode_from_RESET ();
  INTERRUPT_0_enter_DefaultMode_from_RESET ();
  // Restore the SFRPAGE
  SFRPAGE = SFRPAGE_save;
  // [Config Calls]$

}

//================================================================================
// PCA_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
PCA_0_enter_DefaultMode_from_RESET (void)
{
  // $[PCA0MD - PCA Mode]
  /***********************************************************************
   - Disable Watchdog Timer
   - System clock divided by 12
   - PCA continues to function normally while the system controller is in
   Idle Mode
   - Disable the CF interrupt
   - Disable Watchdog Timer
   - Watchdog Timer Enable unlocked
   ***********************************************************************/
  SFRPAGE = 0x00;
  PCA0MD &= ~PCA0MD_WDTE__BMASK;
  PCA0MD = PCA0MD_CPS__SYSCLK_DIV_12 | PCA0MD_CIDL__NORMAL
      | PCA0MD_ECF__OVF_INT_DISABLED | PCA0MD_WDTE__DISABLED
      | PCA0MD_WDLCK__UNLOCKED;
  // [PCA0MD - PCA Mode]$

  // $[PCA0H - PCA Counter/Timer High Byte]
  // [PCA0H - PCA Counter/Timer High Byte]$

  // $[PCA0L - PCA Counter/Timer Low Byte]
  // [PCA0L - PCA Counter/Timer Low Byte]$

  // $[PCA0CN0 - PCA Control 0]
  // [PCA0CN0 - PCA Control 0]$

}

//================================================================================
// PCACH_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
PCACH_0_enter_DefaultMode_from_RESET (void)
{
  uint8_t PCA0CN0_CR_save = PCA0CN0 & PCA0CN0_CR__BMASK;
  PCA0CN0 |= PCA0CN0_CR_save;

  // $[PCA0CPM0 - PCA Channel 0 Capture/Compare Mode]
  /***********************************************************************
   - Disable negative edge capture
   - Enable a Capture/Compare Flag interrupt request when CCF0 is set
   - Disable match function
   - 8-bit PWM selected
   - Enable positive edge capture
   - Disable comparator function
   - Disable PWM function
   - Disable toggle function
   ***********************************************************************/
  PCA0CPM0 = PCA0CPM0_CAPN__DISABLED | PCA0CPM0_ECCF__ENABLED
      | PCA0CPM0_MAT__DISABLED | PCA0CPM0_PWM16__8_BIT | PCA0CPM0_CAPP__ENABLED
      | PCA0CPM0_ECOM__DISABLED | PCA0CPM0_PWM__DISABLED
      | PCA0CPM0_TOG__DISABLED;
  // [PCA0CPM0 - PCA Channel 0 Capture/Compare Mode]$

  // $[PCA0CPL0 - PCA Channel 0 Capture Module Low Byte]
  // [PCA0CPL0 - PCA Channel 0 Capture Module Low Byte]$

  // $[PCA0CPH0 - PCA Channel 0 Capture Module High Byte]
  PCA0CPH0 = 0x00;
  // [PCA0CPH0 - PCA Channel 0 Capture Module High Byte]$

  // $[PCA0 Start/Run restore]
  // [PCA0 Start/Run restore]$

}

//================================================================================
// PCACH_1_enter_DefaultMode_from_RESET
//================================================================================
extern void
PCACH_1_enter_DefaultMode_from_RESET (void)
{
  uint8_t PCA0CN0_CR_save = PCA0CN0 & PCA0CN0_CR__BMASK;
  PCA0CN0 |= PCA0CN0_CR_save;

  // $[PCA0CPM1 - PCA Channel 1 Capture/Compare Mode]
  /***********************************************************************
   - Disable negative edge capture
   - Enable a Capture/Compare Flag interrupt request when CCF1 is set
   - Disable match function
   - 8-bit PWM selected
   - Enable positive edge capture
   - Disable comparator function
   - Disable PWM function
   - Disable toggle function
   ***********************************************************************/
  PCA0CPM1 = PCA0CPM1_CAPN__DISABLED | PCA0CPM1_ECCF__ENABLED
      | PCA0CPM1_MAT__DISABLED | PCA0CPM1_PWM16__8_BIT | PCA0CPM1_CAPP__ENABLED
      | PCA0CPM1_ECOM__DISABLED | PCA0CPM1_PWM__DISABLED
      | PCA0CPM1_TOG__DISABLED;
  // [PCA0CPM1 - PCA Channel 1 Capture/Compare Mode]$

  // $[PCA0CPL1 - PCA Channel 1 Capture Module Low Byte]
  // [PCA0CPL1 - PCA Channel 1 Capture Module Low Byte]$

  // $[PCA0CPH1 - PCA Channel 1 Capture Module High Byte]
  PCA0CPH1 = 0x00;
  // [PCA0CPH1 - PCA Channel 1 Capture Module High Byte]$

  // $[PCA0 Start/Run restore]
  // [PCA0 Start/Run restore]$

}

//================================================================================
// PCACH_2_enter_DefaultMode_from_RESET
//================================================================================
extern void
PCACH_2_enter_DefaultMode_from_RESET (void)
{
  uint8_t PCA0CN0_CR_save = PCA0CN0 & PCA0CN0_CR__BMASK;
  PCA0CN0 |= PCA0CN0_CR_save;

  // $[PCA0CPM2 - PCA Channel 2 Capture/Compare Mode]
  // [PCA0CPM2 - PCA Channel 2 Capture/Compare Mode]$

  // $[PCA0CPL2 - PCA Channel 2 Capture Module Low Byte]
  // [PCA0CPL2 - PCA Channel 2 Capture Module Low Byte]$

  // $[PCA0CPH2 - PCA Channel 2 Capture Module High Byte]
  PCA0CPH2 = 0x00;
  // [PCA0CPH2 - PCA Channel 2 Capture Module High Byte]$

  // $[PCA0 Start/Run restore]
  // [PCA0 Start/Run restore]$

}

//================================================================================
// PORTS_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
PORTS_0_enter_DefaultMode_from_RESET (void)
{
  // $[P0 - Port 0 Pin Latch]
  // [P0 - Port 0 Pin Latch]$

  // $[P0MDOUT - Port 0 Output Mode]
  /***********************************************************************
   - P0.0 output is open-drain
   - P0.1 output is push-pull
   - P0.2 output is open-drain
   - P0.3 output is open-drain
   - P0.4 output is push-pull
   - P0.5 output is open-drain
   - P0.6 output is push-pull
   - P0.7 output is open-drain
   ***********************************************************************/
  P0MDOUT = P0MDOUT_B0__OPEN_DRAIN | P0MDOUT_B1__PUSH_PULL
      | P0MDOUT_B2__OPEN_DRAIN | P0MDOUT_B3__OPEN_DRAIN | P0MDOUT_B4__PUSH_PULL
      | P0MDOUT_B5__OPEN_DRAIN | P0MDOUT_B6__PUSH_PULL | P0MDOUT_B7__OPEN_DRAIN;
  // [P0MDOUT - Port 0 Output Mode]$

  // $[P0MDIN - Port 0 Input Mode]
  // [P0MDIN - Port 0 Input Mode]$

  // $[P0SKIP - Port 0 Skip]
  /***********************************************************************
   - P0.0 pin is skipped by the crossbar
   - P0.1 pin is skipped by the crossbar
   - P0.2 pin is skipped by the crossbar
   - P0.3 pin is skipped by the crossbar
   - P0.4 pin is not skipped by the crossbar
   - P0.5 pin is not skipped by the crossbar
   - P0.6 pin is not skipped by the crossbar
   - P0.7 pin is not skipped by the crossbar
   ***********************************************************************/
  P0SKIP = P0SKIP_B0__SKIPPED | P0SKIP_B1__SKIPPED | P0SKIP_B2__SKIPPED
      | P0SKIP_B3__SKIPPED | P0SKIP_B4__NOT_SKIPPED | P0SKIP_B5__NOT_SKIPPED
      | P0SKIP_B6__NOT_SKIPPED | P0SKIP_B7__NOT_SKIPPED;
  // [P0SKIP - Port 0 Skip]$

}

//================================================================================
// PORTS_1_enter_DefaultMode_from_RESET
//================================================================================
extern void
PORTS_1_enter_DefaultMode_from_RESET (void)
{
  // $[P1 - Port 1 Pin Latch]
  /***********************************************************************
   - P1.0 is high. Set P1.0 to drive or float high
   - P1.1 is high. Set P1.1 to drive or float high
   - P1.2 is high. Set P1.2 to drive or float high
   - P1.3 is high. Set P1.3 to drive or float high
   - P1.4 is high. Set P1.4 to drive or float high
   - P1.5 is high. Set P1.5 to drive or float high
   - P1.6 is low. Set P1.6 to drive low
   - P1.7 is high. Set P1.7 to drive or float high
   ***********************************************************************/
  P1 = P1_B0__HIGH | P1_B1__HIGH | P1_B2__HIGH | P1_B3__HIGH | P1_B4__HIGH
      | P1_B5__HIGH | P1_B6__LOW | P1_B7__HIGH;
  // [P1 - Port 1 Pin Latch]$

  // $[P1MDOUT - Port 1 Output Mode]
  /***********************************************************************
   - P1.0 output is push-pull
   - P1.1 output is open-drain
   - P1.2 output is open-drain
   - P1.3 output is open-drain
   - P1.4 output is push-pull
   - P1.5 output is open-drain
   - P1.6 output is push-pull
   - P1.7 output is open-drain
   ***********************************************************************/
  P1MDOUT = P1MDOUT_B0__PUSH_PULL | P1MDOUT_B1__OPEN_DRAIN
      | P1MDOUT_B2__OPEN_DRAIN | P1MDOUT_B3__OPEN_DRAIN | P1MDOUT_B4__PUSH_PULL
      | P1MDOUT_B5__OPEN_DRAIN | P1MDOUT_B6__PUSH_PULL | P1MDOUT_B7__OPEN_DRAIN;
  // [P1MDOUT - Port 1 Output Mode]$

  // $[P1MDIN - Port 1 Input Mode]
  /***********************************************************************
   - P1.0 pin is configured for digital mode
   - P1.1 pin is configured for digital mode
   - P1.2 pin is configured for digital mode
   - P1.3 pin is configured for digital mode
   - P1.4 pin is configured for digital mode
   - P1.5 pin is configured for analog mode
   - P1.6 pin is configured for digital mode
   - P1.7 pin is configured for digital mode
   ***********************************************************************/
  P1MDIN = P1MDIN_B0__DIGITAL | P1MDIN_B1__DIGITAL | P1MDIN_B2__DIGITAL
      | P1MDIN_B3__DIGITAL | P1MDIN_B4__DIGITAL | P1MDIN_B5__ANALOG
      | P1MDIN_B6__DIGITAL | P1MDIN_B7__DIGITAL;
  // [P1MDIN - Port 1 Input Mode]$

  // $[P1SKIP - Port 1 Skip]
  /***********************************************************************
   - P1.0 pin is not skipped by the crossbar
   - P1.1 pin is skipped by the crossbar
   - P1.2 pin is skipped by the crossbar
   - P1.3 pin is skipped by the crossbar
   - P1.4 pin is skipped by the crossbar
   - P1.5 pin is skipped by the crossbar
   - P1.6 pin is skipped by the crossbar
   - P1.7 pin is skipped by the crossbar
   ***********************************************************************/
  P1SKIP = P1SKIP_B0__NOT_SKIPPED | P1SKIP_B1__SKIPPED | P1SKIP_B2__SKIPPED
      | P1SKIP_B3__SKIPPED | P1SKIP_B4__SKIPPED | P1SKIP_B5__SKIPPED
      | P1SKIP_B6__SKIPPED | P1SKIP_B7__SKIPPED;
  // [P1SKIP - Port 1 Skip]$

}

//================================================================================
// PORTS_2_enter_DefaultMode_from_RESET
//================================================================================
extern void
PORTS_2_enter_DefaultMode_from_RESET (void)
{
  // $[P2 - Port 2 Pin Latch]
  /***********************************************************************
   - P2.0 is high. Set P2.0 to drive or float high
   - P2.1 is high. Set P2.1 to drive or float high
   - P2.2 is high. Set P2.2 to drive or float high
   - P2.3 is high. Set P2.3 to drive or float high
   - P2.4 is low. Set P2.4 to drive low
   - P2.5 is low. Set P2.5 to drive low
   - P2.6 is high. Set P2.6 to drive or float high
   - P2.7 is high. Set P2.7 to drive or float high
   ***********************************************************************/
  P2 = P2_B0__HIGH | P2_B1__HIGH | P2_B2__HIGH | P2_B3__HIGH | P2_B4__LOW
      | P2_B5__LOW | P2_B6__HIGH | P2_B7__HIGH;
  // [P2 - Port 2 Pin Latch]$

  // $[P2MDOUT - Port 2 Output Mode]
  /***********************************************************************
   - P2.0 output is open-drain
   - P2.1 output is open-drain
   - P2.2 output is open-drain
   - P2.3 output is open-drain
   - P2.4 output is push-pull
   - P2.5 output is push-pull
   - P2.6 output is open-drain
   - P2.7 output is open-drain
   ***********************************************************************/
  P2MDOUT = P2MDOUT_B0__OPEN_DRAIN | P2MDOUT_B1__OPEN_DRAIN
      | P2MDOUT_B2__OPEN_DRAIN | P2MDOUT_B3__OPEN_DRAIN | P2MDOUT_B4__PUSH_PULL
      | P2MDOUT_B5__PUSH_PULL | P2MDOUT_B6__OPEN_DRAIN | P2MDOUT_B7__OPEN_DRAIN;
  // [P2MDOUT - Port 2 Output Mode]$

  // $[P2MDIN - Port 2 Input Mode]
  // [P2MDIN - Port 2 Input Mode]$

  // $[P2SKIP - Port 2 Skip]
  /***********************************************************************
   - P2.0 pin is skipped by the crossbar
   - P2.1 pin is skipped by the crossbar
   - P2.2 pin is skipped by the crossbar
   - P2.3 pin is skipped by the crossbar
   - P2.4 pin is skipped by the crossbar
   - P2.5 pin is skipped by the crossbar
   - P2.6 pin is skipped by the crossbar
   - P2.7 pin is skipped by the crossbar
   ***********************************************************************/
  P2SKIP = P2SKIP_B0__SKIPPED | P2SKIP_B1__SKIPPED | P2SKIP_B2__SKIPPED
      | P2SKIP_B3__SKIPPED | P2SKIP_B4__SKIPPED | P2SKIP_B5__SKIPPED
      | P2SKIP_B6__SKIPPED | P2SKIP_B7__SKIPPED;
  // [P2SKIP - Port 2 Skip]$

}

//================================================================================
// PBCFG_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
PBCFG_0_enter_DefaultMode_from_RESET (void)
{
  // $[XBR1 - Port I/O Crossbar 1]
  /***********************************************************************
   - Weak Pullups disabled
   - Crossbar enabled
   - CEX0, CEX1 routed to Port pins
   - ECI unavailable at Port pin
   - T0 unavailable at Port pin
   - T1 unavailable at Port pin
   ***********************************************************************/
  XBR1 = XBR1_WEAKPUD__PULL_UPS_DISABLED | XBR1_XBARE__ENABLED
      | XBR1_PCA0ME__CEX0_CEX1 | XBR1_ECIE__DISABLED | XBR1_T0E__DISABLED
      | XBR1_T1E__DISABLED;
  // [XBR1 - Port I/O Crossbar 1]$

  // $[XBR0 - Port I/O Crossbar 0]
  /***********************************************************************
   - UART0 TX, RX routed to Port pins P0.4 and P0.5
   - SPI I/O routed to Port pins
   - SMBus 0 I/O unavailable at Port pins
   - CP0 unavailable at Port pin
   - Asynchronous CP0 unavailable at Port pin
   - CP1 unavailable at Port pin
   - Asynchronous CP1 unavailable at Port pin
   - SYSCLK unavailable at Port pin
   ***********************************************************************/
  XBR0 = XBR0_URT0E__ENABLED | XBR0_SPI0E__ENABLED | XBR0_SMB0E__DISABLED
      | XBR0_CP0E__DISABLED | XBR0_CP0AE__DISABLED | XBR0_CP1E__DISABLED
      | XBR0_CP1AE__DISABLED | XBR0_SYSCKE__DISABLED;
  // [XBR0 - Port I/O Crossbar 0]$

  // $[XBR2 - Port I/O Crossbar 2]
  // [XBR2 - Port I/O Crossbar 2]$

}

//================================================================================
// HFOSC_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
HFOSC_0_enter_DefaultMode_from_RESET (void)
{
  // $[HFO0CN - High Frequency Oscillator Control]
  /***********************************************************************
   - SYSCLK can be derived from Internal H-F Oscillator divided by 1 
   ***********************************************************************/
  HFO0CN |= HFO0CN_IFCN__SYSCLK_DIV_1;
  // [HFO0CN - High Frequency Oscillator Control]$

}

//================================================================================
// CLOCK_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
CLOCK_0_enter_DefaultMode_from_RESET (void)
{
  // $[CLKSEL - Clock Select]
  /***********************************************************************
   - Clock 
   - USB clock 
   - Enabling the Crossbar SYSCLK signal outputs SYSCLK
   ***********************************************************************/
  CLKSEL = CLKSEL_CLKSL__HFOSC_DIV_2 | CLKSEL_USBCLK__HFOSC
      | CLKSEL_OUTCLK__SYSCLK;
  // [CLKSEL - Clock Select]$

}
/*
 //================================================================================
 // TIMER01_0_enter_DefaultMode_from_RESET
 //================================================================================
 extern void TIMER01_0_enter_DefaultMode_from_RESET(void) {
 // $[Timer Initialization]
 //Save Timer Configuration
 uint8_t TCON_save;
 TCON_save = TCON;
 //Stop Timers
 TCON &= ~TCON_TR0__BMASK & ~TCON_TR1__BMASK;

 // [Timer Initialization]$

 // $[TH0 - Timer 0 High Byte]
 // [TH0 - Timer 0 High Byte]$

 // $[TL0 - Timer 0 Low Byte]
 /***********************************************************************
 - Timer 0 Low Byte = 0x06
 ***********************************************************************/
/*
 TL0 = (0x06 << TL0_TL0__SHIFT);
 // [TL0 - Timer 0 Low Byte]$

 // $[TH1 - Timer 1 High Byte]
 // [TH1 - Timer 1 High Byte]$

 // $[TL1 - Timer 1 Low Byte]
 // [TL1 - Timer 1 Low Byte]$

 // $[Timer Restoration]
 //Restore Timer Configuration
 TCON |= (TCON_save & TCON_TR0__BMASK) | (TCON_save & TCON_TR1__BMASK);

 // [Timer Restoration]$

 }
 */
//================================================================================
// TIMER16_3_enter_DefaultMode_from_RESET
//================================================================================
extern void
TIMER16_3_enter_DefaultMode_from_RESET (void)
{
  // $[Timer Initialization]
  // Save Timer Configuration
  uint8_t TMR3CN0_TR3_save;
  TMR3CN0_TR3_save = TMR3CN0 & TMR3CN0_TR3__BMASK;
  // Stop Timer
  TMR3CN0 &= ~(TMR3CN0_TR3__BMASK);
  // [Timer Initialization]$

  // $[TMR3CN0 - Timer 3 Control]
  // [TMR3CN0 - Timer 3 Control]$

  // $[TMR3H - Timer 3 High Byte]
  /***********************************************************************
   - Timer 3 High Byte = 0xF8
   ***********************************************************************/
  TMR3H = (0xF8 << TMR3H_TMR3H__SHIFT);
  // [TMR3H - Timer 3 High Byte]$

  // $[TMR3L - Timer 3 Low Byte]
  /***********************************************************************
   - Timer 3 Low Byte = 0x30
   ***********************************************************************/
  TMR3L = (0x30 << TMR3L_TMR3L__SHIFT);
  // [TMR3L - Timer 3 Low Byte]$

  // $[TMR3RLH - Timer 3 Reload High Byte]
  /***********************************************************************
   - Timer 3 Reload High Byte = 0xF8
   ***********************************************************************/
  TMR3RLH = (0xF8 << TMR3RLH_TMR3RLH__SHIFT);
  // [TMR3RLH - Timer 3 Reload High Byte]$

  // $[TMR3RLL - Timer 3 Reload Low Byte]
  /***********************************************************************
   - Timer 3 Reload Low Byte = 0x30
   ***********************************************************************/
  TMR3RLL = (0x30 << TMR3RLL_TMR3RLL__SHIFT);
  // [TMR3RLL - Timer 3 Reload Low Byte]$

  // $[TMR3CN0]
  /***********************************************************************
   - Start Timer 3 running
   ***********************************************************************/
  TMR3CN0 |= TMR3CN0_TR3__RUN;
  // [TMR3CN0]$

  // $[Timer Restoration]
  // Restore Timer Configuration
  TMR3CN0 |= TMR3CN0_TR3_save;
  // [Timer Restoration]$

}

//================================================================================
// TIMER_SETUP_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
TIMER_SETUP_0_enter_DefaultMode_from_RESET (void)
{
  // $[CKCON0 - Clock Control 0]
  // [CKCON0 - Clock Control 0]$

  // $[CKCON1 - Clock Control 1]
  /***********************************************************************
   - Timer 4 high byte uses the clock defined by T4XCLK in TMR4CN0
   - Timer 4 low byte uses the clock defined by T4XCLK in TMR4CN0
   - Timer 5 high byte uses the clock defined by T5XCLK in TMR5CN
   - Timer 5 low byte uses the system clock
   ***********************************************************************/
  CKCON1 = CKCON1_T4MH__EXTERNAL_CLOCK | CKCON1_T4ML__EXTERNAL_CLOCK
      | CKCON1_T5MH__EXTERNAL_CLOCK | CKCON1_T5ML__SYSCLK;
  // [CKCON1 - Clock Control 1]$

  // $[TMOD - Timer 0/1 Mode]
  /***********************************************************************
   - Mode 2, 8-bit Counter/Timer with Auto-Reload
   - Mode 2, 8-bit Counter/Timer with Auto-Reload
   - Timer Mode
   - Timer 0 enabled when TR0 = 1 irrespective of INT0 logic level
   - Timer Mode
   - Timer 1 enabled when TR1 = 1 irrespective of INT1 logic level
   ***********************************************************************/
  SFRPAGE = 0x00;
  TMOD = TMOD_T0M__MODE2 | TMOD_T1M__MODE2 | TMOD_CT0__TIMER
      | TMOD_GATE0__DISABLED | TMOD_CT1__TIMER | TMOD_GATE1__DISABLED;
  // [TMOD - Timer 0/1 Mode]$

  // $[TCON - Timer 0/1 Control]
  // [TCON - Timer 0/1 Control]$

}

//================================================================================
// SPI_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
SPI_0_enter_DefaultMode_from_RESET (void)
{
  // $[SPI0CKR - SPI0 Clock Rate]
  /***********************************************************************
   - SPI0 Clock Rate = 0x0B
   ***********************************************************************/
  SPI0CKR = (0x0B << SPI0CKR_SPI0CKR__SHIFT);
  // [SPI0CKR - SPI0 Clock Rate]$

  // $[SPI0CFG - SPI0 Configuration]
  /***********************************************************************
   - Enable master mode. Operate as a master
   ***********************************************************************/
  SPI0CFG |= SPI0CFG_MSTEN__MASTER_ENABLED;
  // [SPI0CFG - SPI0 Configuration]$

  // $[SPI0CN0 - SPI0 Control]
  /***********************************************************************
   - Enable the SPI module
   - 3-Wire Slave or 3-Wire Master Mode
   ***********************************************************************/
  SPI0CN0 &= ~SPI0CN0_NSSMD__FMASK;
  SPI0CN0 |= SPI0CN0_SPIEN__ENABLED;
  // [SPI0CN0 - SPI0 Control]$

}

//================================================================================
// INTERRUPT_0_enter_DefaultMode_from_RESET
//================================================================================
extern void
INTERRUPT_0_enter_DefaultMode_from_RESET (void)
{
  // $[EIE1 - Extended Interrupt Enable 1]
  /***********************************************************************
   - Disable ADC0 Conversion Complete interrupt
   - Disable ADC0 Window Comparison interrupt
   - Disable CP0 interrupts
   - Disable CP1 interrupts
   - Disable all PCA0 interrupts
   - Disable all SMB0 interrupts
   - Enable interrupt requests generated by the TF3L or TF3H flags
   - Disable all USB0 interrupts
   ***********************************************************************/
  EIE1 = EIE1_EADC0__DISABLED | EIE1_EWADC0__DISABLED | EIE1_ECP0__DISABLED
      | EIE1_ECP1__DISABLED | EIE1_EPCA0__DISABLED | EIE1_ESMB0__DISABLED
      | EIE1_ET3__ENABLED | EIE1_EUSB0__DISABLED;
  // [EIE1 - Extended Interrupt Enable 1]$

  // $[EIP1 - Extended Interrupt Priority 1]
  // [EIP1 - Extended Interrupt Priority 1]$

  // $[IE - Interrupt Enable]
  /***********************************************************************
   - Enable each interrupt according to its individual mask setting
   - Enable interrupt requests generated by the INT0 input
   - Enable interrupt requests generated by the INT1 input
   - Enable interrupt requests generated by SPI0
   - Disable all Timer 0 interrupt
   - Disable all Timer 1 interrupt
   - Enable interrupt requests generated by the TF2L or TF2H flags
   - Disable UART0 interrupt
   ***********************************************************************/
  IE = IE_EA__ENABLED | IE_EX0__ENABLED | IE_EX1__ENABLED | IE_ESPI0__ENABLED
      | IE_ET0__DISABLED | IE_ET1__DISABLED | IE_ET2__ENABLED
      | IE_ES0__DISABLED;
  // [IE - Interrupt Enable]$

  // $[IP - Interrupt Priority]
  // [IP - Interrupt Priority]$

  // $[EIE2 - Extended Interrupt Enable 2]
  // [EIE2 - Extended Interrupt Enable 2]$

  // $[EIP2 - Extended Interrupt Priority 2]
  // [EIP2 - Extended Interrupt Priority 2]$

}

extern void
CIP51_0_enter_DefaultMode_from_RESET (void)
{

  // $[PFE0CN - Prefetch Engine Control]
  /***********************************************************************
   - Each byte of a firmware flash write is written individually
   - Disable the prefetch engine 
   ***********************************************************************/
  PFE0CN = PFE0CN_FLBWE__BLOCK_WRITE_DISABLED | PFE0CN_PFEN__DISABLED;
  // [PFE0CN - Prefetch Engine Control]$

}

extern void
TIMER01_0_enter_DefaultMode_from_RESET (void)
{
  // $[Timer Initialization]
  //Save Timer Configuration
  uint8_t TCON_save;
  TCON_save = TCON;
  //Stop Timers
  TCON &= ~TCON_TR0__BMASK & ~TCON_TR1__BMASK;

  // [Timer Initialization]$

  // $[TH0 - Timer 0 High Byte]
  /***********************************************************************
   - Timer 0 High Byte = 0xEC
   ***********************************************************************/
  TH0 = (0xEC << TH0_TH0__SHIFT);
  // [TH0 - Timer 0 High Byte]$

  // $[TL0 - Timer 0 Low Byte]
  /***********************************************************************
   - Timer 0 Low Byte = 0xEC
   ***********************************************************************/
  TL0 = (0xEC << TL0_TL0__SHIFT);
  // [TL0 - Timer 0 Low Byte]$

  // $[TH1 - Timer 1 High Byte]
  /***********************************************************************
   - Timer 1 High Byte = 0x98
   ***********************************************************************/
  TH1 = (0x98 << TH1_TH1__SHIFT);
  // [TH1 - Timer 1 High Byte]$

  // $[TL1 - Timer 1 Low Byte]
  /***********************************************************************
   - Timer 1 Low Byte = 0x98
   ***********************************************************************/
  TL1 = (0x98 << TL1_TL1__SHIFT);
  // [TL1 - Timer 1 Low Byte]$

  // $[Timer Restoration]
  //Restore Timer Configuration
  TCON |= (TCON_save & TCON_TR0__BMASK) | (TCON_save & TCON_TR1__BMASK);

  // [Timer Restoration]$

}

extern void
PCACH_3_enter_DefaultMode_from_RESET (void)
{
  // $[PCA0CPM3 - PCA Channel 3 Capture/Compare Mode]
  /***********************************************************************
   - Enable negative edge capture
   - Enable a Capture/Compare Flag interrupt request when CCF3 is set
   - Disable match function
   - 8-bit PWM selected
   - Disable positive edge capture
   - Disable comparator function
   - Disable PWM function
   - Disable toggle function
   ***********************************************************************/
  PCA0CPM3 = PCA0CPM3_CAPN__ENABLED | PCA0CPM3_ECCF__ENABLED
      | PCA0CPM3_MAT__DISABLED | PCA0CPM3_PWM16__8_BIT | PCA0CPM3_CAPP__DISABLED
      | PCA0CPM3_ECOM__DISABLED | PCA0CPM3_PWM__DISABLED
      | PCA0CPM3_TOG__DISABLED;
  // [PCA0CPM3 - PCA Channel 3 Capture/Compare Mode]$

  // $[PCA0CPL3 - PCA Channel 3 Capture Module Low Byte]
  // [PCA0CPL3 - PCA Channel 3 Capture Module Low Byte]$

  // $[PCA0CPH3 - PCA Channel 3 Capture Module High Byte]
  PCA0CPH3 = 0x00;
  // [PCA0CPH3 - PCA Channel 3 Capture Module High Byte]$

  // $[PCA0 Start/Run restore]
  // [PCA0 Start/Run restore]$

}

extern void
TIMER16_2_enter_DefaultMode_from_RESET (void)
{
  // $[Timer Initialization]
  // Save Timer Configuration
  uint8_t TMR2CN0_TR2_save;
  TMR2CN0_TR2_save = TMR2CN0 & TMR2CN0_TR2__BMASK;
  // Stop Timer
  TMR2CN0 &= ~(TMR2CN0_TR2__BMASK);
  // [Timer Initialization]$

  // $[TMR2CN0 - Timer 2 Control]
  // [TMR2CN0 - Timer 2 Control]$

  // $[TMR2H - Timer 2 High Byte]
  /***********************************************************************
   - Timer 2 High Byte = 0x7D
   ***********************************************************************/
  TMR2H = (0x7D << TMR2H_TMR2H__SHIFT);
  // [TMR2H - Timer 2 High Byte]$

  // $[TMR2L - Timer 2 Low Byte]
  /***********************************************************************
   - Timer 2 Low Byte = 0xCB
   ***********************************************************************/
  TMR2L = (0xCB << TMR2L_TMR2L__SHIFT);
  // [TMR2L - Timer 2 Low Byte]$

  // $[TMR2RLH - Timer 2 Reload High Byte]
  /***********************************************************************
   - Timer 2 Reload High Byte = 0x7D
   ***********************************************************************/
  TMR2RLH = (0x7D << TMR2RLH_TMR2RLH__SHIFT);
  // [TMR2RLH - Timer 2 Reload High Byte]$

  // $[TMR2RLL - Timer 2 Reload Low Byte]
  /***********************************************************************
   - Timer 2 Reload Low Byte = 0xCB
   ***********************************************************************/
  TMR2RLL = (0xCB << TMR2RLL_TMR2RLL__SHIFT);
  // [TMR2RLL - Timer 2 Reload Low Byte]$

  // $[TMR2CN0]
  /***********************************************************************
   - Start Timer 2 running
   ***********************************************************************/
  TMR2CN0 |= TMR2CN0_TR2__RUN;
  // [TMR2CN0]$

  // $[Timer Restoration]
  // Restore Timer Configuration
  TMR2CN0 |= TMR2CN0_TR2_save;
  // [Timer Restoration]$

}

extern void
PORTS_3_enter_DefaultMode_from_RESET (void)
{
  // $[P3 - Port 3 Pin Latch]
  /***********************************************************************
   - P3.0 is low. Set P3.0 to drive low
   - P3.1 is low. Set P3.1 to drive low
   - P3.2 is low. Set P3.2 to drive low
   - P3.3 is low. Set P3.3 to drive low
   - P3.4 is low. Set P3.4 to drive low
   - P3.5 is low. Set P3.5 to drive low
   - P3.6 is high. Set P3.6 to drive or float high
   - P3.7 is high. Set P3.7 to drive or float high
   ***********************************************************************/
  P3 = P3_B0__LOW | P3_B1__LOW | P3_B2__LOW | P3_B3__LOW | P3_B4__LOW
      | P3_B5__LOW | P3_B6__HIGH | P3_B7__HIGH;
  // [P3 - Port 3 Pin Latch]$

  // $[P3MDOUT - Port 3 Output Mode]
  /***********************************************************************
   - P3.0 output is push-pull
   - P3.1 output is open-drain
   - P3.2 output is push-pull
   - P3.3 output is open-drain
   - P3.4 output is push-pull
   - P3.5 output is push-pull
   - P3.6 output is open-drain
   - P3.7 output is open-drain
   ***********************************************************************/
  P3MDOUT = P3MDOUT_B0__PUSH_PULL | P3MDOUT_B1__OPEN_DRAIN
      | P3MDOUT_B2__PUSH_PULL | P3MDOUT_B3__OPEN_DRAIN | P3MDOUT_B4__PUSH_PULL
      | P3MDOUT_B5__PUSH_PULL | P3MDOUT_B6__OPEN_DRAIN | P3MDOUT_B7__OPEN_DRAIN;
  // [P3MDOUT - Port 3 Output Mode]$

  // $[P3MDIN - Port 3 Input Mode]
  // [P3MDIN - Port 3 Input Mode]$

  // $[P3SKIP - Port 3 Skip]
  /***********************************************************************
   - P3.0 pin is skipped by the crossbar
   - P3.1 pin is not skipped by the crossbar
   - P3.2 pin is skipped by the crossbar
   - P3.3 pin is not skipped by the crossbar
   - P3.4 pin is not skipped by the crossbar
   - P3.5 pin is not skipped by the crossbar
   - P3.6 pin is not skipped by the crossbar
   - P3.7 pin is not skipped by the crossbar
   ***********************************************************************/
  P3SKIP = P3SKIP_B0__SKIPPED | P3SKIP_B1__NOT_SKIPPED | P3SKIP_B2__SKIPPED
      | P3SKIP_B3__NOT_SKIPPED | P3SKIP_B4__NOT_SKIPPED | P3SKIP_B5__NOT_SKIPPED
      | P3SKIP_B6__NOT_SKIPPED | P3SKIP_B7__NOT_SKIPPED;
  // [P3SKIP - Port 3 Skip]$

}

extern void
PCACH_4_enter_DefaultMode_from_RESET (void)
{
  // $[PCA0CPM4 - PCA Channel 4 Capture/Compare Mode]
  /***********************************************************************
   - Enable negative edge capture
   - Enable a Capture/Compare Flag interrupt request when CCF4 is set
   - Disable match function
   - 8-bit PWM selected
   - Disable positive edge capture
   - Disable comparator function
   - Disable PWM function
   - Disable toggle function
   ***********************************************************************/
  PCA0CPM4 = PCA0CPM4_CAPN__ENABLED | PCA0CPM4_ECCF__ENABLED
      | PCA0CPM4_MAT__DISABLED | PCA0CPM4_PWM16__8_BIT | PCA0CPM4_CAPP__DISABLED
      | PCA0CPM4_ECOM__DISABLED | PCA0CPM4_PWM__DISABLED
      | PCA0CPM4_TOG__DISABLED;
  // [PCA0CPM4 - PCA Channel 4 Capture/Compare Mode]$

  // $[PCA0CPL4 - PCA Channel 4 Capture Module Low Byte]
  // [PCA0CPL4 - PCA Channel 4 Capture Module Low Byte]$

  // $[PCA0CPH4 - PCA Channel 4 Capture Module High Byte]
  PCA0CPH4 = 0x00;
  // [PCA0CPH4 - PCA Channel 4 Capture Module High Byte]$

  // $[PCA0 Start/Run restore]
  // [PCA0 Start/Run restore]$

}

extern void
TIMER16_4_enter_DefaultMode_from_RESET (void)
{
  // $[Timer Initialization]
  // Save Timer Configuration
  uint8_t TMR4CN0_TR4_save;
  SFRPAGE = 0x0F;
  TMR4CN0_TR4_save = TMR4CN0 & TMR4CN0_TR4__BMASK;
  // Stop Timer
  TMR4CN0 &= ~(TMR4CN0_TR4__BMASK);
  // [Timer Initialization]$

  // $[TMR4CN0 - Timer 4 Control]
  // [TMR4CN0 - Timer 4 Control]$

  // $[TMR4H - Timer 4 High Byte]
  // [TMR4H - Timer 4 High Byte]$

  // $[TMR4L - Timer 4 Low Byte]
  // [TMR4L - Timer 4 Low Byte]$

  // $[TMR4RLH - Timer 4 Reload High Byte]
  // [TMR4RLH - Timer 4 Reload High Byte]$

  // $[TMR4RLL - Timer 4 Reload Low Byte]
  // [TMR4RLL - Timer 4 Reload Low Byte]$

  // $[TMR4CN0]
  // [TMR4CN0]$

  // $[Timer Restoration]
  // Restore Timer Configuration
  TMR4CN0 |= TMR4CN0_TR4_save;
  // [Timer Restoration]$

}

extern void
TIMER16_5_enter_DefaultMode_from_RESET (void)
{
  // $[Timer Initialization]
  // Save Timer Configuration
  uint8_t TMR5CN0_TR5_save;
  TMR5CN0_TR5_save = TMR5CN0 & TMR5CN0_TR5__BMASK;
  // Stop Timer
  TMR5CN0 &= ~(TMR5CN0_TR5__BMASK);
  // [Timer Initialization]$

  // $[TMR5CN0 - Timer 5 Control]
  // [TMR5CN0 - Timer 5 Control]$

  // $[TMR5H - Timer 5 High Byte]
  // [TMR5H - Timer 5 High Byte]$

  // $[TMR5L - Timer 5 Low Byte]
  // [TMR5L - Timer 5 Low Byte]$

  // $[TMR5RLH - Timer 5 Reload High Byte]
  // [TMR5RLH - Timer 5 Reload High Byte]$

  // $[TMR5RLL - Timer 5 Reload Low Byte]
  // [TMR5RLL - Timer 5 Reload Low Byte]$

  // $[TMR5CN0]
  // [TMR5CN0]$

  // $[Timer Restoration]
  // Restore Timer Configuration
  TMR5CN0 |= TMR5CN0_TR5_save;
  // [Timer Restoration]$

}

extern void
EXTINT_0_enter_DefaultMode_from_RESET (void)
{
  // $[IT01CF - INT0/INT1 Configuration]
  /***********************************************************************
   - INT0 input is active low
   - Select P0.2
   - INT1 input is active low
   - Select P0.3
   ***********************************************************************/
  IT01CF = IT01CF_IN0PL__ACTIVE_LOW | IT01CF_IN0SL__P0_2
      | IT01CF_IN1PL__ACTIVE_LOW | IT01CF_IN1SL__P0_3;
  // [IT01CF - INT0/INT1 Configuration]$

}

