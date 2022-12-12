@echo off

pushd %~dp0\..\..

call build\windows\win_set_vars.bat

echo Downloading NPCAP
powershell -Command "& '%~dp0\download_npcap.ps1'"

set "CMAKE_OPTIONS_COMPLETE=-DCMAKE_INSTALL_PREFIX=_install -DBUILD_ECAL_TESTS=ON -DECAL_THIRDPARTY_BUILD_GTEST=ON -DBUILD_SHARED_LIBS=OFF -DECAL_NPCAP_SUPPORT=ON -DECAL_THIRDPARTY_BUILD_UDPCAP=ON"
set "CMAKE_OPTIONS_SDK=-DCMAKE_INSTALL_PREFIX=_install -DBUILD_SHARED_LIBS=OFF -DCMAKE_BUILD_TYPE=Debug -DBUILD_SAMPLES=OFF -DBUILD_ECAL_TESTS=OFF -DECAL_LAYER_ICEORYX=OFF -DECAL_INSTALL_SAMPLE_SOURCES=OFF -DCPACK_PACK_WITH_INNOSETUP=OFF -DECAL_NPCAP_SUPPORT=ON -DECAL_THIRDPARTY_BUILD_UDPCAP=ON"

if not exist "%BUILD_DIR_COMPLETE%" mkdir "%BUILD_DIR_COMPLETE%"
if not exist "%BUILD_DIR_SDK%" mkdir "%BUILD_DIR_SDK%"

cd /d "%WORKSPACE%\%BUILD_DIR_COMPLETE%"
cmake ../.. -A x64 %CMAKE_OPTIONS_COMPLETE% %*

cd /d "%WORKSPACE%\%BUILD_DIR_SDK%"
cmake ../.. -A x64 %CMAKE_OPTIONS_SDK% %*

popd
