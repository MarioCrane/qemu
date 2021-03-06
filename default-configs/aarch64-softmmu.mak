# Default configuration for aarch64-softmmu

# We support all the 32 bit boards so need all their config
include arm-softmmu.mak

CONFIG_AUX=y
CONFIG_DDC=y
CONFIG_DPCD=y
CONFIG_XLNX_ZYNQMP=y
CONFIG_XLNX_ZYNQMP_CSU=y
CONFIG_XLNX_ZYNQMP_ARM=y
CONFIG_DPCD=y
CONFIG_XLNX_VERSAL_PMC=y
CONFIG_XLNX_VERSAL=y
CONFIG_REMOTE_PORT_PCI=y
