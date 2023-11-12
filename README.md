# README for "Tensions Within"
## Abstract
"Tensions Within" is an interactive art installation exploring the relationship between tension, risk, and emotional projection. The project draws upon theories of suspense, catharsis, and Carl Jung's concept of projection, aiming to provide a reflective space for participants to engage with internal and external boundaries. This README outlines the technical details and the theoretical foundations of the installation.

## Introduction
The installation, "Tensions Within," embodies the intricate dance between art and emotion, inviting participants to interact with a balloon constrained by an iron wire frame. This setup serves as a metaphor for suppressed feelings on the cusp of release, offering an immersive environment for emotional exploration.

## Installation Design
### Components
- Iron Wire Frame: Symbolizes constraints and limitations, contrasting with the balloon's resilience.
- Balloon: Represents potentiality and adaptability, central to the installation's emotional exploration.
- Pneumatic Module: Integrated pump and valve system for balloon inflation and deflation.
- Control System: Arduino Uno board with tactile buttons for user interaction.

### Technical Setup
- Air Pump and Valve Control:
  - `#define airPumpCont 6`: Defines the number of air pumps.
  - `int airPumpPin[airPumpCont]` = {2, 4, 6, 8, 10, 12}: Specifies the Arduino pins controlling the air pumps.
  - `int airValvePin[airPumpCont]` = {3, 5, 7, 9, 11, 13}: Defines the pins for the air valves.
  - `const int inflationButtonPin` = A0: Pin for the inflation button.
  - `const int deflationButtonPin` = A1: Pin for the deflation button.
  - 
### Code Overview
- The `setup()` function initializes the Arduino pins and sets the initial state of the pumps and valves.
- `The loop()` function continuously checks the state of the inflation and deflation buttons, controlling the air pumps and valves accordingly.

## Theoretical Foundations
Drawing inspiration from various art theories, "Tensions Within" offers a platform for participants to project their internal emotions, facilitating a cathartic experience and revealing vulnerabilities.

## Contextual Significance
The installation invites introspection and emotional projection, akin to Marina Abramović's immersive art, aligning with Kahneman and Tversky's Prospect Theory. It serves as a space for understanding and reconciling shared human tensions.

## Interaction and Emotional Projection
User interactions and emotional responses vary, ranging from anxiety to excitement. These insights contribute to a deeper understanding of the interaction dynamics within the artwork and the emotional impact of participatory art.

## Conclusion
"Tensions Within" exemplifies the fusion of traditional art and new media, highlighting the power of participatory art in engaging and resonating with audiences. The installation opens avenues for future explorations in interactive art, integrating technology and human emotion.
