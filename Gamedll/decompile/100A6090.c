/*
 * func-name: sub_100A6090
 * func-address: 0x100a6090
 * callers: 0x100049a8
 * callees: 0x1001666c, 0x102c9d50
 */

void __thiscall sub_100A6090(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4);
  if ( v2 )
  {
    sub_1001666C(v2, *(_DWORD *)(this + 8));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
