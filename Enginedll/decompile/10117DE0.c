/*
 * func-name: sub_10117DE0
 * func-address: 0x10117de0
 * callers: 0x100a0e10
 * callees: none
 */

void __thiscall sub_10117DE0(int this)
{
  if ( *(_BYTE *)(this + 20) )
  {
    free(*(void **)(this + 8));
    free(*(void **)(this + 4));
  }
}
