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
    src/Datum.cpp
	src/proto/data.pb.cc
    src/utils.cpp)

target_link_libraries(create_lmdb ${LMDB_LIBRARY})
target_link_libraries(create_lmdb ${Boost_LIBRARIES})
target_link_libraries(create_lmdb ${OpenCV_LIBS})
target_link_libraries(create_lmdb ${PROTOBUF_LIBRARIES})




#find_package(CUDA)
# include_directories(/home/kanit/build/cudnn/include)
# link_directories(/home/kanit/build/cudnn/lib64)
# set (CMAKE_SHARED_LINKER_FLAGS "-lcudnn")
# add_executable(main main.cpp)
#add_executable(
#    main
#    src/main.cpp
#    src/Data.cpp)
# target_link_libraries(main ${LMDB_LIBRARY})
