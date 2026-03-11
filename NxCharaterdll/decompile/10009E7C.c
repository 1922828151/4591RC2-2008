/*
 * func-name: j__free
 * func-address: 0x10009e7c
 * callers: 0x10001000, 0x100017c0, 0x100021f0, 0x10002210, 0x10004610, 0x10009390, 0x10009430, 0x10009600, 0x10009900, 0x10009af0, 0x10009d20, 0x10009d70, 0x10009e1b, 0x1000b1c0, 0x1000e56b, 0x1001229c
 * callees: none
 */

// attributes: thunk
void __cdecl j__free(void *Block)
{
  free(Block);
}
