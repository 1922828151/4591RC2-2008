/*
 * func-name: sub_10026E00
 * func-address: 0x10026e00
 * callers: 0x1002bae0, 0x1002d1d0, 0x1002d280
 * callees: 0x101a2500
 */

void __thiscall sub_10026E00(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 52 )
      std::string::~string(v2 + 4);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
