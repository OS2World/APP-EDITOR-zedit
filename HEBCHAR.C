#include "zedit.h"

/**********************************************************************/
/*                                                                    */
/* Graphic character codes for screen display.  Hebrew character set. */
/*                                                                    */
/**********************************************************************/
/*                                                                    */
/* This is ZEDIT source material.                                     */
/*                                                                    */
/* ZEDIT Source Materials are intellectual property                   */
/*     (c) Copyright 1987,2001 by Clyde Thomas Zuber.                 */
/*                                                                    */
/**********************************************************************/

#ifdef DATASEG
#pragma data_seg(ZEDRODAT)
#endif

char  hebchar[128] [14] =
/* NUL   */ {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'00'   */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*       */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'01'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*       */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'02'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*       */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'03'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*       */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'04'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*       */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'05'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*       */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'06'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* BEL   */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'07'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* BS    */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'08'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* HT    */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'09'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* LF    */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'0A'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* VT    */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'0B'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* FF    */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'0C'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*PSundef*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'0D'   */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*qame_rt*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'0E'   */
              0x00, 0x00, 0x00, 0x00, 0x07, 0x02, 0x02},

/*qam_krt*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'0F'   */
              0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x02},

/*segh_rt*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'10'   */
              0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x04},

/*path_rt*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'11'   */
              0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00},

/*sere_rt*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'12'   */
              0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00},

/*hire_rt*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'13'   */
              0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00},

/*RESRVED*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'14'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* dag71 */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,   /* x'15'   */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* dag72 */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,   /* x'16'   */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* dag74 */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10,   /* x'17'   */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* dag75 */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,   /* x'18'   */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* dag76 */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,   /* x'19'   */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*RESRVED*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'1A'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* ESC   */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'1B'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*shew_up*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,   /* x'1C'   */
              0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00},

/*qame_up*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70,   /* x'1D'   */
              0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00},

/*holem26*/  {0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'1E'   */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*qibb_rt*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'1F'   */
              0x00, 0x00, 0x00, 0x00, 0x04, 0x02, 0x01},

/* space */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'20'   */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*     ! */  {0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,   /* x'21' ! */
              0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00},

/*     " */  {0x00, 0x48, 0x48, 0x48, 0x00, 0x00, 0x00,   /* x'22' " */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*salselt*/  {0x18, 0x10, 0x38, 0x00, 0x00, 0x00, 0x00,   /* x'23' # */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* darga */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'24' $ */
              0x00, 0x00, 0x00, 0x60, 0x80, 0x60, 0xC0},

/*paz mag*/  {0x44, 0xAA, 0x6C, 0x10, 0x00, 0x00, 0x00,   /* x'25' % */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* azla  */  {0x40, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00,   /* x'26' & */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* aleph */  {0x00, 0x00, 0x00, 0xC6, 0x66, 0x34, 0x38,   /* x'27' ' */
              0x58, 0xCC, 0xC6, 0x00, 0x00, 0x00, 0x00},

/*     ( */  {0x00, 0x00, 0x08, 0x10, 0x20, 0x20, 0x20,   /* x'28' ( */
              0x20, 0x20, 0x10, 0x08, 0x00, 0x00, 0x00},

/*     ) */  {0x00, 0x00, 0x20, 0x10, 0x08, 0x08, 0x08,   /* x'29' ) */
              0x08, 0x08, 0x10, 0x20, 0x00, 0x00, 0x00},

/*     * */  {0x00, 0x00, 0x10, 0x92, 0x54, 0x28, 0x54,   /* x'2A' * */
              0x92, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00},

/* pazer */  {0x20, 0x38, 0x20, 0x00, 0x00, 0x00, 0x00,   /* x'2B' + */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*     , */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'2C' , */
              0x00, 0x00, 0x18, 0x18, 0x30, 0x60, 0x00},

/*maqqeph*/  {0x00, 0x00, 0x00, 0xFC, 0x7E, 0x00, 0x00,   /* x'2D' - */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*     . */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'2E' . */
              0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00},

/*     / */  {0x00, 0x00, 0x00, 0x02, 0x04, 0x08, 0x10,   /* x'2F' / */
              0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00},

/*     0 */  {0x00, 0x38, 0x44, 0x82, 0x82, 0x92, 0x92,   /* x'30' 0 */
              0x82, 0x82, 0x44, 0x38, 0x00, 0x00, 0x00},

/*     1 */  {0x00, 0x10, 0x30, 0x50, 0x10, 0x10, 0x10,   /* x'31' 1 */
              0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00},

/*     2 */  {0x00, 0x3C, 0x42, 0x82, 0x02, 0x04, 0x08,   /* x'32' 2 */
              0x10, 0x20, 0x40, 0xFE, 0x00, 0x00, 0x00},

/*     3 */  {0x00, 0x7E, 0x02, 0x04, 0x08, 0x18, 0x04,   /* x'33' 3 */
              0x02, 0x02, 0x84, 0x78, 0x00, 0x00, 0x00},

/*     4 */  {0x00, 0x0C, 0x14, 0x24, 0x44, 0x84, 0x84,   /* x'34' 4 */
              0xFE, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00},

/*     5 */  {0x00, 0xFE, 0x80, 0x80, 0xF8, 0x04, 0x02,   /* x'35' 5 */
              0x02, 0x02, 0x04, 0xF8, 0x00, 0x00, 0x00},

/*     6 */  {0x00, 0x20, 0x40, 0x80, 0x80, 0xB8, 0xC4,   /* x'36' 6 */
              0x82, 0x82, 0x44, 0x38, 0x00, 0x00, 0x00},

/*     7 */  {0x00, 0xFE, 0x02, 0x04, 0x08, 0x10, 0x20,   /* x'37' 7 */
              0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00},

/*     8 */  {0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 0x44,   /* x'38' 8 */
              0x82, 0x82, 0x44, 0x38, 0x00, 0x00, 0x00},

/*     9 */  {0x00, 0x3C, 0x42, 0x82, 0x86, 0x8A, 0x72,   /* x'39' 9 */
              0x02, 0x02, 0x02, 0x04, 0x00, 0x00, 0x00},

/*s_pasuq*/  {0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00,   /* x'3A' : */
              0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00},

/* shewa */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'3B' ; */
              0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02},

/*mahpak */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'3C' < */
              0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x10},

/*     = */  {0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00,   /* x'3D' = */
              0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00},

/* yetib */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'3E' > */
              0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01},

/*     ? */  {0x00, 0x3C, 0x42, 0x42, 0x04, 0x08, 0x10,   /* x'3F' ? */
              0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00},

/*     @ */  {0x00, 0x7C, 0x82, 0x82, 0x9A, 0xAA, 0xBC,   /* x'40' @ */
              0x80, 0x80, 0x80, 0x7E, 0x00, 0x00, 0x00},

/* qames */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'41' A */
              0x00, 0x00, 0x00, 0x00, 0x70, 0x20, 0x20},

/*mahpkat*/  {0x10, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00,   /* x'42' B */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*kaphtrm*/  {0x00, 0x00, 0x00, 0xFE, 0xFE, 0x04, 0x04,   /* x'43' C */
              0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00},

/*seghlta*/  {0x20, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00,   /* x'44' D */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* seghol*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'45' E */
              0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x20},

/* holem */  {0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'46' F */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* geres */  {0x08, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00,   /* x'47' G */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*garsyim*/  {0x24, 0x48, 0x90, 0x00, 0x00, 0x00, 0x00,   /* x'48' H */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*silluq */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'49' I */
              0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10},

/* rebia */  {0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00,   /* x'4A' J */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* zaqef */  {0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00,   /* x'4B' K */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*zaqfmag*/  {0x50, 0x40, 0x50, 0x00, 0x00, 0x00, 0x00,   /* x'4C' L */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* memtrm*/  {0x00, 0x00, 0x00, 0xFE, 0xFE, 0x42, 0x82,   /* x'4D' M */
              0x82, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00},

/* nuntrm*/  {0x00, 0x00, 0x00, 0x38, 0x38, 0x08, 0x08,   /* x'4E' N */
              0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00},

/*qam_kat*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'4F' O */
              0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x20},

/* petrm */  {0x00, 0x00, 0x00, 0xFC, 0xFE, 0x82, 0xE2,   /* x'50' P */
              0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00},

/*kepula */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'51' Q */
              0x00, 0x00, 0x00, 0x00, 0x40, 0x90, 0x20},

/*mereka */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'52' R */
              0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x40},

/* sin   */  {0x00, 0xC0, 0x00, 0xDB, 0xDB, 0x91, 0x91,   /* x'53' S */
              0xA3, 0xFE, 0x7C, 0x00, 0x00, 0x00, 0x00},

/* tipha */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'54' T */
              0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 0x10},

/* munah */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'55' U */
              0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x70},

/* galgal*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'56' V */
              0x00, 0x00, 0x00, 0x00, 0x50, 0x20, 0x00},

/* illuj */  {0x08, 0x08, 0x38, 0x00, 0x00, 0x00, 0x00,   /* x'57' W */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*sadhetr*/  {0x00, 0x00, 0x00, 0x6C, 0x6C, 0x28, 0x30,   /* x'58' X */
              0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00},

/* tebir */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'59' Y */
              0x00, 0x00, 0x00, 0x00, 0x90, 0x20, 0x40},

/* dehi  */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'5A' Z */
              0x00, 0x00, 0x00, 0x00, 0x04, 0x02, 0x01},

/*     [ */  {0x00, 0x00, 0x38, 0x20, 0x20, 0x20, 0x20,   /* x'5B' [ */
              0x20, 0x20, 0x20, 0x38, 0x00, 0x00, 0x00},

/*     ; */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18,   /* x'5C' \ */
              0x00, 0x00, 0x18, 0x18, 0x30, 0x60, 0x00},

/*     ] */  {0x00, 0x00, 0x38, 0x08, 0x08, 0x08, 0x08,   /* x'5D' ] */
              0x08, 0x08, 0x08, 0x38, 0x00, 0x00, 0x00},

/* atnah */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'5E' ^ */
              0x00, 0x00, 0x00, 0x00, 0x20, 0x50, 0x00},

/* raphe */  {0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'5F' _ */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* quote */  {0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00,   /* x'60' ` */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* pathah*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'61' a */
              0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00},

/* beth  */  {0x00, 0x00, 0x00, 0xF8, 0xFC, 0x04, 0x04,   /* x'62' b */
              0x04, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00},

/* kaph  */  {0x00, 0x00, 0x00, 0xFC, 0xFE, 0x02, 0x02,   /* x'63' c */
              0x02, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00},

/* daleth*/  {0x00, 0x00, 0x00, 0xFE, 0xFE, 0x04, 0x04,   /* x'64' d */
              0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00},

/* sere  */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'65' e */
              0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00},

/* daghes*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,   /* x'66' f */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* gimel */  {0x00, 0x00, 0x00, 0x60, 0x70, 0x10, 0x10,   /* x'67' g */
              0x30, 0x68, 0x68, 0x00, 0x00, 0x00, 0x00},

/* he    */  {0x00, 0x00, 0x00, 0xFE, 0x7E, 0x04, 0x44,   /* x'68' h */
              0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00},

/* hireq */  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'69' i */
              0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00},

/* teth  */  {0x00, 0x00, 0x00, 0xCC, 0xDE, 0xA2, 0x82,   /* x'6A' j */
              0x82, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00},

/* heth  */  {0x00, 0x00, 0x00, 0xFE, 0xFE, 0x44, 0x44,   /* x'6B' k */
              0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00},

/* lamedh*/  {0x20, 0x20, 0x40, 0xFE, 0xFE, 0x02, 0x02,   /* x'6C' l */
              0x04, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00},

/* mem   */  {0x00, 0x00, 0x00, 0x58, 0xFC, 0x42, 0x82,   /* x'6D' m */
              0x82, 0x9E, 0x9E, 0x00, 0x00, 0x00, 0x00},

/* nun   */  {0x00, 0x00, 0x00, 0x38, 0x38, 0x08, 0x08,   /* x'6E' n */
              0x08, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00},

/* samekh*/  {0x00, 0x00, 0x00, 0xF8, 0xFC, 0x42, 0x82,   /* x'6F' o */
              0x82, 0x7C, 0x38, 0x00, 0x00, 0x00, 0x00},

/* pe    */  {0x00, 0x00, 0x00, 0xFC, 0xFE, 0x82, 0xE2,   /* x'70' p */
              0x02, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00},

/* qoph  */  {0x00, 0x00, 0x00, 0xF8, 0xFC, 0x02, 0x82,   /* x'71' q */
              0x8C, 0xB0, 0x80, 0x80, 0x00, 0x00, 0x00},

/* resh  */  {0x00, 0x00, 0x00, 0xFC, 0xFE, 0x02, 0x02,   /* x'72' r */
              0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00},

/* shin  */  {0x00, 0x03, 0x00, 0xDB, 0xDB, 0x91, 0x91,   /* x'73' s */
              0xA3, 0xFE, 0x7C, 0x00, 0x00, 0x00, 0x00},

/* taw   */  {0x00, 0x00, 0x00, 0xFC, 0xFE, 0x42, 0x42,   /* x'74' t */
              0x42, 0x42, 0xC2, 0x00, 0x00, 0x00, 0x00},

/* qibbus*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'75' u */
              0x00, 0x00, 0x00, 0x00, 0x20, 0x10, 0x08},

/* ayin  */  {0x00, 0x00, 0x00, 0x66, 0x66, 0x42, 0x22,   /* x'76' v */
              0x14, 0x78, 0xF0, 0x00, 0x00, 0x00, 0x00},

/* waw   */  {0x00, 0x00, 0x00, 0x30, 0x38, 0x08, 0x08,   /* x'77' w */
              0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00},

/* sadhe */  {0x00, 0x00, 0x00, 0xC6, 0xC6, 0x24, 0x1C,   /* x'78' x */
              0x06, 0x7E, 0xFC, 0x00, 0x00, 0x00, 0x00},

/* yodh  */  {0x00, 0x00, 0x00, 0x30, 0x38, 0x08, 0x08,   /* x'79' y */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* zayin */  {0x00, 0x00, 0x00, 0x78, 0x3C, 0x10, 0x10,   /* x'7A' z */
              0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00},

/* telisa*/  {0x40, 0xA0, 0x60, 0x10, 0x00, 0x00, 0x00,   /* x'7B' { */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* paseq */  {0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08,   /* x'7C' | */
              0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00},

/*tel mag*/  {0x02, 0x05, 0x06, 0x08, 0x00, 0x00, 0x00,   /* x'7D' } */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/* zarqa */  {0x20, 0x50, 0x10, 0x10, 0x00, 0x00, 0x00,   /* x'7E' ~ */
              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

/*RESRVED*/  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* x'7F'   */
              0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};

