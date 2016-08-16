PWD = $(shell pwd)
KERNEL_SRC = /lib/modules/3.2.0-4-686-pae/build

obj-m := secbulk.o
module-objs := secbulk.o

all:
	$(MAKE) -C $(KERNEL_SRC) M=$(PWD) modules
clean:
	rm *.ko
	rm *.o
