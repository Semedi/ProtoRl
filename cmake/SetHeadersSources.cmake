set(engine_sources
    src/engine/prl.cpp
)

set(engine_headers
    include/engine/prl.hpp
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
