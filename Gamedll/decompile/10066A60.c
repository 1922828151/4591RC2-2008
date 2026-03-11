/*
 * func-name: ??4FlyweightManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10066a60
 * callers: 0x10005083
 * callees: 0x100044a3, 0x10010cda
 */

_DWORD *__thiscall GameClient::FlyweightManager::operator=(_DWORD *this, int a2)
{
  if ( this != (_DWORD *)a2 )
    sub_100044A3(a2);
  if ( this + 10 != (_DWORD *)(a2 + 40) )
    sub_10010CDA(a2 + 40);
  this[20] = *(_DWORD *)(a2 + 80);
  return this;
}
