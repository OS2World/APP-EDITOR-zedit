#include "zedit.h"

void  dsplib2(
              union both_scr  *posptr,
              char  ln[],
              int  line_no,
              char  dots[] [14])
/**********************************************************************/
/*                                                                    */
/* Copy into screen position a line of text - IBM2.                   */
/*                                                                    */
/**********************************************************************/
/*                                                                    */
/* This is ZEDIT source material.                                     */
/*                                                                    */
/* ZEDIT Source Materials are intellectual property                   */
/*     (c) Copyright 1987,2001 by Clyde Thomas Zuber.                 */
/*                                                                    */
/**********************************************************************/
{
register int  tab;
register int  c; /* col   */
register int  d; /* down  */
register int  e; /* down+ */


for (d = -2, e = 0;  e < 19;  ++d, ++e)
    for (c = 0, tab = 0;  tab < 90;  ++tab)
        if (d < 0  ||  d > 13)
            posptr -> i2.i2scr[line_no] [e] [tab] = 0x00u;
        else
            switch(tab % 9)
                {
                case 0:
                    posptr -> i2.i2scr[line_no] [e] [tab] =
                        (char) (dots[ln[c]] [d] >> 1u);
                    ++c;
                    break;
                case 1:
                    posptr -> i2.i2scr[line_no] [e] [tab] =
                        (char) (dots[ln[c-1]] [d] << 7u) |
                        (char) (dots[ln[c]] [d] >> 2u);
                    ++c;
                    break;
                case 2:
                    posptr -> i2.i2scr[line_no] [e] [tab] =
                        (char) (dots[ln[c-1]] [d] << 6u) |
                        (char) (dots[ln[c]] [d] >> 3u);
                    ++c;
                    break;
                case 3:
                    posptr -> i2.i2scr[line_no] [e] [tab] =
                        (char) (dots[ln[c-1]] [d] << 5u) |
                        (char) (dots[ln[c]] [d] >> 4u);
                    ++c;
                    break;
                case 4:
                    posptr -> i2.i2scr[line_no] [e] [tab] =
                        (char) (dots[ln[c-1]] [d] << 4u) |
                        (char) (dots[ln[c]] [d] >> 5u);
                    ++c;
                    break;
                case 5:
                    posptr -> i2.i2scr[line_no] [e] [tab] =
                        (char) (dots[ln[c-1]] [d] << 3u) |
                        (char) (dots[ln[c]] [d] >> 6u);
                    ++c;
                    break;
                case 6:
                    posptr -> i2.i2scr[line_no] [e] [tab] =
                        (char) (dots[ln[c-1]] [d] << 2u) |
                        (char) (dots[ln[c]] [d] >> 7u);
                    break;
                case 7:
                    posptr -> i2.i2scr[line_no] [e] [tab] =
                        (char) (dots[ln[c]] [d] << 1u);
                    ++c;
                    break;
                case 8:
                    posptr -> i2.i2scr[line_no] [e] [tab] =
                        dots[ln[c]] [d];
                    ++c;
                    break;
                } /* end switch */

} /* end dsplib2 */
