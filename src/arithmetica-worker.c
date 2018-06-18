/******************************************************************************
 * Arithmetica
 * Copyright (c) 2018 Arithmetica, All Rights Reserved.
 *
 * Contribute at https://arithmetica.network
 * Check us out on Github. https://github.com/arithm3tica
 *
 ******************************************************************************
 * This project is licensed under the MIT License.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a 
 *  copy of this software and associated documentation files (the "Software"), 
 *  to deal in the Software without restriction, including without limitation
 *  the rights to use, copy, modify, merge, publish, distribute, sublicense, 
 *  and/or sell copies of the Software, and to permit persons to whom the 
 *  Software is furnished to do so, subject to the following conditions:
 * 
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 * 
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *  DEALINGS IN THE SOFTWARE.
 *
 ******************************************************************************
 * Arithmetica Work Engine
 * 
 * Description Here
 *
 *****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>

void testWorker();
void doWork(int*, int);

void doWork(int *values, int count)
{
    int i=0;
    while(i < count)
    {
        testWorker(values[i]);
        ++i;
    }

    return;
}

void testWorker(int value)
{
    printf("%d\n", value);
    return;
}

//This main function will go away when the worker is compiled as a 
//dynamically-linked library. This is just here for testing in the interim.
int main(int argc, char **argv)
{
    int values[10];
    for(int i = 0; i < (sizeof(values)/sizeof(int)); ++i)
    {
        values[i]=i;
    }

    doWork(values, 10);

    return 0;
}
