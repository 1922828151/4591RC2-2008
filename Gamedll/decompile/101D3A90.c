/*
 * func-name: ??0SLock@GameClient@@QAE@K@Z_0
 * func-address: 0x101d3a90
 * callers: 0x10014b41
 * callees: 0x10007d8d, 0x10015488
 */

GameClient::SLock *__thiscall GameClient::SLock::SLock(GameClient::SLock *this, unsigned int a2)
{
  void *v3; // ebx
  void *v4; // ebp
  int v6; // [esp+18h] [ebp-14h] BYREF

  GameClient::Skill::Skill(this, a2);
  *(_DWORD *)this = &GameClient::SLock::`vftable';
  *((_DWORD *)this + 172) = 0;
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  *((float *)this + 169) = 0.0;
  *((_DWORD *)this + 167) = -1;
  *((_DWORD *)this + 168) = -1;
  v3 = (void *)*((_DWORD *)this + 173);
  if ( *((_DWORD *)this + 172) > (unsigned int)v3 )
    _invalid_parameter_noinfo();
  v4 = (void *)*((_DWORD *)this + 172);
  if ( (unsigned int)v4 > *((_DWORD *)this + 173) )
    _invalid_parameter_noinfo();
  sub_10007D8D((int)&v6, (int)this + 684, v4, (int)this + 684, v3);
  return this;
}
