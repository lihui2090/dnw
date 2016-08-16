#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd4733cff, "module_layout" },
	{ 0xff389b63, "usb_deregister" },
	{ 0xeb3d960c, "usb_register_driver" },
	{ 0x281f751b, "mutex_trylock" },
	{ 0xd9575b33, "usb_find_interface" },
	{ 0xce65a0a8, "__mutex_init" },
	{ 0xb2ba53eb, "dev_set_drvdata" },
	{ 0xb3945d82, "usb_get_dev" },
	{ 0xf781259f, "usb_register_dev" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe0a07776, "usb_deregister_dev" },
	{ 0x74f13e03, "dev_get_drvdata" },
	{ 0x50eedeb8, "printk" },
	{ 0xdc387762, "usb_bulk_msg" },
	{ 0x33d169c9, "_copy_from_user" },
	{ 0xcc99e735, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

