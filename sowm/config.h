#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

const char* menu[]    = {"rofi", "-show", "run",      0};
const char* term[]    = {"kitty",             0};
const char* scrot[]   = {"gnome-screenshot",            0};
const char* secrot[]   = {"gnome-screenshot", "-a",            0};
const char* briup[]   = {"xbacklight", "+", "2", 0};
const char* bridown[] = {"xbacklight", "-", "2", 0};
const char* voldown[] = {"amixer", "sset", "Master", "5%-",         0};
const char* volup[]   = {"amixer", "sset", "Master", "5%+",         0};
const char* volmute[] = {"amixer", "sset", "Master", "toggle",      0};
const char* fmenu[]    = {"rofi", "-show", "drun", "-theme", "/home/irfannm/.config/rofi/config.rasi",      0};
const char* quit[]     = {"pkill", "sowm", 0};
const char* bar[]     = {"dash", "/home/irfannm/.config/polybar/launch.sh", 0};
const char* qbar[]     = {"killall", "-q", "polybar", 0};

static struct key keys[] = {
    {MOD,      XK_q,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},

    {MOD,           XK_Tab, win_next,   {0}},
    {MOD|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_d,      run, {.com = menu}},
    {MOD, XK_p,      run, {.com = scrot}},
    {MOD|ShiftMask, XK_p,      run, {.com = secrot}},
    {MOD, XK_Return, run, {.com = term}},
    {MOD, XK_space, run, {.com = fmenu}},
    {MOD|ShiftMask, XK_q, run, {.com = quit}},
    {MOD, XK_b,      run, {.com = bar}},
    {MOD|ShiftMask, XK_b,      run, {.com = qbar}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {0,   XF86XK_MonBrightnessUp,   run, {.com = briup}},
    {0,   XF86XK_MonBrightnessDown, run, {.com = bridown}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif
