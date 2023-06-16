// jmp 0x00534312

call 00534312

push 0x2710
call dword ptr ds:[0x0076B234]
add esp, 4

// mov dword ptr ss:[ebp-0x324], 0x0
// jmp 0x005343C8