/*
 * func-name: ??1DamageManager@GameClient@@QAE@XZ_0
 * func-address: 0x101578c0
 * callers: 0x1001a9f1
 * callees: 0x10002900, 0x10019993, 0x102c9d50
 */

void __thiscall GameClient::DamageManager::~DamageManager(GameClient::DamageManager *this)
{
  void *v2; // eax

  v2 = (void *)*((_DWORD *)this + 15);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  sub_10019993();
  operator delete(*((void **)this + 12));
  *((_DWORD *)this + 12) = 0;
  if ( *((_DWORD *)this + 5) )
    operator delete(*((void **)this + 5));
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  sub_10002900();
}
