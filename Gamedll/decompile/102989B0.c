/*
 * func-name: sub_102989B0
 * func-address: 0x102989b0
 * callers: 0x10015d16
 * callees: 0x10002eff, 0x102c9d50
 */

void __thiscall sub_102989B0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4);
  if ( v2 )
  {
    sub_10002EFF(v2, *(_DWORD *)(this + 8));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
