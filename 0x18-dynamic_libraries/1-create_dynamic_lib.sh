#!/bin/bash
gcc -fPIC -c *c ; ar rc *.a *o -o liball.so
