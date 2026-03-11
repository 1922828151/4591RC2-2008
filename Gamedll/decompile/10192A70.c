/*
 * func-name: ??4LocalUserManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10192a70
 * callers: 0x100168f1
 * callees: 0x10017896
 */

char *__thiscall GameClient::LocalUserManager::operator=(char *this, int a2)
{
  if ( this + 4 != (char *)(a2 + 4) )
    sub_10017896(a2 + 4);
  return this;
}
