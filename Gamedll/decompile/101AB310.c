/*
 * func-name: ?RemoveSeat@EstabManager@GameClient@@QAEPAVSeat@2@K@Z_0
 * func-address: 0x101ab310
 * callers: 0x10017e0e
 * callees: 0x10005a15, 0x10007d74
 */

struct GameClient::Seat *__thiscall GameClient::EstabManager::RemoveSeat(
        GameClient::EstabManager *this,
        unsigned int a2)
{
  void *v3; // ebp
  char *v4; // eax
  int v5; // esi
  _DWORD *v6; // ebx
  int v8; // ebp
  int v9; // [esp+10h] [ebp-8h] BYREF
  void *v10; // [esp+14h] [ebp-4h]

  sub_10005A15((int)&v9, (int)&a2);
  v3 = (void *)*((_DWORD *)this + 13);
  v4 = (char *)this + 48;
  v5 = v9;
  if ( !v9 || (char *)v9 != v4 )
    _invalid_parameter_noinfo();
  v6 = v10;
  if ( v10 == v3 )
    return 0;
  if ( !v5 )
    _invalid_parameter_noinfo();
  if ( v6 == *(_DWORD **)(v5 + 4) )
    _invalid_parameter_noinfo();
  v8 = v6[3];
  sub_10007D74((int)&v9, v5, v6);
  return (struct GameClient::Seat *)v8;
}
