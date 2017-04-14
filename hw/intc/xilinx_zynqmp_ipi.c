/*
 * QEMU model of the IPI Inter Processor Interrupt block
 *
 * Copyright (c) 2014 Xilinx Inc.
 *
 * Autogenerated by xregqemu.py 2014-09-02.
 * Written by Edgar E. Iglesias <edgar.iglesias@xilinx.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "qemu/osdep.h"
#include "hw/sysbus.h"
#include "hw/register-dep.h"
#include "qemu/bitops.h"
#include "qemu/log.h"

#include "hw/fdt_generic_util.h"

#define TYPE_XILINX_IPI "xlnx.zynqmp_ipi"

#define XILINX_IPI(obj) \
     OBJECT_CHECK(IPI, (obj), TYPE_XILINX_IPI)

#ifndef XILINX_IPI_ERR_DEBUG
#define XILINX_IPI_ERR_DEBUG 0
#endif

#define DB_PRINT_L(lvl, fmt, args...) do {\
    if (XILINX_IPI_ERR_DEBUG >= lvl) {\
        qemu_log(TYPE_XILINX_IPI ": %s:" fmt, __func__, ## args);\
    } \
} while (0);

#define DB_PRINT(fmt, args...) DB_PRINT_L(1, fmt, ## args)

DEP_REG32(IPI_TRIG, 0x0)
    DEP_FIELD(IPI_TRIG, PL_3, 1, 27)
    DEP_FIELD(IPI_TRIG, PL_2, 1, 26)
    DEP_FIELD(IPI_TRIG, PL_1, 1, 25)
    DEP_FIELD(IPI_TRIG, PL_0, 1, 24)
    DEP_FIELD(IPI_TRIG, PMU_3, 1, 19)
    DEP_FIELD(IPI_TRIG, PMU_2, 1, 18)
    DEP_FIELD(IPI_TRIG, PMU_1, 1, 17)
    DEP_FIELD(IPI_TRIG, PMU_0, 1, 16)
    DEP_FIELD(IPI_TRIG, RPU_1, 1, 9)
    DEP_FIELD(IPI_TRIG, RPU_0, 1, 8)
    DEP_FIELD(IPI_TRIG, APU, 1, 0)
DEP_REG32(IPI_OBS, 0x4)
    DEP_FIELD(IPI_OBS, PL_3, 1, 27)
    DEP_FIELD(IPI_OBS, PL_2, 1, 26)
    DEP_FIELD(IPI_OBS, PL_1, 1, 25)
    DEP_FIELD(IPI_OBS, PL_0, 1, 24)
    DEP_FIELD(IPI_OBS, PMU_3, 1, 19)
    DEP_FIELD(IPI_OBS, PMU_2, 1, 18)
    DEP_FIELD(IPI_OBS, PMU_1, 1, 17)
    DEP_FIELD(IPI_OBS, PMU_0, 1, 16)
    DEP_FIELD(IPI_OBS, RPU_1, 1, 9)
    DEP_FIELD(IPI_OBS, RPU_0, 1, 8)
    DEP_FIELD(IPI_OBS, APU, 1, 0)
DEP_REG32(IPI_ISR, 0x10)
    DEP_FIELD(IPI_ISR, PL_3, 1, 27)
    DEP_FIELD(IPI_ISR, PL_2, 1, 26)
    DEP_FIELD(IPI_ISR, PL_1, 1, 25)
    DEP_FIELD(IPI_ISR, PL_0, 1, 24)
    DEP_FIELD(IPI_ISR, PMU_3, 1, 19)
    DEP_FIELD(IPI_ISR, PMU_2, 1, 18)
    DEP_FIELD(IPI_ISR, PMU_1, 1, 17)
    DEP_FIELD(IPI_ISR, PMU_0, 1, 16)
    DEP_FIELD(IPI_ISR, RPU_1, 1, 9)
    DEP_FIELD(IPI_ISR, RPU_0, 1, 8)
    DEP_FIELD(IPI_ISR, APU, 1, 0)
DEP_REG32(IPI_IMR, 0x14)
    DEP_FIELD(IPI_IMR, PL_3, 1, 27)
    DEP_FIELD(IPI_IMR, PL_2, 1, 26)
    DEP_FIELD(IPI_IMR, PL_1, 1, 25)
    DEP_FIELD(IPI_IMR, PL_0, 1, 24)
    DEP_FIELD(IPI_IMR, PMU_3, 1, 19)
    DEP_FIELD(IPI_IMR, PMU_2, 1, 18)
    DEP_FIELD(IPI_IMR, PMU_1, 1, 17)
    DEP_FIELD(IPI_IMR, PMU_0, 1, 16)
    DEP_FIELD(IPI_IMR, RPU_1, 1, 9)
    DEP_FIELD(IPI_IMR, RPU_0, 1, 8)
    DEP_FIELD(IPI_IMR, APU, 1, 0)
DEP_REG32(IPI_IER, 0x18)
    DEP_FIELD(IPI_IER, PL_3, 1, 27)
    DEP_FIELD(IPI_IER, PL_2, 1, 26)
    DEP_FIELD(IPI_IER, PL_1, 1, 25)
    DEP_FIELD(IPI_IER, PL_0, 1, 24)
    DEP_FIELD(IPI_IER, PMU_3, 1, 19)
    DEP_FIELD(IPI_IER, PMU_2, 1, 18)
    DEP_FIELD(IPI_IER, PMU_1, 1, 17)
    DEP_FIELD(IPI_IER, PMU_0, 1, 16)
    DEP_FIELD(IPI_IER, RPU_1, 1, 9)
    DEP_FIELD(IPI_IER, RPU_0, 1, 8)
    DEP_FIELD(IPI_IER, APU, 1, 0)
DEP_REG32(IPI_IDR, 0x1c)
    DEP_FIELD(IPI_IDR, PL_3, 1, 27)
    DEP_FIELD(IPI_IDR, PL_2, 1, 26)
    DEP_FIELD(IPI_IDR, PL_1, 1, 25)
    DEP_FIELD(IPI_IDR, PL_0, 1, 24)
    DEP_FIELD(IPI_IDR, PMU_3, 1, 19)
    DEP_FIELD(IPI_IDR, PMU_2, 1, 18)
    DEP_FIELD(IPI_IDR, PMU_1, 1, 17)
    DEP_FIELD(IPI_IDR, PMU_0, 1, 16)
    DEP_FIELD(IPI_IDR, RPU_1, 1, 9)
    DEP_FIELD(IPI_IDR, RPU_0, 1, 8)
    DEP_FIELD(IPI_IDR, APU, 1, 0)

#define R_MAX (R_IPI_IDR + 1)

typedef struct IPI {
    SysBusDevice parent_obj;
    MemoryRegion iomem;
    qemu_irq irq;

    uint32_t regs[R_MAX];
    DepRegisterInfo regs_info[R_MAX];
} IPI;

static void ipi_update_irq(IPI *s)
{
    bool pending = s->regs[R_IPI_ISR] & ~s->regs[R_IPI_IMR];
    DB_PRINT("%s: irq=%d isr=%x mask=%x\n",
             object_get_canonical_path(OBJECT(s)),
             pending, s->regs[R_IPI_ISR], s->regs[R_IPI_IMR]);
    qemu_set_irq(s->irq, pending);
}

static void ipi_isr_postw(DepRegisterInfo *reg, uint64_t val64)
{
    IPI *s = XILINX_IPI(reg->opaque);
    ipi_update_irq(s);
}

static uint64_t ipi_ier_prew(DepRegisterInfo *reg, uint64_t val64)
{
    IPI *s = XILINX_IPI(reg->opaque);
    uint32_t val = val64;

    s->regs[R_IPI_IMR] &= ~val;
    ipi_update_irq(s);
    return 0;
}

static uint64_t ipi_idr_prew(DepRegisterInfo *reg, uint64_t val64)
{
    IPI *s = XILINX_IPI(reg->opaque);
    uint32_t val = val64;

    s->regs[R_IPI_IMR] |= val;
    ipi_update_irq(s);
    return 0;
}

static void ipi_trig_postw(DepRegisterInfo *reg, uint64_t val64) {
    IPI *s = XILINX_IPI(reg->opaque);
    uint64_t old_value = s->regs[R_IPI_TRIG];

    /* TRIG generates a pulse on the outbound signals. We use the
     * post-write callback to bring the signal back-down.  */
    s->regs[R_IPI_TRIG] = 0;
    dep_register_refresh_gpios(reg, old_value);
}

#define GPIO_TRIG_OUT(x) \
    { .name = stringify(x), .bit_pos = R_IPI_TRIG_ ## x ## _SHIFT, .width = 1 }

#define GPIO_OBS_OUT(x) \
    { .name = "OBS_" stringify(x), .bit_pos = R_IPI_ISR_ ## x ## _SHIFT, .width = 1 }

static DepRegisterAccessInfo ipi_regs_info[] = {
    {   .name = "IPI_TRIG",  .decode.addr = A_IPI_TRIG,
        .rsvd = 0xf0f0fcfe,
        .ro = 0xf0f0fcfe,
        .post_write = ipi_trig_postw,
        .gpios = (DepRegisterGPIOMapping[]) {
            GPIO_TRIG_OUT(APU),
            GPIO_TRIG_OUT(RPU_0),
            GPIO_TRIG_OUT(RPU_1),
            GPIO_TRIG_OUT(PMU_0),
            GPIO_TRIG_OUT(PMU_1),
            GPIO_TRIG_OUT(PMU_2),
            GPIO_TRIG_OUT(PMU_3),
            GPIO_TRIG_OUT(PL_0),
            GPIO_TRIG_OUT(PL_1),
            GPIO_TRIG_OUT(PL_2),
            GPIO_TRIG_OUT(PL_3),
            { },
        }
    },{ .name = "IPI_OBS",  .decode.addr = A_IPI_OBS,
        .rsvd = 0xf0f0fcfe,
        .ro = 0xffffffff,
    },{ .name = "IPI_ISR",  .decode.addr = A_IPI_ISR,
        .rsvd = 0xf0f0fcfe,
        .ro = 0xf0f0fcfe,
        .w1c = 0xf0f0301,
        .post_write = ipi_isr_postw,
        .gpios = (DepRegisterGPIOMapping[]) {
            GPIO_OBS_OUT(APU),
            GPIO_OBS_OUT(RPU_0),
            GPIO_OBS_OUT(RPU_1),
            GPIO_OBS_OUT(PMU_0),
            GPIO_OBS_OUT(PMU_1),
            GPIO_OBS_OUT(PMU_2),
            GPIO_OBS_OUT(PMU_3),
            GPIO_OBS_OUT(PL_0),
            GPIO_OBS_OUT(PL_1),
            GPIO_OBS_OUT(PL_2),
            GPIO_OBS_OUT(PL_3),
            { },
        }
    },{ .name = "IPI_IMR",  .decode.addr = A_IPI_IMR,
        .reset = 0xf0f0301,
        .rsvd = 0xf0f0fcfe,
        .ro = 0xffffffff,
    },{ .name = "IPI_IER",  .decode.addr = A_IPI_IER,
        .rsvd = 0xf0f0fcfe,
        .ro = 0xf0f0fcfe,
        .pre_write = ipi_ier_prew,
    },{ .name = "IPI_IDR",  .decode.addr = A_IPI_IDR,
        .rsvd = 0xf0f0fcfe,
        .ro = 0xf0f0fcfe,
        .pre_write = ipi_idr_prew,
    }
};

static void ipi_reset(DeviceState *dev)
{
    IPI *s = XILINX_IPI(dev);
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(s->regs_info); ++i) {
        dep_register_reset(&s->regs_info[i]);
    }

    ipi_update_irq(s);
}

static void ipi_handler(void *opaque, int n, int level)
{
    IPI *s = XILINX_IPI(opaque);
    DepRegisterInfo *r_isr = &s->regs_info[A_IPI_ISR / 4];
    uint32_t val = (!!level) << n;
    uint64_t old_value = s->regs[R_IPI_ISR];

    DB_PRINT("%s: %s: irq[%d]=%d\n", __func__,
             object_get_canonical_path(OBJECT(s)), n, level);

    s->regs[R_IPI_ISR] |= val;
    ipi_update_irq(s);
    dep_register_refresh_gpios(r_isr, old_value);
}

static void obs_handler(void *opaque, int n, int level)
{
    IPI *s = XILINX_IPI(opaque);

    s->regs[R_IPI_OBS] &= ~(1ULL << n);
    s->regs[R_IPI_OBS] |= (level << n);
}

static uint64_t ipi_read(void *opaque, hwaddr addr, unsigned size)
{
    IPI *s = XILINX_IPI(opaque);
    DepRegisterInfo *r = &s->regs_info[addr / 4];

    if (!r->data) {
        qemu_log_mask(LOG_GUEST_ERROR,
                      "%s: Decode error: read from %" HWADDR_PRIx "\n",
                      object_get_canonical_path(OBJECT(s)), addr);
        return 0;
    }
    return dep_register_read(r);
}

static void ipi_write(void *opaque, hwaddr addr, uint64_t value,
                      unsigned size)
{
    IPI *s = XILINX_IPI(opaque);
    DepRegisterInfo *r = &s->regs_info[addr / 4];

    if (!r->data) {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Decode error: write to"
                      " %" HWADDR_PRIx "=%" PRIx64 "\n",
                      object_get_canonical_path(OBJECT(s)), addr, value);
        return;
    }
    dep_register_write(r, value, ~0);
}

static const MemoryRegionOps ipi_ops = {
    .read = ipi_read,
    .write = ipi_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .valid = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

static void ipi_realize(DeviceState *dev, Error **errp)
{
    IPI *s = XILINX_IPI(dev);
    const char *prefix = object_get_canonical_path(OBJECT(dev));
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(ipi_regs_info); ++i) {
        DepRegisterInfo *r = &s->regs_info[ipi_regs_info[i].decode.addr/4];

        *r = (DepRegisterInfo) {
            .data = (uint8_t *)&s->regs[
                    ipi_regs_info[i].decode.addr/4],
            .data_size = sizeof(uint32_t),
            .access = &ipi_regs_info[i],
            .debug = XILINX_IPI_ERR_DEBUG,
            .prefix = prefix,
            .opaque = s,
        };
        dep_register_init(r);
        qdev_pass_all_gpios(DEVICE(r), dev);
    }

    qdev_init_gpio_in_named(dev, ipi_handler, "IPI_INPUTS", 32);
    qdev_init_gpio_in_named(dev, obs_handler, "OBS_INPUTS", 32);
}

static void ipi_init(Object *obj)
{
    IPI *s = XILINX_IPI(obj);
    SysBusDevice *sbd = SYS_BUS_DEVICE(obj);

    memory_region_init_io(&s->iomem, obj, &ipi_ops, s,
                          TYPE_XILINX_IPI, R_MAX * 4);
    sysbus_init_mmio(sbd, &s->iomem);
    sysbus_init_irq(sbd, &s->irq);
}

static const VMStateDescription vmstate_ipi = {
    .name = TYPE_XILINX_IPI,
    .version_id = 1,
    .minimum_version_id = 1,
    .minimum_version_id_old = 1,
    .fields = (VMStateField[]) {
        VMSTATE_UINT32_ARRAY(regs, IPI, R_MAX),
        VMSTATE_END_OF_LIST(),
    }
};

#define GPIO_FDT_TRIG_OUT(x, n)                                           \
    {                                                                     \
        .name = stringify(x),                                             \
        .fdt_index = n,                                                   \
    }

#define GPIO_FDT_OBS_OUT(x, n)                                            \
    {                                                                     \
        .name = "OBS_" stringify(x),                                      \
        .fdt_index = n,                                                   \
    }

static const FDTGenericGPIONameSet interrupt_gpios_names = {
    .propname = "interrupt-gpios",
    .cells_propname = "#gpio-cells",
    .names_propname = "gpio-names",
};

static const FDTGenericGPIOSet ipi_ctrl_gpios[] = {
    {
      .names = &fdt_generic_gpio_name_set_gpio,
      .gpios = (FDTGenericGPIOConnection[]) {
        { .name = "IPI_INPUTS", .fdt_index = 0, .range = 32 },
        { .name = "OBS_INPUTS", .fdt_index = 32, .range = 32 },
        { },
      },
    },
    { },
};

static const FDTGenericGPIOSet ipi_client_gpios[] = {
    {
        .names = &interrupt_gpios_names,
        .gpios = (FDTGenericGPIOConnection[]) {
            GPIO_FDT_TRIG_OUT(APU, 0),
            GPIO_FDT_TRIG_OUT(RPU_0, 1),
            GPIO_FDT_TRIG_OUT(RPU_1, 2),
            GPIO_FDT_TRIG_OUT(PMU_0, 3),
            GPIO_FDT_TRIG_OUT(PMU_1, 4),
            GPIO_FDT_TRIG_OUT(PMU_2, 5),
            GPIO_FDT_TRIG_OUT(PMU_3, 6),
            GPIO_FDT_TRIG_OUT(PL_0, 7),
            GPIO_FDT_TRIG_OUT(PL_1, 8),
            GPIO_FDT_TRIG_OUT(PL_2, 9),
            GPIO_FDT_TRIG_OUT(PL_3, 10),
        }
    },
    {
        .names = &fdt_generic_gpio_name_set_gpio,
        .gpios = (FDTGenericGPIOConnection[]) {
            GPIO_FDT_OBS_OUT(APU, 0),
            GPIO_FDT_OBS_OUT(RPU_0, 1),
            GPIO_FDT_OBS_OUT(RPU_1, 2),
            GPIO_FDT_OBS_OUT(PMU_0, 3),
            GPIO_FDT_OBS_OUT(PMU_1, 4),
            GPIO_FDT_OBS_OUT(PMU_2, 5),
            GPIO_FDT_OBS_OUT(PMU_3, 6),
            GPIO_FDT_OBS_OUT(PL_0, 7),
            GPIO_FDT_OBS_OUT(PL_1, 8),
            GPIO_FDT_OBS_OUT(PL_2, 9),
            GPIO_FDT_OBS_OUT(PL_3, 10),
        }
    },
    { },
};

static void ipi_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    FDTGenericGPIOClass *fggc = FDT_GENERIC_GPIO_CLASS(klass);

    dc->reset = ipi_reset;
    dc->realize = ipi_realize;
    dc->vmsd = &vmstate_ipi;
    fggc->controller_gpios = ipi_ctrl_gpios;
    fggc->client_gpios = ipi_client_gpios;
}

static const TypeInfo ipi_info = {
    .name          = TYPE_XILINX_IPI,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(IPI),
    .class_init    = ipi_class_init,
    .instance_init = ipi_init,
    .interfaces    = (InterfaceInfo[]) {
        { TYPE_FDT_GENERIC_GPIO },
        { }
    },
};

static void ipi_register_types(void)
{
    type_register_static(&ipi_info);
}

type_init(ipi_register_types)
