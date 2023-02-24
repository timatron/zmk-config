// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)
#define U_STRINGIFY(x) #x

#define U_NP &none // key is not present
#define U_NA &none // present but not available for use
#define U_NU &none // available but not used

#define U_TAPPING_TERM 300

#define U_RDO &kp LS(LG(Z))
#define U_PST &kp LG(V)
#define U_CPY &kp LG(C)
#define U_CUT &kp LG(X)
#define U_UND &kp LG(Z)

#define U_MT(MOD, TAP) &u_mt MOD TAP
#define U_LT(LAYER, TAP) &u_lt LAYER TAP
#define U_LTCAP(LAYER, TAP) &u_ltcap LAYER TAP

#define U_BASE   0
#define U_NAV    1
#define U_NUM    2
#define U_SYM    3
