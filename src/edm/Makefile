# Makefile for edm top level
TOP = ../..
ifdef EPICS_HOST_ARCH
 include $(TOP)/configure/CONFIG
 DIRS +=  util 
 DIRS += lib 
 DIRS += epicsPv
 DIRS += logPv
 DIRS += calcPv
 DIRS += locPv
 DIRS += baselib 
 DIRS += edmMain 
 DIRS += giflib 
 DIRS += pnglib 
 DIRS += pvFactory 
 DIRS += choiceButton
 DIRS += helpFiles
 DIRS += widgets
 DIRS += setup
 DIRS += diamondlib
 DIRS += indicator
 DIRS += multiSegRampButton
 include $(TOP)/configure/RULES_DIRS

else
    TOP = ../..
    ifneq ($(wildcard $(TOP)/config)x,x)
      # New Makefile.Host config file location
      include $(TOP)/config/CONFIG_EXTENSIONS
      DIRS = util lib epicsPv calcPv locPv baselib edmMain giflib pnglib pvFactory choiceButton
      include $(TOP)/config/RULES_DIRS
    else
      # Old Makefile.Unix config file location
      EPICS=../../..
      include $(EPICS)/config/CONFIG_EXTENSIONS
      DIRS = util lib epicsPv calcPv locPv baselib edmMain giflib pnglib pvFactory choiceButton
      include $(EPICS)/config/RULES_DIRS
    endif
endif
