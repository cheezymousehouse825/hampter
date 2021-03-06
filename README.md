<div id="top"></div>
<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Don't forget to give the project a star!
*** Thanks again! Now go create something AMAZING! :D
-->



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/cheezymousehouse825/hampter">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

<h3 align="center">Hampter</h3>

  <p align="center">
    Useless window to display an image of a hamster.
    <br />
    <a href="https://github.com/cheezymousehouse825/hampter"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://youtu.be/vGScB4-wHy8/">View Demo</a>
    ·
    <a href="https://github.com/cheezymousehouse825/hampter/issues">Report Bug</a>
    ·
    <a href="https://github.com/cheezymousehouse825/hampter/issues">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

[![Hampter Screenshot][product-screenshot]](https://github.com/cheezymousehouse825/hampter/raw/main/images/screenshot.png)

<p align="right">(<a href="#top">back to top</a>)</p>



### Built With

* [C++](http://www.cplusplus.com/)
* [wxWidgets](https://wxwidgets.org/)
* [GCC](https://gcc.gnu.org/)
* [FFmpeg](https://ffmpeg.org/)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- GETTING STARTED -->
## Getting Started

To get a local copy up and running follow these simple example steps.

### Prerequisites

* GCC
  ```sh
  sudo pacman -S gcc
  ```

* wxWidgets
  ```sh
  sudo pacman -S wxgtk2
  ```

* FFmpeg (for linux users only)
  ```sh
  sudo pacman -S ffmpeg
  ```

_Please note that for the windows executable, there are no prerequisites. For the linux binary you will need FFmpeg and wxWidgets. You won't need GCC because the binary is pre-compiled._

### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/cheezymousehouse825/hampter.git
   ```
2. Enter the directory
   ```sh
   cd hampter
   ```
3. Compile the program
   ```sh
   g++ main.cpp `wx-config --cxxflags --libs` -o hampter
   ```

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage

Execute the program by running `start.sh`
```sh
./start.sh
```

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

- [x] Add More Dialogue
- [x] Add Sounds
- [] Multiple Windows
    - [] Multiple Hamsters
    - [] Random Images
- [] Make it Annoying
    - [] Impossible To Close
    - [] Plays Annoying Noises at Random Times

See the [open issues](https://github.com/cheezymousehouse825/hampter/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the GPL-3.0 License. See `LICENSE` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Vaughn MacIntyre - [@cheezymh825](https://twitter.com/cheezymh825)

Project Link: [https://github.com/cheezymousehouse825/hampter](https://github.com/cheezymousehouse825/hampter)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

* [Gorillaz](https://www.gorillaz.com/)
* [Me](https://github.com/cheezymousehouse825/)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/cheezymousehouse825/hampter.svg?style=for-the-badge
[contributors-url]: https://github.com/cheezymousehouse825/hampter/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/cheezymousehouse825/hampter.svg?style=for-the-badge
[forks-url]: https://github.com/cheezymousehouse825/hampter/network/members
[stars-shield]: https://img.shields.io/github/stars/cheezymousehouse825/hampter.svg?style=for-the-badge
[stars-url]: https://github.com/cheezymousehouse825/hampter/stargazers
[issues-shield]: https://img.shields.io/github/issues/cheezymousehouse825/hampter.svg?style=for-the-badge
[issues-url]: https://github.com/cheezymousehouse825/hampter/issues
[license-shield]: https://img.shields.io/github/license/cheezymousehouse825/hampter.svg?style=for-the-badge
[license-url]: https://github.com/cheezymousehouse825/hampter/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/cheezymousehouse825
[product-screenshot]: images/screenshot.png
