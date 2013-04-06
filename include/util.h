#ifndef __CURVECPR_UTIL_H
#define __CURVECPR_UTIL_H

long long curvecpr_util_random_mod_n (long long n);
long long curvecpr_util_nanoseconds (void);
int curvecpr_util_encode_domain_name (unsigned char *destination, const char *source);

#endif
