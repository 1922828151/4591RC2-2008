/*
 * func-name: ?AddEstablishment@EstabManager@GameClient@@QAE_NPAVEstablishment@2@@Z_0
 * func-address: 0x101ab740
 * callers: 0x1000e26e
 * callees: 0x10001b72, 0x100080da
 */

char __thiscall GameClient::EstabManager::AddEstablishment(
        GameClient::EstabManager *this,
        struct GameClient::Establishment *a2)
{
  struct GameClient::Establishment *v2; // ebx
  char *v4; // eax
  struct GameClient::Establishment *v5; // esi
  char *v7; // [esp+Ch] [ebp-14h] BYREF
  struct GameClient::Establishment *v8; // [esp+10h] [ebp-10h]
  char v9[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = a2;
  a2 = (struct GameClient::Establishment *)*((_DWORD *)a2 + 3);
  sub_10001B72((int)&v7, (int)&a2);
  v4 = (char *)this + 8;
  v5 = (struct GameClient::Establishment *)*((_DWORD *)this + 3);
  if ( !v7 || v7 != v4 )
    _invalid_parameter_noinfo();
  if ( v8 != v5 )
    return 0;
  v7 = (char *)*((_DWORD *)v2 + 3);
  v8 = v2;
  sub_100080DA((int)v9, (int)&v7);
  return 1;
}
