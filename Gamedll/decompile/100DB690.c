/*
 * func-name: ?RefreshOptions@AnimationModal@@MAEXXZ_0
 * func-address: 0x100db690
 * callers: 0x1000b06e
 * callees: 0x10002a95, 0x1000864d, 0x1000b43d, 0x10017c7e, 0x10019484
 */

void __thiscall AnimationModal::RefreshOptions(AnimationModal *this)
{
  char *v2; // edi
  int v3; // ebx
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  int i; // ebp
  int v8; // eax
  int v9; // eax
  int AnimHandle; // eax
  int v11; // edx
  unsigned int v12; // edi
  int j; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _BYTE v17[44]; // [esp-1Ch] [ebp-34h] BYREF
  _BYTE *v18; // [esp+10h] [ebp-8h] BYREF

  v2 = (char *)this + 1136;
  sub_1000864D((int)this + 1236, (int)this + 1236, 1, -1);
  v3 = *((_DWORD *)this + 306);
  sub_1000B43D(v2);
  if ( v3 != *((_DWORD *)this + 306) )
  {
    v4 = *((_DWORD *)this + 351);
    if ( *((_DWORD *)this + 350) > v4 )
      _invalid_parameter_noinfo();
    v5 = *((_DWORD *)this + 350);
    if ( v5 > *((_DWORD *)this + 351) )
      _invalid_parameter_noinfo();
    sub_10017C7E((int)&v18, (int)this + 1396, v5, (int)this + 1396, v4);
    AnimationModal::EnumFrame(this, *(struct ModelFrame **)(*((_DWORD *)this + 306) + 308));
    v6 = 0;
    for ( i = 0; ; i += 120 )
    {
      v8 = *((_DWORD *)this + 350);
      if ( !v8 || v6 >= (*((_DWORD *)this + 351) - v8) / 120 )
        break;
      v9 = *((_DWORD *)this + 350);
      if ( !v9 || v6 >= (*((_DWORD *)this + 351) - v9) / 120 )
        _invalid_parameter_noinfo();
      sub_10019484(*((_DWORD *)this + 178), *((_DWORD *)this + 306));
      ++v6;
    }
  }
  v18 = v17;
  std::string::string(v17, (char *)this + 1236);
  AnimHandle = Precacher::GetAnimHandle();
  v11 = *((_DWORD *)this + 306);
  *((_DWORD *)this + 308) = AnimHandle;
  *((_DWORD *)this + 179) = v11;
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 1284, (char *)this + 1312) )
  {
    std::string::operator=((char *)this + 1312, (char *)this + 1284);
    *((_DWORD *)this + 175) = World::FindActor(*((_DWORD *)this + 178), (char *)this + 1284);
  }
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 1340, (char *)this + 1368) )
  {
    std::string::operator=((char *)this + 1368, (char *)this + 1340);
    v12 = 0;
    for ( j = 0; ; j += 120 )
    {
      v14 = *((_DWORD *)this + 350);
      if ( !v14 || v12 >= (*((_DWORD *)this + 351) - v14) / 120 )
        break;
      v15 = *((_DWORD *)this + 350);
      if ( !v15 || v12 >= (*((_DWORD *)this + 351) - v15) / 120 )
        _invalid_parameter_noinfo();
      std::string::operator=(j + *((_DWORD *)this + 350), (char *)this + 1340);
      v16 = *((_DWORD *)this + 350);
      if ( !v16 || v12 >= (*((_DWORD *)this + 351) - v16) / 120 )
        _invalid_parameter_noinfo();
      sub_10019484(*((_DWORD *)this + 178), *((_DWORD *)this + 306));
      ++v12;
    }
  }
}
