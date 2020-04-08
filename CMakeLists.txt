cmake_minimum_required(VERSION 3.12.3)

project (vec)

set(SOURCE_FILES
${CMAKE_CURRENT_LIST_DIR}/src/vec_add.c
${CMAKE_CURRENT_LIST_DIR}/src/vec_dot_product.c
${CMAKE_CURRENT_LIST_DIR}/src/vec_opposite.c
${CMAKE_CURRENT_LIST_DIR}/src/vec_sub.c
${CMAKE_CURRENT_LIST_DIR}/src/vec_angle.c
${CMAKE_CURRENT_LIST_DIR}/src/vec_magnitude.c
${CMAKE_CURRENT_LIST_DIR}/src/vec_set.c
${CMAKE_CURRENT_LIST_DIR}/src/vec_unit.c
${CMAKE_CURRENT_LIST_DIR}/src/vec_cross_product.c
${CMAKE_CURRENT_LIST_DIR}/src/vec_mul.c
${CMAKE_CURRENT_LIST_DIR}/src/vec_set_v.c
${CMAKE_CURRENT_LIST_DIR}/src/vec_dist.c
)

set(HEADER_FILES
${CMAKE_CURRENT_LIST_DIR}/inc/
)

add_library(vec STATIC ${HEADER_FILES} ${SOURCE_FILES})

target_include_directories(vec PRIVATE ${HEADER_FILES})