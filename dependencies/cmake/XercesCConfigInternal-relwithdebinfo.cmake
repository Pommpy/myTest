#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "xerces_xerces-c" for configuration "RelWithDebInfo"
set_property(TARGET xerces_xerces-c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(xerces_xerces-c PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/xerces-c_4.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/xerces-c_4_0.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS xerces_xerces-c )
list(APPEND _IMPORT_CHECK_FILES_FOR_xerces_xerces-c "${_IMPORT_PREFIX}/lib/xerces-c_4.lib" "${_IMPORT_PREFIX}/bin/xerces-c_4_0.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
