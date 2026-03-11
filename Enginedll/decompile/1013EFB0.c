/*
 * func-name: sub_1013EFB0
 * func-address: 0x1013efb0
 * callers: 0x10055820, 0x10055990, 0x1005d480, 0x10074b30, 0x10074c30, 0x100cd060, 0x1013f390, 0x1013f480
 * callees: 0x101a2500
 */

void __thiscall sub_1013EFB0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  bool v6; // zf
  void **v7; // eax

  while ( *(_DWORD *)(this + 16) )
  {
    v2 = *(_DWORD *)(this + 16);
    if ( v2 )
    {
      v3 = v2 - 1;
      *(_DWORD *)(this + 16) = v3;
      if ( !v3 )
        *(_DWORD *)(this + 12) = 0;
    }
  }
  v4 = *(_DWORD *)(this + 8);
  while ( v4 )
  {
    v5 = *(_DWORD *)(this + 4);
    --v4;
    v6 = *(_DWORD *)(v5 + 4 * v4) == 0;
    v7 = (void **)(v5 + 4 * v4);
    if ( !v6 )
      operator delete(*v7);
  }
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
}
