import os
import time
import keyboard
from termcolor import colored
from colorant import Colorant

TOGGLE_KEY = 'F1'
FOV = 50
CENTER_X, CENTER_Y = 1920 // 2, 1080 // 2

def main():
    os.system('title Colorant')
    colorant = Colorant(CENTER_X - FOV // 2, CENTER_Y - FOV // 2, FOV)
    print(colored('''
                     ▄████▄   ▒█████   ██▓     ▒█████   ██▀███   ▄▄▄       ███▄    █ ▄▄▄█████▓
                    ▒██▀ ▀█  ▒██▒  ██▒▓██▒    ▒██▒  ██▒▓██ ▒ ██▒▒████▄     ██ ▀█   █ ▓  ██▒ ▓▒
                    ▒▓█    ▄ ▒██░  ██▒▒██░    ▒██░  ██▒▓██ ░▄█ ▒▒██  ▀█▄  ▓██  ▀█ ██▒▒ ▓██░ ▒░
                    ▒▓▓▄ ▄██▒▒██   ██░▒██░    ▒██   ██░▒██▀▀█▄  ░██▄▄▄▄██ ▓██▒  ▐▌██▒░ ▓██▓ ░ 
                    ▒ ▓███▀ ░░ ████▓▒░░██████▒░ ████▓▒░░██▓ ▒██▒ ▓█   ▓██▒▒██░   ▓██░  ▒██▒ ░ 
                    ░ ░▒ ▒  ░░ ▒░▒░▒░ ░ ▒░▓  ░░ ▒░▒░▒░ ░ ▒▓ ░▒▓░ ▒▒   ▓▒█░░ ▒░   ▒ ▒   ▒ ░░   
                      ░  ▒     ░ ▒ ▒░ ░ ░ ▒  ░  ░ ▒ ▒░   ░▒ ░ ▒░  ▒   ▒▒ ░░ ░░   ░ ▒░    ░    
                    ░        ░ ░ ░ ▒    ░ ░   ░ ░ ░ ▒    ░░   ░   ░   ▒      ░   ░ ░   ░      
                    ░ ░          ░ ░      ░  ░    ░ ░     ░           ░  ░         ░          
                    ░                                                                         
                                              COLOR AIMBOT - v1.0''', 'magenta'))
    print()
    print(colored('[Info]', 'green'), colored('Set enemies to', 'white'), colored('Purple', 'magenta'))
    print(colored('[Info]', 'green'), colored(f'Press {TOGGLE_KEY} to toggle ON/OFF', 'white'))
    print(colored('[Info]', 'green'), colored('Default settings are', 'white'), 
          colored('RightMB', 'magenta'), colored('= Aimbot,', 'white'), 
          colored('LeftAlt', 'magenta'), colored('= Triggerbot', 'white'))
    print(colored('[Info]', 'green'), colored('Made By', 'white'), colored('Hafez#6866', 'magenta'))
    status = 'Disabled'
    
    try:
        while True:
            if keyboard.is_pressed(TOGGLE_KEY):
                colorant.toggle()
                status = 'Enabled ' if colorant.toggled else 'Disabled'
            print(f'\r{colored("[Status]", "green")} {colored(status, "white")}', end='')
            time.sleep(0.01)
    except (KeyboardInterrupt, SystemExit):
        print(colored('\n[Info]', 'green'), colored('Exiting...', 'white') + '\n')
    finally:
        colorant.close()

if __name__ == '__main__':
    main()
