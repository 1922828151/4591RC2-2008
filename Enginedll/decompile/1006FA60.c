/*
 * func-name: sub_1006FA60
 * func-address: 0x1006fa60
 * callers: 0x100700d0, 0x10070aa0
 * callees: 0x101a2500
 */

void __thiscall sub_1006FA60(int this)
{
  char *v2; // esi
  char *i; // edi

  v2 = *(char **)(this + 4);
  if ( v2 )
  {
    for ( i = *(char **)(this + 8); v2 != i; v2 += 36 )
      std::wstring::~wstring(v2);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
