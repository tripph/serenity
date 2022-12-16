serenity_component(
    AdventOfCode2022
    RECOMMENDED
    TARGETS AdventOfCode2022
)

set(SOURCES main.cpp day5.cpp)

serenity_app(AdventOfCode2022 ICON app-snake)
target_link_libraries(AdventOfCode2022 PRIVATE LibCore LibGfx LibGUI LibConfig LibMain LibDesktop)
