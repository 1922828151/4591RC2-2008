/*
 * func-name: sub_101FE570
 * func-address: 0x101fe570
 * callers: 0x1000342c
 * callees: 0x102c9d50
 */

void __thiscall sub_101FE570(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 84 )
      std::string::~string((void *)(v2 + 4));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
