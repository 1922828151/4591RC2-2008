/*
 * func-name: ??4EstabControllerManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101b5d40
 * callers: 0x10002b0d
 * callees: 0x10018dcc
 */

char *__thiscall GameClient::EstabControllerManager::operator=(char *this, int a2)
{
  if ( this + 4 != (char *)(a2 + 4) )
    sub_10018DCC(a2 + 4);
  return this;
}
