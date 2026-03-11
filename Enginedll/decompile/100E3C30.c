/*
 * func-name: ?GatherTechniqueNames@Material@@AAEXXZ
 * func-address: 0x100e3c30
 * callers: 0x100e68a0
 * callees: 0x1000dc10, 0x100116a0
 */

void __thiscall Material::GatherTechniqueNames(Material *this)
{
  int v1; // ebx
  int *v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // ebp
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char v12; // bl
  unsigned int v13; // edi
  int j; // ebp
  int v15; // eax
  int v16; // eax
  unsigned int i; // [esp+1Ch] [ebp-50h] BYREF
  int v18; // [esp+24h] [ebp-48h]
  _DWORD v19[3]; // [esp+28h] [ebp-44h] BYREF
  int v20; // [esp+34h] [ebp-38h] BYREF
  unsigned int v21; // [esp+3Ch] [ebp-30h]
  _DWORD v22[7]; // [esp+44h] [ebp-28h] BYREF
  int v23; // [esp+68h] [ebp-4h]

  v18 = *(_DWORD *)(*((_DWORD *)this + 38) + 16);
  v1 = v18;
  if ( v18 )
  {
    v2 = (int *)((char *)this + 100);
    v3 = *((_DWORD *)this + 27);
    if ( *((_DWORD *)this + 26) > v3 )
      invalid_parameter_noinfo();
    v4 = v2[1];
    if ( v4 > v2[2] )
      invalid_parameter_noinfo();
    sub_1000DC10(v2, &i, (int)v2, v4, (int)v2, v3);
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v1 + 12))(v1, &v20);
    v5 = 0;
    for ( i = 0; v5 < v21; i = v5 )
    {
      v6 = (*(int (__stdcall **)(int, unsigned int))(*(_DWORD *)v1 + 48))(v1, v5);
      (*(void (__stdcall **)(int, int, _DWORD *))(*(_DWORD *)v1 + 20))(v1, v6, v19);
      std::string::string(v22, v19[0]);
      v23 = 0;
      if ( *(_BYTE *)std::string::operator[](v22, 0) == 95 )
      {
        v23 = -1;
        std::string::~string(v22);
      }
      else
      {
        if ( std::string::find(v22, "_Ambient", 0) != -1 )
        {
          v7 = std::string::find(v22, "_Ambient", 0);
          std::string::erase(v22, v7, std::string::npos);
        }
        if ( std::string::find(v22, "_Point", 0) != -1 )
        {
          v8 = std::string::find(v22, "_Point", 0);
          std::string::erase(v22, v8, std::string::npos);
        }
        if ( std::string::find(v22, "_Spot", 0) != -1 )
        {
          v9 = std::string::find(v22, "_Spot", 0);
          std::string::erase(v22, v9, std::string::npos);
        }
        if ( std::string::find(v22, "_OmniProj", 0) != -1 )
        {
          v10 = std::string::find(v22, "_OmniProj", 0);
          std::string::erase(v22, v10, std::string::npos);
        }
        if ( std::string::find(v22, "_PS", 0) != -1 )
        {
          v11 = std::string::find(v22, "_PS", 0);
          std::string::erase(v22, v11, std::string::npos);
        }
        v12 = 0;
        v13 = 0;
        for ( j = 0; ; j += 28 )
        {
          v15 = v2[1];
          if ( !v15 || v13 >= (v2[2] - v15) / 28 )
            break;
          v16 = v2[1];
          if ( !v16 || v13 >= (v2[2] - v16) / 28 )
            invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(j + v2[1], v22) )
            v12 = 1;
          ++v13;
        }
        if ( !v12 )
          sub_100116A0(v2, v22);
        v23 = -1;
        std::string::~string(v22);
        v5 = i;
        v1 = v18;
      }
      ++v5;
    }
  }
}
