import os, shutil, sys, tarfile, os.path

CCFLAGS = "-g -I include -ffreestanding -Wall -Wextra -w -O0"
LDFLAGS = CCFLAGS + ""
LD = "-nostdlib -lgcc -T link.ld -o"
CC = f"i686-elf-gcc {LDFLAGS}"
OUTPUT = f"./bin"
data = []
files = []


def build_all():
    try:
        shutil.rmtree(OUTPUT, ignore_errors=True)
        os.mkdir(OUTPUT)
        
        shutil.rmtree("./initrd/", ignore_errors=True)
        os.mkdir("./initrd/")
    except Exception as E:
        print(E)
    
    print("Building apps")
    os.system(f"i686-elf-gcc -nostdlib -lgcc -ffreestanding -I apps/include -c apps/examples/C/HelloWorld.c -o {OUTPUT}/HelloWorld.o")
    os.system(f"i686-elf-gcc -nostdlib -lgcc -ffreestanding -I apps/include -c apps/examples/C/sound.c -o {OUTPUT}/beep.o")
    os.system(f"i686-elf-gcc -nostdlib -lgcc -ffreestanding -I apps/include -c apps/examples/C/popsort_int_test.c -o {OUTPUT}/popsort_int_test.o")
    os.system(f"i686-elf-gcc -nostdlib -lgcc -ffreestanding -I apps/include -c apps/examples/C/vesa_Russia.c -o {OUTPUT}/vesa_Russia.o")
    
    os.system(f"i686-elf-gcc -nostdlib -lgcc -T apps/link.ld -o initrd/hi.elf {OUTPUT}/HelloWorld.o")
    os.system(f"i686-elf-gcc -nostdlib -lgcc -T apps/link.ld -o initrd/sort_int.elf {OUTPUT}/popsort_int_test.o")
    os.system(f"i686-elf-gcc -nostdlib -lgcc -T apps/link.ld -o initrd/Russia.elf {OUTPUT}/vesa_Russia.o")
    os.system(f"i686-elf-gcc -nostdlib -lgcc -T apps/link.ld -o initrd/beep.elf {OUTPUT}/beep.o")

    print("Create tar-fs")
    with open("initrd/readme.txt", 'w+') as fh:
        fh.write("""SynapseOS is simple OS by Aren Elchinyan""")


if __name__ == "__main__":
    try:
        build_all()
    except Exception as E:
        print(E)
        input()