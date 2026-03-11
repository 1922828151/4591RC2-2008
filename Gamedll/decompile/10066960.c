/*
 * func-name: ??4FuncManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10066960
 * callers: 0x1000505b
 * callees: 0x1000b32a
 */

char *__thiscall GameClient::FuncManager::operator=(char *this, int a2)
{
  if ( this + 4 != (char *)(a2 + 4) )
    sub_1000B32A(a2 + 4);
  return this;
}
