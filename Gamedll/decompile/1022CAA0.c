/*
 * func-name: ??1FFunc_Sheild@GameClient@@UAE@XZ_0
 * func-address: 0x1022caa0
 * callers: 0x100031f2
 * callees: 0x10002509
 */

void __thiscall GameClient::FFunc_Sheild::~FFunc_Sheild(GameClient::FFunc_Sheild *this)
{
  *(_DWORD *)this = &GameClient::FFunc_Sheild::`vftable';
  std::string::~string((char *)this + 108);
  GameClient::FFunction::~FFunction(this);
}
