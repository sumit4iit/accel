# ACCEL

Testing on windows platform

> This project aims to provide replacement for axel - download accelerator.

Majority of the source is written in c++ and primarily targets Linux platforms.
However, the plan is to write code generic enough, so that in future porting this to other platforms should be easy.

##Roadmap:
1. Implement basic Http Library. This library would allow users to download files when url is provided.
2. This library should support download with parallel connections.
3. There should be an API to automate this.
4. Provide minimalistic UI for basic users, that should 'just work'
5. Provide browser extensions (chrome/ firefox to start with), that would capture streams.

##Testing:
1. For testing c++ codebase, we use Google test framework.

##Build System:
1. For building this project relies on CMake
