// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n
"..%%%%..%%..%%.%%%%%..%%%%%..%%..%%..%%%%...%%%%...%%%%..%%%%%%.%%..%%.\n"
".%%..%%..%%%%..%%..%%.%%..%%.%%..%%.%%.....%%..%%.%%..%%...%%...%%%.%%.\n"
".%%.......%%...%%%%%..%%%%%..%%..%%..%%%%..%%.....%%..%%...%%...%%.%%%.\n"
".%%..%%...%%...%%.....%%..%%.%%..%%.....%%.%%..%%.%%..%%...%%...%%..%%.\n"
"..%%%%....%%...%%.....%%..%%..%%%%...%%%%...%%%%...%%%%..%%%%%%.%%..%%.\n"
".......................................................................\n";

const std::string nonWindowsAsciiArt = 
      "\n
"
"   .d8888b.                                               .d8888b.           d8b          \n"
"  d88P  Y88b                                             d88P  Y88b          Y8P          \n"
"  888    888                                             888    888                       \n"
"  888        888  888 88888b.  888d888 888  888 .d8888b  888         .d88b.  888 88888b.  \n"
"  888        888  888 888 "88b 888P"   888  888 88K      888        d88""88b 888 888 "88b \n"
"  888    888 888  888 888  888 888     888  888 "Y8888b. 888    888 888  888 888 888  888 \n"
"  Y88b  d88P Y88b 888 888 d88P 888     Y88b 888      X88 Y88b  d88P Y88..88P 888 888  888 \n"
"   "Y8888P"   "Y88888 88888P"  888      "Y88888  88888P'  "Y8888P"   "Y88P"  888 888  888 \n"
"                  888 888                                                                 \n"
"             Y8b d88P 888                                                                 \n"
"              "Y88P"  888                                                                 \n"
;

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
