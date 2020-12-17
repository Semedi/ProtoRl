set(engine_sources
    src/engine/roguengine.cpp
)

set(engine_headers
    include/engine/roguengine.hpp
)

set(exe_sources
		src/main.cpp
    src/tmp.cpp
		${engine_sources}
)

set(headers
    include/tmp.hpp
		${engine_headers}
)
