/*
 * func-name: ??4EstabManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10129050
 * callers: 0x1001a0ff
 * callees: 0x10001c80, 0x1001873c
 */

char *__thiscall GameClient::EstabManager::operator=(char *this, int a2)
{
  if ( this + 4 != (char *)(a2 + 4) )
    sub_1001873C(a2 + 4);
  if ( this + 44 != (char *)(a2 + 44) )
    sub_10001C80(a2 + 44);
  return this;
}
