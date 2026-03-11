/*
 * func-name: sub_101E19F0
 * func-address: 0x101e19f0
 * callers: 0x1000bc76
 * callees: 0x100016a4, 0x102c9d50
 */

void __thiscall sub_101E19F0(int this)
{
  int v2; // eax
  int v3; // esi

  v2 = *(_DWORD *)(this + 196);
  v3 = this + 192;
  if ( v2 )
  {
    sub_100016A4(v2, *(_DWORD *)(this + 200));
    operator delete(*(void **)(v3 + 4));
  }
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  if ( *(_DWORD *)(this + 180) )
    operator delete(*(void **)(this + 180));
  *(_DWORD *)(this + 180) = 0;
  *(_DWORD *)(this + 184) = 0;
  *(_DWORD *)(this + 188) = 0;
  std::string::~string((void *)(this + 144));
  std::string::~string((void *)(this + 116));
  std::string::~string((void *)(this + 88));
  std::string::~string((void *)(this + 60));
  std::string::~string((void *)(this + 4));
}
