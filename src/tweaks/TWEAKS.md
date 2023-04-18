## Creating tweaks

To create the tweak using a pre made template run the following command, `pie tweak create -n "tweak name"` it should create a "tweak name".c.

**The tweaks are made in c**

## Using the tweak helper

To make your life easier as a tweak developer you can use the provided header files [here](https://github.com/KevinAlavik/chrome-pie/tree/main/src/lib/tweak-helpers)

## Manually

To create a tweak for chrome pie start by coming up with a name, we will use `hello-mom` as an example. When you have a name create an file called `hello-mom.c` (replace hello-mom with your tweak name). Then you need to create these functions, the main loop will load the tweak so dont put aything else in there (if you dont know what your doing since this can break things). Then in the load function the main tweak loop gets called, you dont really need to add anything in there exept the tweak() function exept maybe an "Loaded tweak" message. Then in the tweak() function the actuall tweak will run. Here in the example i use the `alert()` function and for that you need the [chromeos header file i made](https://github.com/KevinAlavik/chrome-pia/tree/main/src/lib/chromeos.h). That header file helps with stuff likes displaying an alert in chromeos. The other two (first) headers is just something C needs.

```c
// hello-mom.c

#include <stdlib.h>
#include <stdio.h>

#include "chromeos.h" 

int main() {
  load();
}

int load() {
  tweak();
  printf("Successfully loaded the tweak!\n")
  return 0;
}

int tweak() {
  alert("Hello mom!");
}

```

## Installing tweaks

**To install a tweak (as a file) run the following command:**

`pie tweak install filePath tweakName`

Demo:

![Gif](https://user-images.githubusercontent.com/95900603/231803036-f2598024-1e9f-4d68-b135-2f65e8ee5ec9.gif)

**To install a tweak (using url) run the folowing command:**

`pie tweak install url tweakUrl`

## Running the tweaks 

`pie tweak run tweakName`

**Example:**

`pie tweak run demo`

Work in progress
