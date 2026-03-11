/*
 * func-name: ?IsStoreFull@Func_Store@GameClient@@QAE_NXZ_0
 * func-address: 0x101c4fd0
 * callers: 0x10007e96
 * callees: none
 */

bool __thiscall GameClient::Func_Store::IsStoreFull(GameClient::Func_Store *this)
{
  return *((_DWORD *)this + 22) == *((_DWORD *)this + 21);
}
