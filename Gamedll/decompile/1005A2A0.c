/*
 * func-name: sub_1005A2A0
 * func-address: 0x1005a2a0
 * callers: 0x10004912
 * callees: 0x1000b82a, 0x102c9d50
 */

void __thiscall sub_1005A2A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4);
  if ( v2 )
  {
    sub_1000B82A(v2, *(_DWORD *)(this + 8));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
