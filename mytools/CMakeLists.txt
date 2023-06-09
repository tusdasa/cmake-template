cmake_minimum_required (VERSION 3.8)

set(mytools_bin_name mytools)

set(mytools_src_list ${CMAKE_SOURCE_DIR}/mytools/src/mytools.cpp)

# https://blog.csdn.net/weixin_32155265/article/details/128054373
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src)

add_library(
	lua  
	SHARED  
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lapi.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lauxlib.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lbaselib.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lcode.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lcorolib.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lctype.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/ldblib.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/ldebug.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/ldo.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/ldump.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lfunc.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lgc.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/linit.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/liolib.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/llex.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lmathlib.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lmem.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/loadlib.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lobject.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lopcodes.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/loslib.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lparser.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lstate.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lstring.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lstrlib.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/ltable.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/ltablib.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/ltm.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lundump.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lutf8lib.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lvm.c
	${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src/lzio.c 
)


include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/third-party/lua-5.4.6/src)


add_executable (${mytools_bin_name} ${mytools_src_list})
target_link_libraries(
        ${mytools_bin_name}
        lua
)