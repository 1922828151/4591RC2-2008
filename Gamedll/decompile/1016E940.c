/*
 * func-name: ??1ProductManager@GameClient@@UAE@XZ_0
 * func-address: 0x1016e940
 * callers: 0x1000943f
 * callees: 0x10002de7, 0x10012bac, 0x1001a546, 0x102c9d50
 */

void __thiscall GameClient::ProductManager::~ProductManager(GameClient::ProductManager *this)
{
  void *v2; // eax

  *(_DWORD *)this = &GameClient::ProductManager::`vftable';
  v2 = (void *)*((_DWORD *)this + 26);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  sub_10012BAC();
  operator delete(*((void **)this + 23));
  *((_DWORD *)this + 23) = 0;
  if ( *((_DWORD *)this + 16) )
    operator delete(*((void **)this + 16));
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  sub_1001A546();
  operator delete(*((void **)this + 13));
  *((_DWORD *)this + 13) = 0;
  if ( *((_DWORD *)this + 6) )
    operator delete(*((void **)this + 6));
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  sub_10002DE7();
}
