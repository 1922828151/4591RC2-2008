/*
 * func-name: sub_1011A200
 * func-address: 0x1011a200
 * callers: 0x101b9570
 * callees: 0x101a2500
 */

void __thiscall sub_1011A200(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 40 )
      std::string::~string(v2 + 12);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
