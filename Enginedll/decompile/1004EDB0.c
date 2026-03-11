/*
 * func-name: ?RemoveFromOcclusionList@Actor@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1004edb0
 * callers: none
 * callees: 0x100194a0, 0x1001cc30, 0x1004ea90
 */

int __thiscall Actor::RemoveFromOcclusionList(Actor *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int v9; // ebp
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // esi
  int v13; // edi
  _DWORD *v14; // edi
  struct Actor **v15; // eax
  struct Actor *v16; // ebp
  unsigned int i; // esi
  int v18; // ecx
  unsigned int v19; // edx
  int v20; // edi
  unsigned int v21; // esi
  int v22; // eax

  v9 = 0;
  if ( *((_DWORD *)this + 178) )
  {
    while ( 1 )
    {
      v10 = *((_DWORD *)this + 178);
      v11 = *(_DWORD *)(v10 + 3224);
      v12 = v10 + 3220;
      if ( !v11 || v9 >= (int)(*(_DWORD *)(v10 + 3228) - v11) >> 2 )
        break;
      v13 = *(_DWORD *)(v10 + 3224);
      if ( v11 > *(_DWORD *)(v10 + 3228) )
        invalid_parameter_noinfo();
      v14 = (_DWORD *)(v13 + 4 * v9);
      if ( (unsigned int)v14 > *(_DWORD *)(v12 + 8) || (unsigned int)v14 < *(_DWORD *)(v12 + 4) )
        invalid_parameter_noinfo();
      if ( (unsigned int)v14 >= *(_DWORD *)(v12 + 8) )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(&a2, *v14 + 444) )
      {
        v15 = (struct Actor **)std::vector<Actor *>::at((_DWORD *)(*((_DWORD *)this + 178) + 3220), v9);
        v16 = *v15;
        if ( *v15 && Actor::HasOnOcclusionList(this, *v15) )
        {
          for ( i = 0; ; ++i )
          {
            v18 = *((_DWORD *)this + 97);
            if ( !v18 || i >= (*((_DWORD *)this + 98) - v18) >> 2 )
              break;
            v19 = *((_DWORD *)this + 97);
            if ( v16 == *(struct Actor **)(v19 + 4 * i) )
            {
              v20 = *((_DWORD *)this + 97);
              if ( v19 > *((_DWORD *)this + 98) )
                invalid_parameter_noinfo();
              v21 = v20 + 4 * i;
              if ( v21 > *((_DWORD *)this + 98) || v21 < *((_DWORD *)this + 97) )
                invalid_parameter_noinfo();
              v22 = (int)(*((_DWORD *)this + 98) - (v21 + 4)) >> 2;
              if ( v22 > 0 )
                memmove_s((void *const)v21, 4 * v22, (const void *const)(v21 + 4), 4 * v22);
              *((_DWORD *)this + 98) -= 4;
              break;
            }
          }
          *((_DWORD *)v16 + 95) = 0;
        }
        return std::string::~string(&a2);
      }
      ++v9;
    }
  }
  return std::string::~string(&a2);
}
