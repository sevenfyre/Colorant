
# Colorant

Colorant is a highly efficient Color Aimbot designed to rapidly scan for purple color range on your screen and aim/shoot at it, without any interference with the game memory or files of Valorant.

Unlike conventional video game cheats that rely on the process memory to function, Color aimbots adopt a unique approach by avoiding any memory reading altogether. This innovative approach has the potential to remain undetectable by anti-cheat mechanisms that typically attempt to block memory reads. Additionally, sending input to the video game without triggering any flags can be a challenging aspect to consider.

The primary objective of this project is to showcase a proof of concept, demonstrating the potential of Colorant's novel approach to aimbot technology.

![image](https://user-images.githubusercontent.com/82477000/225608740-5f690006-9cc8-4d88-8a60-cda89d0f936f.png)

[![Downloads][downloads-shield]][downloads-link]
[![Discord][discord-shield]][discord-link]
[![Language][language-shield]][language-link]
[![License][license-shield]][license-link]

## Getting started

#### You will need the following prerequisites:
- [ARDUINO LEONARDO](https://www.amazon.com/Arduino-org-A000057-Arduino-Leonardo-Headers/dp/B008A36R2Y)
- [USB HOST SHIELD](https://www.amazon.com/Compatible-Arduino-Support-Android-Function/dp/B0B3TH6H6N)

The initial setup can be a bit challenging, as you will need to set up your Arduino and USB host shield. It is important to note that some USB shields may come unsoldered, so you may need to solder both 5V ports and the bottom 3.3V port to ensure that it works correctly. For further clarification, you can refer to [THIS](https://www.youtube.com/watch?v=nBttwvgNOr8) video.

Next, you will need to download and install Python, with [Version 3.8](https://www.python.org/ftp/python/3.8.0/python-3.8.0-amd64.exe) being recommended as it was the version used to develop this project. Once Python is installed, you can download Colorant and install the necessary dependencies by using the command `pip install -r requirements.txt`.

To utilize the Arduino board as a computer mouse, the user can upload the Arduino.ino sketch to the board via the Arduino IDE. This sketch can be located within the [Arduino](https://github.com/hafyzwithawhy/Colorant/tree/main/Arduino) folder. The process involves connecting the Arduino board to the computer, opening the Arduino IDE software, selecting the appropriate board and port, and uploading the sketch. By completing these steps, you can transform their Arduino board into a functional computer mouse, allowing for the control of the computer's cursor and clicking functions through the board's hardware.

With the prerequisites and dependencies installed, you can now run the `main.py` file, which is the main entry point of the program. You do not need to make any changes to the code, as it is ready to use.

By following these steps, you can enjoy using Colorant to quickly and accurately aim and shoot within your favorite valorant gamemode.

## Info
In order for Colorant to function correctly, there are a few important things that you need to consider:

- Enemy outlines should be set to PURPLE, as this is how the color aimbot operates.
- For optimal performance, it is recommended to use a mouse with the following settings: 800DPI, 0.5 ingame sensitivity, and a 1920x1080 monitor.
- The FOV size can be adjusted by editing the value located [Here](https://github.com/hafyzwithawhy/Colorant/blob/836189fb99fa8d6906569103d58a75b4ab98b760/main.py#L8) while the TOGGLE_KEY ON/OFF key can be changed [Here](https://github.com/hafyzwithawhy/Colorant/blob/836189fb99fa8d6906569103d58a75b4ab98b760/main.py#L7).
- If you wish to modify the keybinds for the aimbot, Check [This](https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes) link and then change the virtual-key codes in [This](https://github.com/hafyzwithawhy/Colorant/blob/836189fb99fa8d6906569103d58a75b4ab98b760/colorant.py#L26) function.

By making these adjustments, you can fine-tune Colorant to suit your preferences and optimize its performance within the game.
## Support

If you require support or have any questions regarding Colorant, please feel free to join the community Discord:
[![Discord Banner 2][discord-banner]][discord-link]

## Contributing

contributions are welcome from the community, and if you have any suggestions or encounter any issues, please do not hesitate to open an [issue](https://github.com/hafyzwithawhy/Colorant/issues) in the repository and provide as much detail as possible. Additionally, if you find this project helpful or interesting, please consider giving it a STAR.

## Disclaimer

It is important to note that this project is intended for EDUCATIONAL PURPOSES ONLY, and should be used at YOUR OWN RISK.

Although the project is undetectable, this does not mean that it is not bannable. I do not condone any form of hacking, as it can ruin the game experience for both yourself and other players. This project was created solely to demonstrate the possibility of using an Arduino and a simple Python script to "cheat" within a video game.

[discord-shield]: https://img.shields.io/discord/1074740638618243132?color=purple&label=Support&logo=discord&logoColor=white&style=for-the-badge
[discord-link]: https://discord.com/invite/CvXy3uZCQ7
[discord-banner]: https://discordapp.com/api/guilds/1074740638618243132/widget.png?style=banner2

[downloads-shield]: https://img.shields.io/github/downloads/hafyzwithawhy/Colorant/total?color=purple&logo=GitHub&style=for-the-badge
[downloads-link]: https://github.com/hafyzwithawhy/Colorant/releases/latest

[language-shield]: https://img.shields.io/github/languages/top/hafyzwithawhy/Colorant?color=purple&logo=python&logoColor=white&style=for-the-badge
[language-link]: https://www.python.org/

[license-shield]: https://img.shields.io/github/license/hafyzwithawhy/Colorant?color=purple&logo=github&style=for-the-badge
[license-link]: https://github.com/hafyzwithawhy/Colorant/blob/main/LICENSE
