/*
 * func-name: ?LoadTMPModel@CombinRobot@GameClient@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z_0
 * func-address: 0x1010fdd0
 * callers: 0x1000bc3a
 * callees: none
 */

char __thiscall GameClient::CombinRobot::LoadTMPModel(_DWORD *this, void *a2, int a3, int a4)
{
  int v5; // eax
  _DWORD v7[12]; // [esp-28h] [ebp-30h] BYREF

  v7[9] = 1;
  v7[8] = 0;
  v7[7] = 0;
  v7[11] = v7;
  std::string::string(v7, a2);
  v5 = Precacher::CacheModelTMP();
  this[179] = v5;
  if ( !v5 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, int, int))(*this + 112))(this, a3, a4);
  return 1;
}
