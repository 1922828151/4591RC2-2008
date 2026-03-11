/*
 * func-name: ?AddUser@LocalUserManager@GameClient@@QAEKABUDESC_LOCALUSER@2@@Z_0
 * func-address: 0x1020ed60
 * callers: 0x1000bb36
 * callees: 0x100042eb, 0x1000dbf7, 0x10018147, 0x102c9d98
 */

unsigned int __thiscall GameClient::LocalUserManager::AddUser(
        GameClient::LocalUserManager *this,
        const struct GameClient::DESC_LOCALUSER *a2)
{
  const struct GameClient::DESC_LOCALUSER *v3; // edi
  char *v4; // eax
  int v5; // esi
  int v7; // eax
  char *v8; // ecx
  char *v9; // [esp+10h] [ebp-20h] BYREF
  int v10; // [esp+14h] [ebp-1Ch]
  char v11[12]; // [esp+18h] [ebp-18h] BYREF
  int v12; // [esp+2Ch] [ebp-4h]

  v3 = a2;
  a2 = *(const struct GameClient::DESC_LOCALUSER **)a2;
  sub_1000DBF7((int)&v9, (int)&a2);
  v4 = (char *)this + 8;
  v5 = *((_DWORD *)this + 3);
  if ( !v9 || v9 != v4 )
    _invalid_parameter_noinfo();
  if ( v10 != v5 )
    return -1;
  a2 = (const struct GameClient::DESC_LOCALUSER *)operator new(0x7Cu);
  v12 = 0;
  if ( a2 )
    v7 = sub_10018147((int)v3);
  else
    v7 = 0;
  v8 = *(char **)v3;
  v10 = v7;
  v9 = v8;
  v12 = -1;
  sub_100042EB((int)v11, (int)&v9);
  return *(_DWORD *)v3;
}
