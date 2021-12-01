# AVR8 fake app
This fake application is used to test the CMakeAS7 version implementation and check that links and flags follow the right treatment.
It is only a very basic application that essentially does nothing.

# Configure/build
Using the latest revision of [CMakeAS7](https://github.com/bebenlebricolo/CMakeAS7) project at hands (an extracted .zip archive will do), open a command prompt (git bash, Windows Terminal, etc.) and run those commands :
```bash
mkdir build
cd build
<path to CMakeAS7 binary> ../ -G "Atmel Studio 7.0"
```
Then wait for the project to be configured ...
> **Note that it can take some seconds, and as CMakeAS7 essentially "pings" the AtmelStudio7 installation in command line mode, it sometimes hangs and needs a good ctrl+c and restart to go on**

Once the project is configured, we can either :
* Load the project with an instance of Atmel Studio 7
* Look into the *.cproj and *.atsln files for manual inspection