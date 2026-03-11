/*
 * func-name: ??0CAnalyzeSystem@GameClient@@QAE@XZ_0
 * func-address: 0x100784e0
 * callers: 0x1000c6f3
 * callees: 0x100013d9
 */

GameClient::CAnalyzeSystem *__thiscall GameClient::CAnalyzeSystem::CAnalyzeSystem(GameClient::CAnalyzeSystem *this)
{
  char *v2; // esi
  int v3; // eax
  GameClient::CAnalyzeSystem *result; // eax

  v2 = (char *)this + 4;
  *(_DWORD *)this = &GameClient::CAnalyzeSystem::`vftable';
  v3 = sub_100013D9();
  *((_DWORD *)v2 + 1) = v3;
  *(_BYTE *)(v3 + 21) = 1;
  *(_DWORD *)(*((_DWORD *)v2 + 1) + 4) = *((_DWORD *)v2 + 1);
  **((_DWORD **)v2 + 1) = *((_DWORD *)v2 + 1);
  *(_DWORD *)(*((_DWORD *)v2 + 1) + 8) = *((_DWORD *)v2 + 1);
  result = this;
  *((_DWORD *)v2 + 2) = 0;
  return result;
}
