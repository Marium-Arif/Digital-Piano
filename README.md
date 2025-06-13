# Digital-Piano
A fully functional digital piano application built with C++/CLI and Windows Forms.This interactive piano features multiple octaves of playable keys, visual feedback, and built-in song tutorials. Implemented OOP principles like encapsulation and polymorphism to manage audio logic and UI events efficiently. Designed visual feedback and multiple play modes (free play, song lessons) for an enhanced user experience.

## Key Features
### 🎹 Piano Keyboard
- 48 piano keys (white and black) covering multiple octaves and realistic piano sounds for each key. 
- Visual feedback with color changes when keys are pressed

### 🎼 Built-in Songs

- Piano Mode: Free play any keys.
- Happy Birthday: Interactive tutorial.
- Black Sheep: Interactive tutorial.
- Für Elise by Beethoven: Interactive tutorial.

### 🔊 Sound System

- Uses WAV files for white key sounds.
- Uses system beeps for black key sounds.
- Synchronous playback for clean note transitions.

## Requirements
- Windows OS.
- .NET Framework.
- Visual Studio (for development).

## How to Use
Clone the repository, open the solution in Visual Studio and then build and run the project.
Select a mode using the radio buttons piano or songs(tutorial).
Click on piano keys to play notes. In tutorial mode, follow the color-coded keys to learn songs.

## File Structure
MyForm.h: Main application form with UI and event handlers.
h2.h: Sound player class with note implementations.
MyForm.cpp: Application entry point.
Sound files (1.wav to 24.wav): Piano note samples.
