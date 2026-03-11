/*
 * func-name: sub_1018A1C0
 * func-address: 0x1018a1c0
 * callers: 0x10015438
 * callees: 0x100095b6, 0x102c9d50
 */

void __thiscall sub_1018A1C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4);
  if ( v2 )
  {
    sub_100095B6(v2, *(_DWORD *)(this + 8));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
