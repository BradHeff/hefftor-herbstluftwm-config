const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#181b33", /* black   */
  [1] = "#C37C83", /* red     */
  [2] = "#AA8D90", /* green   */
  [3] = "#E0A99C", /* yellow  */
  [4] = "#F3D0B5", /* blue    */
  [5] = "#92B4CD", /* magenta */
  [6] = "#9FC0D3", /* cyan    */
  [7] = "#cedce1", /* white   */

  /* 8 bright colors */
  [8]  = "#909a9d",  /* black   */
  [9]  = "#C37C83",  /* red     */
  [10] = "#AA8D90", /* green   */
  [11] = "#E0A99C", /* yellow  */
  [12] = "#F3D0B5", /* blue    */
  [13] = "#92B4CD", /* magenta */
  [14] = "#9FC0D3", /* cyan    */
  [15] = "#cedce1", /* white   */

  /* special colors */
  [256] = "#181b33", /* background */
  [257] = "#cedce1", /* foreground */
  [258] = "#cedce1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
