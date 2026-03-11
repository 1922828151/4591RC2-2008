/*
 * func-name: sub_100D26D0
 * func-address: 0x100d26d0
 * callers: 0x100d2fe0, 0x100d30d0, 0x100d30e0, 0x10155b90, 0x10155c80
 * callees: 0x101a2500
 */

void __thiscall sub_100D26D0(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 36 )
      std::wstring::~wstring((void *)(v2 + 4));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
