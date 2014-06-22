#ifndef __NV_CONFIG_H
#define __NV_CONFIG_H

#ifdef __GNUC__
// gcc
#define NV_ENABLE_CLOCK  0  // nv_clockを使うか
#define NV_ENABLE_SLEEP  0  // nv_sleepを使うか
#ifdef __SSE2__
#define NV_ENABLE_SSE2   1  // SSE2を使うか
#else
#define NV_ENABLE_SSE2   0
#endif

#else
// VC++
#define NV_ENABLE_CLOCK  1  // nv_clockを使うか
#define NV_ENABLE_SLEEP  1  // nv_sleepを使うか
#define NV_ENABLE_SSE2   1  // SSE2を使うか

#endif
#endif
