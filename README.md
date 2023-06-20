# Colorizing text
## This program easy and fast colorizing your text.
## ----------------------------------------------
## Examples
```c++
#include "colorizing_text.hpp"
using namespace clt;

printf("%s", bg_white(fg_black("SAMAKAKI")).c_str());
```
### On the first plase is a back ground function, on the second plase is a front ground function and on the last plase is a text.
### Also are 2 additionally functions. Fisrt function is a `fet`, This function will be thicken your text. Second function is a `italic`. This function will be italic your text.
```c++
printf("%s", fet("SAMAKAKI").c_str());
printf("%s", italic("SAMAKAKI").c_str());
```
### OR
```c++
printf("%s", fet(bg_white(fg_black("SAMAKAKI"))).c_str());
printf("%s", italic(bg_white(fg_black("SAMAKAKI"))).c_str());
```