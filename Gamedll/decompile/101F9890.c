/*
 * func-name: ??1GroupManager@GameClient@@UAE@XZ_0
 * func-address: 0x101f9890
 * callers: 0x10012878
 * callees: 0x10002289, 0x10005c4f, 0x10009d9f, 0x1000e304, 0x10011699, 0x1001a4fb, 0x102c9d50
 */

void __thiscall GameClient::GroupManager::~GroupManager(GameClient::GroupManager *this)
{
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  void **v7; // esi
  int v8; // [esp-Ch] [ebp-34h]
  int *v9; // [esp-4h] [ebp-2Ch]
  _BYTE v10[8]; // [esp+14h] [ebp-14h] BYREF
  int v11; // [esp+24h] [ebp-4h]

  *(_DWORD *)this = &GameClient::GroupManager::`vftable';
  v2 = (void *)*((_DWORD *)this + 64);
  v11 = 6;
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  sub_10005C4F();
  operator delete(*((void **)this + 61));
  *((_DWORD *)this + 61) = 0;
  v9 = (int *)*((_DWORD *)this + 57);
  v8 = *v9;
  LOBYTE(v11) = 5;
  sub_10011699((int)v10, (int)this + 224, v8, (int)this + 224, (int)v9);
  operator delete(*((void **)this + 57));
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  LOBYTE(v11) = 4;
  std::string::~string((char *)this + 196);
  if ( *((_DWORD *)this + 42) )
    operator delete(*((void **)this + 42));
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  v3 = (void *)*((_DWORD *)this + 36);
  LOBYTE(v11) = 2;
  if ( v3 )
    operator delete(v3);
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  sub_10002289();
  operator delete(*((void **)this + 33));
  *((_DWORD *)this + 33) = 0;
  v4 = (void *)*((_DWORD *)this + 26);
  LOBYTE(v11) = 1;
  if ( v4 )
    operator delete(v4);
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  sub_10009D9F();
  operator delete(*((void **)this + 23));
  *((_DWORD *)this + 23) = 0;
  v5 = (void *)*((_DWORD *)this + 16);
  LOBYTE(v11) = 0;
  if ( v5 )
    operator delete(v5);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  sub_1001A4FB();
  operator delete(*((void **)this + 13));
  *((_DWORD *)this + 13) = 0;
  v6 = (void *)*((_DWORD *)this + 6);
  v11 = -1;
  if ( v6 )
    operator delete(v6);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  v7 = (void **)((char *)this + 8);
  sub_1000E304();
  operator delete(v7[1]);
  v7[1] = 0;
}
