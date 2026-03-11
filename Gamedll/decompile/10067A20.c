/*
 * func-name: ??4ProductManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10067a20
 * callers: 0x100177f1
 * callees: 0x10007ffe, 0x1000ee5d, 0x10014790
 */

char *__thiscall GameClient::ProductManager::operator=(char *this, char *a2)
{
  if ( this + 4 != a2 + 4 )
    sub_1000EE5D((int)(a2 + 4));
  if ( this + 44 != a2 + 44 )
    sub_10014790((int)(a2 + 44));
  if ( this + 84 != a2 + 84 )
    sub_10007FFE((int)(a2 + 84));
  return this;
}
