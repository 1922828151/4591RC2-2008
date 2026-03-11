/*
 * func-name: ??1World@@QAE@XZ
 * func-address: 0x1013df40
 * callers: 0x1004ef90, 0x10087570, 0x10087a10, 0x10088400, 0x1010a6c0, 0x1016e550, 0x1016e600
 * callees: 0x1000cb70, 0x1000cc00, 0x1000db00, 0x10017cd0, 0x10026e50, 0x10029240, 0x10029ca0, 0x10102270, 0x10118a60, 0x1013db50, 0x1013f480, 0x101a2500
 */

void __thiscall World::~World(World *this)
{
  void *v2; // edi
  void *v3; // edi
  int *v4; // edi
  void *v5; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // [esp-4h] [ebp-28h]
  int v9; // [esp+10h] [ebp-14h] BYREF
  int v10; // [esp+20h] [ebp-4h]

  *(_DWORD *)this = &World::`vftable';
  v10 = 14;
  World::UnLoadWorld(this);
  v2 = (void *)*((_DWORD *)this + 156);
  if ( v2 )
  {
    Texture::~Texture(*((void ***)this + 156));
    operator delete(v2);
    *((_DWORD *)this + 156) = 0;
  }
  if ( World::m_DeleteWorld )
    World::m_DeleteWorld(this);
  v3 = (void *)*((_DWORD *)this + 4);
  if ( v3 )
  {
    std::ios_base::~ios_base(*((std::ios_base **)this + 4));
    operator delete(v3);
    *((_DWORD *)this + 4) = 0;
  }
  v4 = (int *)*((_DWORD *)this + 189);
  if ( v4 )
  {
    v5 = (void *)*v4;
    if ( *v4 )
    {
      sub_10102270(*v4);
      operator delete(v5);
      *v4 = 0;
    }
    operator delete(v4);
    *((_DWORD *)this + 189) = 0;
  }
  LOBYTE(v10) = 13;
  SkySettings::~SkySettings((World *)((char *)this + 3288));
  if ( *((_DWORD *)this + 818) )
    operator delete(*((void **)this + 818));
  *((_DWORD *)this + 818) = 0;
  *((_DWORD *)this + 819) = 0;
  *((_DWORD *)this + 820) = 0;
  if ( *((_DWORD *)this + 814) )
    operator delete(*((void **)this + 814));
  *((_DWORD *)this + 814) = 0;
  *((_DWORD *)this + 815) = 0;
  *((_DWORD *)this + 816) = 0;
  if ( *((_DWORD *)this + 810) )
    operator delete(*((void **)this + 810));
  *((_DWORD *)this + 810) = 0;
  *((_DWORD *)this + 811) = 0;
  *((_DWORD *)this + 812) = 0;
  if ( *((_DWORD *)this + 806) )
    operator delete(*((void **)this + 806));
  *((_DWORD *)this + 806) = 0;
  *((_DWORD *)this + 807) = 0;
  *((_DWORD *)this + 808) = 0;
  std::string::~string((char *)this + 3188);
  LOBYTE(v10) = 7;
  PRTSettings::~PRTSettings((World *)((char *)this + 896));
  v6 = *((_DWORD *)this + 221);
  LOBYTE(v10) = 6;
  if ( v6 )
  {
    sub_1000CC00(v6, *((_DWORD *)this + 222));
    operator delete(*((void **)this + 221));
  }
  *((_DWORD *)this + 221) = 0;
  *((_DWORD *)this + 222) = 0;
  *((_DWORD *)this + 223) = 0;
  sub_10029CA0((int *)this + 196);
  LOBYTE(v10) = 4;
  sub_1000DB00((int *)this + 183);
  if ( *((_DWORD *)this + 178) )
    operator delete(*((void **)this + 178));
  *((_DWORD *)this + 178) = 0;
  *((_DWORD *)this + 179) = 0;
  *((_DWORD *)this + 180) = 0;
  if ( *((_DWORD *)this + 158) )
    operator delete(*((void **)this + 158));
  *((_DWORD *)this + 158) = 0;
  *((_DWORD *)this + 159) = 0;
  *((_DWORD *)this + 160) = 0;
  LOBYTE(v10) = 1;
  std::string::~string((char *)this + 596);
  v7 = **((_DWORD **)this + 2);
  v8 = *((_DWORD *)this + 2);
  LOBYTE(v10) = 0;
  sub_10026E50((int)this + 4, &v9, (int)this + 4, v7, (int)this + 4, v8);
  operator delete(*((void **)this + 2));
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v10 = -1;
  RenderBase::~RenderBase(this);
}
