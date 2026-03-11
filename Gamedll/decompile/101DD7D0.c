/*
 * func-name: ??0Productor@GameClient@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x101dd7d0
 * callers: 0x1000aa33
 * callees: 0x1000d1ac, 0x10014c77
 */

_DWORD *__thiscall GameClient::Productor::Productor(_DWORD *this, void *a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, a2);
  if ( !GameClient::LogicFactory::s_pInstance )
    GameClient::LogicFactory::CreateInstance();
  GameClient::LogicFactory::regist(a2, (int)this);
  return this;
}
