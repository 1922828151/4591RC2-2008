/*
 * func-name: sub_1016C8A0
 * func-address: 0x1016c8a0
 * callers: none
 * callees: 0x1016d580, 0x101a2500
 */

int __thiscall sub_1016C8A0(char *this)
{
  void **v1; // esi
  int result; // eax
  char v3[8]; // [esp+4h] [ebp-8h] BYREF

  v1 = (void **)(this + 4);
  *(_DWORD *)this = &CTextMgr::`vftable';
  sub_1016D580(v3, this + 4, **((_DWORD **)this + 2), this + 4, *((_DWORD *)this + 2));
  operator delete(v1[1]);
  result = 0;
  v1[1] = 0;
  v1[2] = 0;
  return result;
}
