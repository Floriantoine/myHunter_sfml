include(FetchContent)

FetchContent_Declare(
    sfml
    GIT_REPOSITORY https://github.com/SFML/sfml
    GIT_TAG 2.5.1
    GIT_SHALLOW ON
)

FetchContent_MakeAvailable(
    sfml
)
