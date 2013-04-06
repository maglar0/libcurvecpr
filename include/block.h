#ifndef __CURVECPR_BLOCK_H
#define __CURVECPR_BLOCK_H

#include <string.h>

#include <sodium/crypto_uint32.h>
#include <sodium/crypto_uint64.h>

struct curvecpr_block {
    /* This message's ID. */
    crypto_uint32 id;

    /* When this message was actually sent/received. (0 means not sent.) */
    long long clock;

    /* The position of this block in the stream. */
    crypto_uint64 offset;

    /* Is this block an EOF indicator? */
    enum {
        CURVECPR_BLOCK_STREAM,
        CURVECPR_BLOCK_EOF_FAILURE,
        CURVECPR_BLOCK_EOF_SUCCESS
    } eof;

    /* The actual data. */
    size_t data_len;
    unsigned char data[1024];
};

#endif
