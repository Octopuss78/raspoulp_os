CFILES = $(wildcard *.c)
OFILES = $(CFILES:.c=.o)
CFLAGS = -Wall -ffreestanding -nostdinc -nostdlib -nostartfiles
ARMGNU = aarch64-linux-gnu

all: clean kernel8.img

boot.o: boot.S
	$(ARMGNU)-gcc $(CFLAGS) -c boot.S -o boot.o

%.o: %.c
	$(ARMGNU)-gcc $(CFLAGS) -c $< -o $@

kernel8.img: boot.o $(OFILES)
	$(ARMGNU)-ld -nostdlib boot.o $(OFILES) -T link.ld -o kernel8.elf
	$(ARMGNU)-objcopy -O binary kernel8.elf kernel8.img

clean:
	/bin/rm kernel8.elf *.o *.img > /dev/null 2> /dev/null || true
