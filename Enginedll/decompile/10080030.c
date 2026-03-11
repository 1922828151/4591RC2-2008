/*
 * func-name: sub_10080030
 * func-address: 0x10080030
 * callers: 0x10087570, 0x10087a10, 0x10088400
 * callees: 0x1004d6c0, 0x1007ea80
 */

int __cdecl sub_10080030(GUID *a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  int v3; // ecx
  int v4; // esi
  unsigned int v5; // edi
  int j; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _BYTE v11[28]; // [esp+10h] [ebp-44h] BYREF
  _BYTE v12[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v13; // [esp+50h] [ebp-4h]
  Actor *i; // [esp+58h] [ebp+4h]

  Actor::GenerateNewGUID(a1);
  std::string::string(v12, &a1[27].Data4[4]);
  v13 = 0;
  Editor::FixName((struct World **)Editor::inst, (struct Actor *)a1);
  std::string::string(v11, &a1[27].Data4[4]);
  v1 = *(_DWORD *)a1[44].Data4;
  v2 = 0;
  LOBYTE(v13) = 1;
  for ( i = 0; ; v2 = (unsigned int)i )
  {
    v3 = *(_DWORD *)(v1 + 3224);
    if ( !v3 || v2 >= (*(_DWORD *)(v1 + 3228) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(*(_DWORD *)(v1 + 3224) + 4 * v2);
    v5 = 0;
    for ( j = 0; ; j += 28 )
    {
      v7 = *(_DWORD *)(v4 + 340);
      if ( !v7 || v5 >= (*(_DWORD *)(v4 + 344) - v7) / 28 )
        break;
      v8 = *(_DWORD *)(v4 + 340);
      if ( !v8 || v5 >= (*(_DWORD *)(v4 + 344) - v8) / 28 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(j + *(_DWORD *)(v4 + 340), v12) )
      {
        v9 = *(_DWORD *)(v4 + 340);
        if ( !v9 || v5 >= (*(_DWORD *)(v4 + 344) - v9) / 28 )
          invalid_parameter_noinfo();
        std::string::operator=(j + *(_DWORD *)(v4 + 340), v11);
      }
      ++v5;
    }
    i = (Actor *)((char *)i + 1);
  }
  LOBYTE(v13) = 0;
  std::string::~string(v11);
  v13 = -1;
  return std::string::~string(v12);
}
