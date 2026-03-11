/*
 * func-name: sub_10252D40
 * func-address: 0x10252d40
 * callers: 0x10010ab9
 * callees: 0x102c9d50
 */

void __thiscall sub_10252D40(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 56 )
      std::wstring::~wstring((void *)(v2 + 4));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
