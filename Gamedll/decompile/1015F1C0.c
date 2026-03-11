/*
 * func-name: ??1EquipManager@GameClient@@QAE@XZ_0
 * func-address: 0x1015f1c0
 * callers: 0x1001143c
 * callees: 0x100103ca, 0x10017d64, 0x102c9d50
 */

void __thiscall GameClient::EquipManager::~EquipManager(void **this)
{
  GameClient::EquipManager::ClearSystemPart((GameClient::EquipManager *)this);
  if ( this[5] )
    operator delete(this[5]);
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_100103CA();
}
