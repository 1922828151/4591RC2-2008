/*
 * func-name: ??4Group@Message@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10004d70
 * callers: none
 * callees: 0x100090e0, 0x10009320
 */

char *__thiscall Outpop::Message::Group::operator=(char *this, char *a2)
{
  if ( this != a2 )
    sub_100090E0(this, a2);
  if ( this + 40 != a2 + 40 )
    sub_10009320(this + 40, a2 + 40);
  return this;
}
