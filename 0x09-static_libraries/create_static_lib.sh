#!/bin/bash
find . -maxdepth 1 -type f -name '*.o' -exec ar -rc liball.a {} +
