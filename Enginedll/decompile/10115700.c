/*
 * func-name: sub_10115700
 * func-address: 0x10115700
 * callers: 0x1010e120, 0x10115a30, 0x10115c20, 0x10115c90
 * callees: 0x10115520, 0x101a2500
 */

void __thiscall sub_10115700(int this)
{
  int *v2; // eax

  v2 = *(int **)(this + 4);
  if ( v2 )
  {
    sub_10115520(v2, *(int **)(this + 8));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
