# README for "Tensions Within"
## Video Presentation
https://youtu.be/1bblqDk4pEk

## Abstract
"Tensions Within" investigates the intricate dynamics between emotional depth and audience interaction in art. This study centers around a unique interactive installation, where audience participation in inflating a constrained balloon becomes a metaphor for emotional tension. By blending interactive design, perceptual psychology, and art psychology, it highlights the psychological impact and emotional complexity inherent in interactive art.

## Introduction
The installation, symbolizing the tension between human emotion and constraint, allows participants to engage with a balloon restrained within an iron wire mesh. This interaction serves as a metaphor for suppressed emotions on the verge of release, challenging participants to navigate their internal and external boundaries. "Tensions Within" embodies the fusion of technology and emotion, marking a new pathway in creating emotionally resonant interactive art.

## Installation Design
Iron Wire Mesh: Symbolizes life's restraints, contrasting with the balloon's representation of human aspirations.
Balloon: Central to the installation's exploration of emotions, signifying adaptability and potential.
Pneumatic Module: Controls the balloon's inflation and deflation, reflecting emotional highs and lows.
Control System: Features an Arduino Uno board and buttons, facilitating participant interaction and emotional decision-making.

## Technical Setup
### Air Pump and Valve Control:
- `define airPumpCont 6`: Defines the number of air pumps.
- `int airPumpPin[airPumpCont] = {2, 4, 6, 8, 10, 12}`: Controls the air pumps.
- `int airValvePin[airPumpCont] = {3, 5, 7, 9, 11, 13}`: Manages the air valves.
- `const int buttonPin = A0`: Button for controlling inflation.
  
### Code Functionality:
- `setup()`: Initializes the system and sets the default state.
- `loop()`: Monitors and adjusts the balloon's state based on participant interaction.
  
## Theoretical Foundations and Contextual Significance
Drawing inspiration from Carl Jung's emotional projection and Prospect Theory, the installation creates a reflective space for emotional and decision-making exploration. It echoes immersive art experiences, offering a deep understanding of emotional dynamics in interactive art.

## Interaction and Emotional Projection
Participants' varied reactions, from anxiety to excitement, highlight the emotional spectrum evoked by the installation. These insights provide a deeper understanding of the impact of participatory art on human emotions.

## Conclusion
"Tensions Within" merges traditional art with new media, illustrating the power of participatory art to engage audiences profoundly. This project paves the way for further interactive art research, emphasizing the transformative power of art in conveying and evoking deep emotional responses.
