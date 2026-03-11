/*
 * func-name: ??4LogicFactory@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x100668f0
 * callers: 0x1000b569
 * callees: 0x1000df2b, 0x100118fb
 */

char *__thiscall GameClient::LogicFactory::operator=(char *this, int a2)
{
  if ( this != (char *)a2 )
    sub_100118FB(a2);
  if ( this + 40 != (char *)(a2 + 40) )
    sub_1000DF2B(a2 + 40);
  return this;
}
