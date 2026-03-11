/*
 * func-name: sub_1009ABE0
 * func-address: 0x1009abe0
 * callers: 0x100993e0, 0x100999b0, 0x1009ade0
 * callees: 0x100999b0, 0x101a2500
 */

void __thiscall sub_1009ABE0(int this)
{
  char *v2; // esi
  char *i; // edi

  v2 = *(char **)(this + 4);
  if ( v2 )
  {
    for ( i = *(char **)(this + 8); v2 != i; v2 += 104 )
      sub_100999B0(v2);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
