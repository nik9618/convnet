# Dont forget about : 
# FLAG -O3

project (ConvNet)
cmake_minimum_required (VERSION 2.6)

include_directories(/home/kanit/convnet/src)

find_library(LMDB_LIBRARY
    NAMES lmdb
    HINTS "/usr/lib"
)

find_package( OpenCV REQUIRED )


find_package(Boost 1.59 COMPONENTS system filesystem REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS foo.proto)

add_executable(
    create_lmdb
    src/create_lmdb.cpp
	src/proto/data.pb.cc
    src/utils.cpp
    src/Db.cpp)

target_link_libraries(create_lmdb ${LMDB_LIBRARY})
target_link_libraries(create_lmdb ${Boost_LIBRARIES})
target_link_libraries(create_lmdb ${OpenCV_LIBS})
target_link_libraries(create_lmdb ${PROTOBUF_LIBRARIES})

add_executable(
    datalayer
    src/datalayer.cpp
    src/proto/data.pb.cc
    src/utils.cpp
    src/Db.cpp)

target_link_libraries(datalayer ${LMDB_LIBRARY})
target_link_libraries(datalayer ${Boost_LIBRARIES})
target_link_libraries(datalayer ${OpenCV_LIBS})
target_link_libraries(datalayer ${PROTOBUF_LIBRARIES})

find_package(CUDA)
include_directories(/home/kanit/build/cuda/include)
link_directories(/home/kanit/build/cuda/lib64)
set (CMAKE_SHARED_LINKER_FLAGS "-lcudnn")

cuda_add_executable(
    main
    src/main.cu
)