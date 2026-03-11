/*
 * func-name: sub_1009F650
 * func-address: 0x1009f650
 * callers: 0x100127d8
 * callees: none
 */

bool __thiscall sub_1009F650(int this, int a2, void *a3, char a4)
{
  int v5; // eax
  _DWORD v7[11]; // [esp-24h] [ebp-2Ch] BYREF

  std::string::operator=(this + 8, a3);
  v7[8] = 1;
  v7[7] = a2;
  *(_BYTE *)(this + 36) = a4;
  std::string::string(v7, a3);
  v5 = Precacher::CacheActorGroup();
  *(_DWORD *)(this + 4) = v5;
  return v5 != 0;
}
