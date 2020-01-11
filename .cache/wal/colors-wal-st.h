const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0c0d", /* black   */
  [1] = "#5B5E64", /* red     */
  [2] = "#6D6D71", /* green   */
  [3] = "#797985", /* yellow  */
  [4] = "#7F8487", /* blue    */
  [5] = "#9B9CA1", /* magenta */
  [6] = "#B6BAC8", /* cyan    */
  [7] = "#dfe0e3", /* white   */

  /* 8 bright colors */
  [8]  = "#9c9c9e",  /* black   */
  [9]  = "#5B5E64",  /* red     */
  [10] = "#6D6D71", /* green   */
  [11] = "#797985", /* yellow  */
  [12] = "#7F8487", /* blue    */
  [13] = "#9B9CA1", /* magenta */
  [14] = "#B6BAC8", /* cyan    */
  [15] = "#dfe0e3", /* white   */

  /* special colors */
  [256] = "#0a0c0d", /* background */
  [257] = "#dfe0e3", /* foreground */
  [258] = "#dfe0e3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
