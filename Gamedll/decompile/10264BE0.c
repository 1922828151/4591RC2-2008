/*
 * func-name: sub_10264BE0
 * func-address: 0x10264be0
 * callers: 0x1000b07d
 * callees: 0x102c9d50
 */

void __thiscall sub_10264BE0(int this)
{
  char *v2; // esi
  char *i; // edi

  v2 = *(char **)(this + 4);
  if ( v2 )
  {
    for ( i = *(char **)(this + 8); v2 != i; v2 += 44 )
      std::wstring::~wstring(v2);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
