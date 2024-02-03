@echo off

pushd "%~dp0\..\.."

set CMAKE_OPTIONS=-DCMAKE_INSTALL_PREFIX=_install ^
-DECAL_CORE_BUILD_SAMPLES=ON ^
-DECAL_CORE_BUILD_SAMPLES_PROTOBUF=ON ^
-DECAL_CORE_BUILD_TESTS=ON ^
-DECAL_CORE_BUILD_TESTS_PROTOBUF=ON ^
-DECAL_CORE_CONFIG_INIFILE=OFF ^
-DECAL_CORE_COMMAND_LINE=OFF ^
-DECAL_CORE_REGISTRATION=ON ^
-DECAL_CORE_REGISTRATION_SHM=OFF ^
-DECAL_CORE_MONITORING=ON ^
-DECAL_CORE_PUBLISHER=OFF ^
-DECAL_CORE_SUBSCRIBER=OFF ^
-DECAL_CORE_SERVICE=OFF ^
-DECAL_CORE_TIMEPLUGIN=OFF ^
-DECAL_CORE_TRANSPORT_UDP=OFF ^
-DECAL_CORE_TRANSPORT_TCP=OFF ^
-DECAL_CORE_TRANSPORT_SHM=OFF ^
-DECAL_CORE_NPCAP_SUPPORT=OFF

mkdir _10_build_monitoring_only
cd _10_build_monitoring_only

cmake .. -A x64 %CMAKE_OPTIONS%
cmake --build . --parallel --config Release
ctest -C Release -V

popd