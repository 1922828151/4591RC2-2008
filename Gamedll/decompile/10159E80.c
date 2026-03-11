/*
 * func-name: ?SetCurrentRotation@Equip@GameClient@@UAEXABVMatrix@@@Z_0
 * func-address: 0x10159e80
 * callers: 0x10012b75
 * callees: none
 */

void __thiscall GameClient::Equip::SetCurrentRotation(GameClient::Equip *this, const struct Matrix *a2)
{
  qmemcpy((char *)this + 36, a2, 0x40u);
  qmemcpy((void *)(*((_DWORD *)this + 45) + 868), a2, 0x40u);
}
