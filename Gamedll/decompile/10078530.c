/*
 * func-name: ??1CAnalyzeSystem@GameClient@@QAE@XZ_0
 * func-address: 0x10078530
 * callers: 0x1000c05e
 * callees: 0x1000484a, 0x102c9d50
 */

void __thiscall GameClient::CAnalyzeSystem::~CAnalyzeSystem(GameClient::CAnalyzeSystem *this)
{
  void **v1; // esi
  _BYTE v2[8]; // [esp+4h] [ebp-8h] BYREF

  v1 = (void **)((char *)this + 4);
  *(_DWORD *)this = &GameClient::CAnalyzeSystem::`vftable';
  sub_1000484A((int)v2, (int)this + 4, **((_DWORD **)this + 2), (int)this + 4, *((_DWORD *)this + 2));
  operator delete(v1[1]);
  v1[1] = 0;
  v1[2] = 0;
}
