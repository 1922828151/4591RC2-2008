/*
 * func-name: ??1SLock@GameClient@@UAE@XZ_0
 * func-address: 0x101d3b40
 * callers: 0x1000e8e5
 * callees: 0x10007d8d, 0x102c9d50
 */

void __thiscall GameClient::SLock::~SLock(GameClient::SLock *this)
{
  char *v2; // esi
  void *v3; // edi
  void *v4; // ebp
  int v5; // [esp+Ch] [ebp-8h] BYREF

  v2 = (char *)this + 684;
  *(_DWORD *)this = &GameClient::SLock::`vftable';
  v3 = (void *)*((_DWORD *)this + 173);
  if ( *((_DWORD *)this + 172) > (unsigned int)v3 )
    _invalid_parameter_noinfo();
  v4 = (void *)*((_DWORD *)v2 + 1);
  if ( (unsigned int)v4 > *((_DWORD *)v2 + 2) )
    _invalid_parameter_noinfo();
  sub_10007D8D((int)&v5, (int)v2, v4, (int)v2, v3);
  if ( *((_DWORD *)v2 + 1) )
    operator delete(*((void **)v2 + 1));
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = 0;
  GameClient::Skill::~Skill(this);
}
