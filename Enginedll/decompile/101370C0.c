/*
 * func-name: sub_101370C0
 * func-address: 0x101370c0
 * callers: 0x1013e2e0, 0x1013ec20, 0x1013ed50
 * callees: 0x101a24ac, 0x101a252e, 0x101a253a
 */

void __thiscall sub_101370C0(int this, unsigned int a2)
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
