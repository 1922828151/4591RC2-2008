/*
 * func-name: ?AddToOcclusionList@Actor@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10050870
 * callers: none
 * callees: 0x10012a30, 0x100194a0, 0x1001cc30, 0x1004ea90
 */

int __thiscall Actor::AddToOcclusionList(Actor *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int v9; // ebx
  bool v10; // zf
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // esi
  int v15; // edi
  _DWORD *v16; // edi
  struct Actor *v17; // esi
  int v18[2]; // [esp+8h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-4h]

  v9 = 0;
  v10 = *((_DWORD *)this + 178) == 0;
  v19 = 0;
  if ( v10 )
  {
    v19 = -1;
    return std::string::~string(&a2);
  }
  else
  {
    *((_BYTE *)this + 1012) = 1;
    while ( 1 )
    {
      v12 = *((_DWORD *)this + 178);
      v13 = *(_DWORD *)(v12 + 3224);
      v14 = v12 + 3220;
      if ( !v13 || v9 >= (int)(*(_DWORD *)(v12 + 3228) - v13) >> 2 )
        break;
      v15 = *(_DWORD *)(v12 + 3224);
      if ( (int)(*(_DWORD *)(v12 + 3228) - v13) >> 2 <= v9 )
        std::vector<Actor *>::_Xran();
      if ( v13 > *(_DWORD *)(v12 + 3228) )
        invalid_parameter_noinfo();
      v18[1] = v15;
      v16 = (_DWORD *)(v15 + 4 * v9);
      if ( (unsigned int)v16 > *(_DWORD *)(v14 + 8) || (unsigned int)v16 < *(_DWORD *)(v14 + 4) )
        invalid_parameter_noinfo();
      if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 8) )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(&a2, *v16 + 444) )
      {
        v17 = *(struct Actor **)std::vector<Actor *>::at((_DWORD *)(*((_DWORD *)this + 178) + 3220), v9);
        v18[0] = (int)v17;
        if ( v17 )
        {
          if ( !Actor::HasOnOcclusionList(this, v17) )
          {
            std::vector<Actor *>::push_back((_DWORD *)this + 96, v18);
            *((_DWORD *)v17 + 95) = this;
          }
        }
        break;
      }
      ++v9;
    }
    v19 = -1;
    return std::string::~string(&a2);
  }
}
