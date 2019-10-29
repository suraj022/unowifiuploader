UNOwifi uploader
================

 Simple command-line utility to upload sketches over the air to arduino Uno. this tool works with ESP-link firmware running on esp8266 wifi microcontroller.
 
 This tool exist because network ports in arduino IDE don't always appear. this tool can be used to manually specify the IP address and upload the sketches to the said network port.

### Requirements
 - Git bash
 - Arduino IDE (latest)

### Usage
 Execute the following command in git bash to perform compile and upload
```
./avrflash <IP ADDRESS> <SKETCH.ino>

```
 Example

```
./avrflash 192.168.4.1 blink.ino

```

### Future plans
 - Create some sort of GUI.
 - Create an Installable setup which creates environment paths for the executables
 - Create a plugin for a third party IDE like vscode, atom, etc.
 - etc.
 
### CREDITS
 - Arduino command line tool picked up from (https://github.com/arduino/arduino-cli)
 - avrflash utility originally from ESP-link by @jeelabs (https://github.com/jeelabs/esp-link)
