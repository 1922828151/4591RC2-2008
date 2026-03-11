/*
 * func-name: nullsub_5
 * func-address: 0x10007744
 * callers: none
 * callees: none
 */

int nullsub_5()
{
  _BYTE retaddr[8]; // [esp+0h] [ebp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_DWORD *)retaddr)();
}
