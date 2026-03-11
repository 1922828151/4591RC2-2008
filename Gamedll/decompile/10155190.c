/*
 * func-name: ?AddDamageUnit@DamageManager@GameClient@@QAEXKPAVDamageUnit@2@@Z_0
 * func-address: 0x10155190
 * callers: 0x100091c4
 * callees: 0x10003440
 */

void __thiscall GameClient::DamageManager::AddDamageUnit(
        GameClient::DamageManager *this,
        unsigned int a2,
        struct GameClient::DamageUnit *a3)
{
  _DWORD v3[2]; // [esp+0h] [ebp-14h] BYREF
  _BYTE v4[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( a2 != -1 )
  {
    if ( a3 )
    {
      v3[0] = a2;
      v3[1] = a3;
      sub_10003440((int)v4, (int)v3);
    }
  }
}
