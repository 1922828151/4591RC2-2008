/*
 * func-name: ?AddSeat@EstabManager@GameClient@@QAE_NPAVSeat@2@@Z_0
 * func-address: 0x101ab7c0
 * callers: 0x10019164
 * callees: 0x10005a15, 0x10009575
 */

char __thiscall GameClient::EstabManager::AddSeat(GameClient::EstabManager *this, struct GameClient::Seat *a2)
{
  struct GameClient::Seat *v2; // ebx
  char *v4; // eax
  struct GameClient::Seat *v5; // esi
  char *v7; // [esp+Ch] [ebp-14h] BYREF
  struct GameClient::Seat *v8; // [esp+10h] [ebp-10h]
  char v9[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = a2;
  a2 = (struct GameClient::Seat *)*((_DWORD *)a2 + 21);
  sub_10005A15((int)&v7, (int)&a2);
  v4 = (char *)this + 48;
  v5 = (struct GameClient::Seat *)*((_DWORD *)this + 13);
  if ( !v7 || v7 != v4 )
    _invalid_parameter_noinfo();
  if ( v8 != v5 )
    return 0;
  v7 = (char *)*((_DWORD *)v2 + 21);
  v8 = v2;
  sub_10009575((int)v9, (int)&v7);
  return 1;
}
