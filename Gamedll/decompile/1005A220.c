/*
 * func-name: sub_1005A220
 * func-address: 0x1005a220
 * callers: 0x1001708f
 * callees: 0x1000fcea, 0x102c9d50
 */

void __thiscall sub_1005A220(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4);
  if ( v2 )
  {
    sub_1000FCEA(v2, *(_DWORD *)(this + 8));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
