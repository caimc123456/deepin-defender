#!/bin/bash

DESKTOP_TEMP_FILE=deepin-defender-nativirus.desktop.tmp
DESKTOP_SOURCE_FILE=deepin-defender-nativirus.desktop

DESKTOP_TS_DIR=translations/scandesktop/

/usr/bin/deepin-desktop-ts-convert ts2desktop $DESKTOP_SOURCE_FILE $DESKTOP_TS_DIR $DESKTOP_TEMP_FILE
mv $DESKTOP_TEMP_FILE $DESKTOP_SOURCE_FILE
