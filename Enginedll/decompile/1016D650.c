/*
 * func-name: sub_1016D650
 * func-address: 0x1016d650
 * callers: none
 * callees: 0x1016d580, 0x101a2500
 */

char *__thiscall sub_1016D650(char *this, char a2)
{
  void **v3; // esi
  int v5; // [esp+8h] [ebp-8h] BYREF

  v3 = (void **)(this + 4);
  *(_DWORD *)this = &CTextMgr::`vftable';
  sub_1016D580((int)(this + 4), &v5, (int)(this + 4), **((_DWORD **)this + 2), (int)(this + 4), *((_DWORD *)this + 2));
  operator delete(v3[1]);
  v3[1] = 0;
  v3[2] = 0;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
