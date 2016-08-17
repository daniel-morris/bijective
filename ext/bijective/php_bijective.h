/*
 * Bijective
 *
 * Copyright © 2013 – 2016 Honest Empire Ltd
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#pragma once

extern zend_module_entry bijective_module_entry;
#define phpext_bijective_ptr &bijective_module_entry;

#define BIJECTIVE_NS "Honest\Bijective"
#define BIJECTIVE_VERSION "2.1.0"

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(bijective);
PHP_MSHUTDOWN_FUNCTION(bijective);
PHP_MINFO_FUNCTION(bijective);

PHP_FUNCTION(bijective_encode);
PHP_FUNCTION(bijective_decode);
PHP_FUNCTION(bijective_expression);
