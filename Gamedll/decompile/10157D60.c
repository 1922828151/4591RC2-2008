/*
 * func-name: ??4DamageManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10157d60
 * callers: 0x10006bbd
 * callees: 0x100012b7, 0x100039db
 */

char *__thiscall GameClient::DamageManager::operator=(char *this, int a2)
{
  if ( this != (char *)a2 )
    sub_100012B7(a2);
  if ( this + 40 != (char *)(a2 + 40) )
    sub_100039DB(a2 + 40);
  return this;
}
