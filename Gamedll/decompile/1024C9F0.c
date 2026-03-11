/*
 * func-name: ??4?$ProductorTemplate@VFSLock@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1024c9f0
 * callers: 0x10002e32
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FSLock>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}
