/*
 * func-name: sub_10059D60
 * func-address: 0x10059d60
 * callers: 0x1000ff7e
 * callees: 0x102c9d50
 */

void __thiscall sub_10059D60(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 40 )
      std::string::~string((void *)(v2 + 8));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
