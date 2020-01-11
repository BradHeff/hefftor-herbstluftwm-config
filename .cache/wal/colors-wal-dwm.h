static const char norm_fg[] = "#dfe0e3";
static const char norm_bg[] = "#0a0c0d";
static const char norm_border[] = "#9c9c9e";

static const char sel_fg[] = "#dfe0e3";
static const char sel_bg[] = "#6D6D71";
static const char sel_border[] = "#dfe0e3";

static const char urg_fg[] = "#dfe0e3";
static const char urg_bg[] = "#5B5E64";
static const char urg_border[] = "#5B5E64";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
