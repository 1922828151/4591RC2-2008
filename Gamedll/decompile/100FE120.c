/*
 * func-name: ?UnloadResourcesFPV@AEquip@GameClient@@UAEXXZ_0
 * func-address: 0x100fe120
 * callers: 0x1001a51e
 * callees: none
 */

void __thiscall GameClient::AEquip::UnloadResourcesFPV(struct Model **this)
{
  std::string::operator=(this + 319, &unk_1031127E);
  std::string::operator=(this + 326, &unk_1031127F);
  Precacher::PurgeModel(this + 341);
}
