ARCHS = arm64 arm64e
TARGET = iphone:clang:13.2:13.2

INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = Layla
$(TWEAK_NAME)_FRAMEWORKS = UIKit AudioToolbox

Layla_FILES = Tweak.x
Layla_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk
