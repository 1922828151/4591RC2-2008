/*
 * func-name: nullsub_4
 * func-address: 0x10007734
 * callers: none
 * callees: none
 */

int nullsub_4()
{
  _BYTE retaddr[8]; // [esp+0h] [ebp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_DWORD *)retaddr)();
}
