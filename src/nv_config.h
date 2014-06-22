#ifndef __NV_CONFIG_H
#define __NV_CONFIG_H

#ifdef __GNUC__
// gcc
#ifdef __SSE2__
#define NV_ENABLE_SSE2   1  // SSE2を使うか
#else
#define NV_ENABLE_SSE2   0
#endif

#else
// VC++
#define NV_ENABLE_SSE2   1  // SSE2を使うか

#endif
#endif
