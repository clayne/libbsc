/*-----------------------------------------------------------*/
/* Block Sorting, Lossless Data Compression Library.         */
/* Interface to Sort Transform                               */
/*-----------------------------------------------------------*/

/*--

This file is a part of bsc and/or libbsc, a program and a library for
lossless, block-sorting data compression.

   Copyright (c) 2009-2024 Ilya Grebnov <ilya.grebnov@gmail.com>

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

Please see the file LICENSE for full copyright information and file AUTHORS
for full list of contributors.

See also the bsc and libbsc web site:
  http://libbsc.com/ for more information.

--*/

#ifndef _LIBBSC_ST_H
#define _LIBBSC_ST_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef LIBBSC_NO_SORT_TRANSFORM

    /**
    * You should call this function before you call any of the other functions in st.
    * @param features   - the set of additional features.
    * @return LIBBSC_NO_ERROR if no error occurred, error code otherwise.
    */
    int bsc_st_init(int features);

    /**
    * Constructs the Sort Transform of order k transformed string of a given string.
    * @param T          - the input/output string of n chars.
    * @param n          - the length of the given string.
    * @param k[3..8]    - the order of Sort Transform.
    * @param features   - the set of additional features.
    * @return the primary index if no error occurred, error code otherwise.
    */
    int bsc_st_encode(unsigned char * T, int n, int k, int features);

    /**
    * Reconstructs the original string from Sort Transform of order k transformed string.
    * @param T          - the input/output string of n chars.
    * @param n          - the length of the given string.
    * @param k[3..8]    - the order of Sort Transform.
    * @param index      - the primary index.
    * @param features   - the set of additional features.
    * @return LIBBSC_NO_ERROR if no error occurred, error code otherwise.
    */
    int bsc_st_decode(unsigned char * T, int n, int k, int index, int features);

#endif

#ifdef __cplusplus
}
#endif

#endif

/*-----------------------------------------------------------*/
/* End                                                  st.h */
/*-----------------------------------------------------------*/
