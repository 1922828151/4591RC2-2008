/*
 * func-name: ??4RobotManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10066ad0
 * callers: 0x1000711c
 * callees: 0x100100e6
 */

_DWORD *__thiscall GameClient::RobotManager::operator=(_DWORD *this, int a2)
{
  if ( this != (_DWORD *)a2 )
    sub_100100E6(a2);
  this[10] = *(_DWORD *)(a2 + 40);
  this[11] = *(_DWORD *)(a2 + 44);
  return this;
}
