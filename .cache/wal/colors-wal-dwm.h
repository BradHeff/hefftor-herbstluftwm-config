static const char norm_fg[] = "#cedce1";
static const char norm_bg[] = "#181b33";
static const char norm_border[] = "#909a9d";

static const char sel_fg[] = "#cedce1";
static const char sel_bg[] = "#AA8D90";
static const char sel_border[] = "#cedce1";

static const char urg_fg[] = "#cedce1";
static const char urg_bg[] = "#C37C83";
static const char urg_border[] = "#C37C83";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
