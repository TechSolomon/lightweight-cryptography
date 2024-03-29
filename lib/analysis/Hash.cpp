 /*
  * Copyright (C) 2015 Southern Storm Software, Pty Ltd.
  *
  * Permission is hereby granted, free of charge, to any person obtaining a
  * copy of this software and associated documentation files (the "Software"),
  * to deal in the Software without restriction, including without limitation
  * the rights to use, copy, modify, merge, publish, distribute, sublicense,
  * and/or sell copies of the Software, and to permit persons to whom the
  * Software is furnished to do so, subject to the following conditions:
  *
  * The above copyright notice and this permission notice shall be included
  * in all copies or substantial portions of the Software.
  *
  * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
  * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
  * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
  * DEALINGS IN THE SOFTWARE.
  */

 #include "Hash.h"
 #include <string.h>

 Hash::Hash()
 {
 }

 Hash::~Hash()
 {
 }

 void Hash::formatHMACKey(void *block, const void *key, size_t len, uint8_t pad)
 {
     size_t size = blockSize();
     reset();
     if (len <= size) {
         memcpy(block, key, len);
     } else {
         update(key, len);
         len = hashSize();
         finalize(block, len);
         reset();
     }
     uint8_t *b = (uint8_t *)block;
     memset(b + len, pad, size - len);
     while (len > 0) {
         *b++ ^= pad;
         --len;
     }
 }
