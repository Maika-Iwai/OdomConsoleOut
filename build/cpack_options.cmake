set(CPACK_PACKAGE_NAME "OdomConsoleOut")
set(CPACK_RPM_PACKAGE_NAME "OdomConsoleOut")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Display odometry of RGB-D sensor")
set(CPACK_PACKAGE_VENDOR "Maika Iwai, Robot System Design Laboratory, Meijo University")

if(CPACK_DEBIAN_PACKAGE_ARCHITECTURE)
   set(CPACK_PACKAGE_FILE_NAME "odomconsoleout_1.0.0_amd64")		 
endif(CPACK_DEBIAN_PACKAGE_ARCHITECTURE)
if(CPACK_RPM_PACKAGE_ARCHITECTURE)
   set(CPACK_PACKAGE_FILE_NAME "OdomConsoleOut-1.0.0-")
endif(CPACK_RPM_PACKAGE_ARCHITECTURE)
set(CPACK_RESOURCE_FILE_LICENSE "/home/rsdlab/workspace/OdomConsoleOut/COPYING.LESSER")

set(CPACK_COMPONENTS_ALL component)
set(CPACK_COMPONENT_COMPONENT_DISPLAY_NAME "Applications")
set(CPACK_COMPONENT_COMPONENT_DESCRIPTION
    "Component library and stand-alone executable")
if(INSTALL_HEADERS)
    set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL}  headers)
    set(CPACK_COMPONENT_HEADERS_DISPLAY_NAME "Header files")
    set(CPACK_COMPONENT_HEADERS_DESCRIPTION
        "Header files from the component.")
    set(CPACK_COMPONENT_HEADERS_DEPENDS component)
endif(INSTALL_HEADERS)
if(INSTALL_IDL)
    set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} idl)
    set(CPACK_COMPONENT_IDL_DISPLAY_NAME "IDL files")
    set(CPACK_COMPONENT_IDL_DESCRIPTION
        "IDL files for the component's services.")
    set(CPACK_COMPONENT_IDL_DEPENDS component)
endif(INSTALL_IDL)
set(INSTALL_EXAMPLES )
if(INSTALL_EXAMPLES)
    set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} examples)
    set(CPACK_COMPONENT_EXAMPLES_DISPLAY_NAME "Examples")
    set(CPACK_COMPONENT_EXAMPLES_DESCRIPTION
        "Sample configuration files and other component resources.")
    set(CPACK_COMPONENT_EXAMPLES_DEPENDS component)
endif(INSTALL_EXAMPLES)
set(INSTALL_DOCUMENTATION OFF)
if(INSTALL_DOCUMENTATION)
    set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} documentation)
    set(CPACK_COMPONENT_DOCUMENTATION_DISPLAY_NAME "Documentation")
    set(CPACK_COMPONENT_DOCUMENTATION_DESCRIPTION
        "Component documentation")
    set(CPACK_COMPONENT_DOCUMENTATION_DEPENDS component)
endif(INSTALL_DOCUMENTATION)
if(INSTALL_SOURCES)
    set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} sources)
    set(CPACK_COMPONENT_SOURCES_DISPLAY_NAME "Source files")
    set(CPACK_COMPONENT_SOURCES_DESCRIPTION
        "Source files from the component.")
endif(INSTALL_SOURCES)

IF (WIN32)
    set(CPACK_GENERATOR "WIX")
    set(CPACK_RESOURCE_FILE_LICENSE
        "/home/rsdlab/workspace/OdomConsoleOut/cmake/License.rtf")
    set(CPACK_PACKAGE_FILE_NAME
        "OdomConsoleOut100_rtm120_${CPACK_SYSTEM_NAME}")
    set(CPACK_PACKAGE_EXECUTABLES "OdomConsoleOutComp;OdomConsoleOutComp.exe")
    set(CPACK_PACKAGE_NAME ${CPACK_PACKAGE_FILE_NAME})
    set(CPACK_UNINSTALL_NAME OdomConsoleOut)
    set(CPACK_PACKAGE_INSTALL_DIRECTORY "share/openrtm-1.2")

    # Windows WiX package settings
    if(${CPACK_GENERATOR} MATCHES "WIX")
      set(CPACK_WIX_CULTURES "ja-jp")
      set(CPACK_WIX_UPGRADE_GUID )
      set(CPACK_WIX_PRODUCT_ICON "/home/rsdlab/workspace/OdomConsoleOut/cmake\\rt_middleware_logo.ico")
      set(CPACK_WIX_UI_BANNER "/home/rsdlab/workspace/OdomConsoleOut/cmake/rt_middleware_banner.bmp")
      set(CPACK_WIX_UI_DIALOG "/home/rsdlab/workspace/OdomConsoleOut/cmake/rt_middleware_dlg.bmp")
      set(CPACK_WIX_PROPERTY_ARPURLINFOABOUT "http://www.openrtm.org")    
    endif()

ELSE(WIN32)
 set(CPACK_GENERATOR DEB)
 set(CPACK_PACKAGE_CONTACT unknown)
ENDIF (WIN32)
