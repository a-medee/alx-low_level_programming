#!/bin/bash
gcc -fPIC -c *c ; gcc -shared *.a *o -o liball.so
