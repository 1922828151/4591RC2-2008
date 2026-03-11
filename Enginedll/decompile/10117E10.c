/*
 * func-name: sub_10117E10
 * func-address: 0x10117e10
 * callers: 0x10118420
 * callees: none
 */

char __thiscall sub_10117E10(int this, int a2)
{
  if ( *(_BYTE *)(this + 20) )
  {
    free(*(void **)(this + 8));
    free(*(void **)(this + 4));
    *(_DWORD *)(this + 4) = malloc(4 * a2);
    *(_DWORD *)(this + 8) = malloc(4 * a2);
  }
  return 1;
}
