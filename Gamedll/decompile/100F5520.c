/*
 * func-name: sub_100F5520
 * func-address: 0x100f5520
 * callers: 0x1001816a
 * callees: 0x102c99de, 0x102c9dc8, 0x102ca13e
 */

void __thiscall sub_100F5520(int this, unsigned int a2)
{
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // edi
  void *v6; // ebx
  const void *v7; // eax

  v3 = *(_DWORD *)(this + 8);
  v4 = *(_DWORD *)(this + 16);
  if ( v4 <= a2 + v3 )
  {
    v5 = (1 - (unsigned int)(__int64)((double)a2 * -0.00390625)) << 8;
    v6 = operator new(v5 + v4);
    v7 = *(const void **)(this + 4);
    if ( v7 )
    {
      memcpy(v6, v7, *(_DWORD *)(this + 16));
      if ( *(_DWORD *)(this + 4) )
      {
        operator delete[](*(void **)(this + 4));
        *(_DWORD *)(this + 4) = 0;
      }
    }
    *(_DWORD *)(this + 16) += v5;
    *(_DWORD *)(this + 4) = v6;
  }
}
