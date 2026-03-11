/*
 * func-name: ?AddAura@AuraManager@GameClient@@QAEPAVAura@2@PAV32@@Z_0
 * func-address: 0x101423d0
 * callers: 0x1000dc92
 * callees: 0x10010f91
 */

struct GameClient::Aura *__thiscall GameClient::AuraManager::AddAura(
        GameClient::AuraManager *this,
        struct GameClient::Aura *a2)
{
  _DWORD v3[2]; // [esp+4h] [ebp-14h] BYREF
  _BYTE v4[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !a2 )
    return 0;
  v3[0] = *((_DWORD *)a2 + 3);
  v3[1] = a2;
  sub_10010F91((int)v4, (int)v3);
  return a2;
}
