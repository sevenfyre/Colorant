
# Colorant

Colorant is an ultra fast Color Aimbot that searches for a purple color range in your screen and aim/shoot at, without interacting with Valorant game memory or files.

As traditional video game cheats is made by reading process memory and different anti-cheats try to detect and block these reads. Color aimbots would take an totally different approach - NO MEMORY READING - this would have the possibility to be undetectable by anti-cheat. Another issue would be that how could we send input to the desired video game without triggering any flags? Main goal of this project is to showcase an POC.

![image](https://user-images.githubusercontent.com/82477000/225608740-5f690006-9cc8-4d88-8a60-cda89d0f936f.png)

## Getting started

#### Prerequisites
- [ARDUINO LEONARDO](https://www.amazon.com/Arduino-org-A000057-Arduino-Leonardo-Headers/dp/B008A36R2Y)
- [USB HOST SHIELD](https://www.amazon.com/Compatible-Arduino-Support-Android-Function/dp/B0B3TH6H6N)

1) This is the hardest part, first of all you need to setup your Arduino and usb host shield on top of it, most of the time you get unsoldered usb shield so need to solder both 5V ports and the bottom 3.3V port only to make it work. check [THIS](https://www.youtube.com/watch?v=nBttwvgNOr8) video for more explaination.
2) Download and install python i recommend [Python 3.8](https://www.python.org/ftp/python/3.8.0/python-3.8.0-amd64.exe) version as this is the one i used to make this project.
3) Download [Colorant](https://github.com/hafyzwithawhy/Colorant) and use `pip install -r requirements.txt` to install the necessary dependencies.
4) Now Run `main.py` - Main entrypoint - as this code is ready to use and you dont need to change anything.
5) Enjoy

## Settings

- You need to set the enemy outlines to PURPLE as this is how the color aimbot works.
- The Recommended mouse settings are: 800DPI, 0.5 ingame sensitivity and 1920x1080 monitor.
- You can change the FOV size [Here](https://github.com/hafyzwithawhy/Colorant/blob/836189fb99fa8d6906569103d58a75b4ab98b760/main.py#L8) and the TOGGLE_KEY ON/OFF key [Here](https://github.com/hafyzwithawhy/Colorant/blob/836189fb99fa8d6906569103d58a75b4ab98b760/main.py#L7).
- If you want to change the keybinds for the aimbot Check [This](https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes) and then change [This](https://github.com/hafyzwithawhy/Colorant/blob/836189fb99fa8d6906569103d58a75b4ab98b760/colorant.py#L26) function virtual-key codes.
## Support

Join the community discord:

https://discord.com/invite/CvXy3uZCQ7
## Contributing

Pull requests are welcome. If you have any suggestions, questions, or find any issues, please open an [issue](https://github.com/hafyzwithawhy/Colorant/issues) here and provide some detail. If you find this project interesting or helpful, please STAR the repository.


## Disclaimer

THIS PROJECT IS FOR EDUCATIONAL PURPOSES ONLY, IT USE AT YOUR OWN RISK!

Undetectable does not mean not bannable, I do not condem any hacking as it ruins the fun for you and also for other players. This project was created just to show that it is possible to "cheat" using arduino and a simple python script.
