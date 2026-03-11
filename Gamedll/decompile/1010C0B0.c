/*
 * func-name: sub_1010C0B0
 * func-address: 0x1010c0b0
 * callers: 0x1000c716
 * callees: 0x100069c9, 0x102c9d50
 */

void __thiscall sub_1010C0B0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4);
  if ( v2 )
  {
    sub_100069C9(v2, *(_DWORD *)(this + 8));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
