/*
 * func-name: ?Initialize@ShaderManager@@QAEXXZ
 * func-address: 0x10126010
 * callers: 0x10097ea0
 * callees: 0x100116a0, 0x100971c0, 0x1009d850, 0x1009d890, 0x10125860, 0x1017b040, 0x1017c0d0, 0x101a2500, 0x101a2534
 */

void __thiscall ShaderManager::Initialize(ShaderManager *this)
{
  char v1; // al
  unsigned int v2; // ebx
  char *i; // edi
  char *v4; // esi
  char *v5; // esi
  int v6; // eax
  unsigned int v7; // edi
  int v8; // ebp
  void *v9; // esi
  char *v10; // esi
  char *v11; // edi
  char *v12; // eax
  _DWORD *v13; // eax
  ShaderManager *v14; // esi
  char *v15; // eax
  _DWORD *v16; // eax
  char *v17; // esi
  char *v18; // edi
  char v19; // [esp-38h] [ebp-8Ch] BYREF
  int v20; // [esp-34h] [ebp-88h]
  int v21; // [esp-30h] [ebp-84h]
  int v22; // [esp-2Ch] [ebp-80h]
  int v23; // [esp-28h] [ebp-7Ch]
  int v24; // [esp-24h] [ebp-78h]
  int v25; // [esp-20h] [ebp-74h]
  char v26; // [esp-1Ch] [ebp-70h] BYREF
  int v27; // [esp-18h] [ebp-6Ch]
  int v28; // [esp-14h] [ebp-68h]
  int v29; // [esp-10h] [ebp-64h]
  int v30; // [esp-Ch] [ebp-60h]
  _BYTE *v31; // [esp-8h] [ebp-5Ch]
  unsigned int v32; // [esp-4h] [ebp-58h]
  char *v33; // [esp+10h] [ebp-44h]
  ShaderManager *v34; // [esp+14h] [ebp-40h]
  char *v35; // [esp+18h] [ebp-3Ch]
  int v36; // [esp+1Ch] [ebp-38h] BYREF
  void *v37; // [esp+20h] [ebp-34h]
  char *v38; // [esp+24h] [ebp-30h]
  int v39; // [esp+28h] [ebp-2Ch]
  _BYTE v40[4]; // [esp+2Ch] [ebp-28h] BYREF
  void *v41; // [esp+30h] [ebp-24h]
  char *v42; // [esp+34h] [ebp-20h]
  int v43; // [esp+38h] [ebp-1Ch]
  int v44; // [esp+50h] [ebp-4h]

  v34 = this;
  v33 = &v26;
  std::string::string(&v26, &unk_101C9C26);
  v35 = &v19;
  v44 = 0;
  std::string::string(&v19, "ForceShaderRecompile");
  LOBYTE(v44) = 1;
  Engine::Instance();
  v44 = -1;
  v1 = sub_1017C0D0(v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32);
  v35 = &v26;
  byte_112417B5 = v1;
  std::string::string(&v26, &unk_101C9C27);
  v33 = &v19;
  v44 = 2;
  std::string::string(&v19, "ForceAllShaderGroupsRecompile");
  LOBYTE(v44) = 3;
  Engine::Instance();
  v44 = -1;
  byte_112417B6 = sub_1017C0D0(v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32);
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v44 = 4;
  sub_1017B040("..\\Shaders\\", &v36, 8);
  std::string::string(v40, "..\\Shaders\\");
  LOBYTE(v44) = 5;
  sub_100116A0(&v36, v40);
  LOBYTE(v44) = 4;
  std::string::~string(v40);
  v2 = 0;
  for ( i = 0; ; i += 28 )
  {
    v33 = i;
    if ( !v37 || v2 >= (v38 - (_BYTE *)v37) / 28 )
      break;
    if ( std::string::find((char *)v37 + (_DWORD)i, "Comp_", 0) == -1 )
    {
      v4 = (char *)v37;
      if ( !v37 || v2 >= (v38 - (_BYTE *)v37) / 28 )
      {
        invalid_parameter_noinfo();
        v4 = (char *)v37;
      }
      if ( std::string::find(&v4[(_DWORD)i], "Compiled", 0) == -1 )
      {
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v5 = (char *)v37;
        LOBYTE(v44) = 6;
        if ( !v37 || v2 >= (v38 - (_BYTE *)v37) / 28 )
        {
          invalid_parameter_noinfo();
          v5 = (char *)v37;
        }
        v32 = 3;
        v31 = v40;
        v6 = std::string::c_str(&v5[(_DWORD)i]);
        sub_1017B040(v6, v31, v32);
        v7 = 0;
        v8 = 0;
        while ( v41 && v7 < (v42 - (_BYTE *)v41) / 28 )
        {
          if ( std::string::find((char *)v41 + v8, "Comp_", 0) != -1 )
            goto LABEL_21;
          ++v7;
          v8 += 28;
        }
        v9 = v37;
        if ( !v37 || v2 >= (v38 - (_BYTE *)v37) / 28 )
        {
          invalid_parameter_noinfo();
          v9 = v37;
        }
        v35 = &v26;
        std::string::string(&v26, &v33[(_DWORD)v9]);
        Shader::CompileAllEffects(v26);
LABEL_21:
        v10 = (char *)v41;
        LOBYTE(v44) = 4;
        if ( v41 )
        {
          v11 = v42;
          if ( v41 != v42 )
          {
            do
            {
              std::string::~string(v10);
              v10 += 28;
            }
            while ( v10 != v11 );
            v10 = (char *)v41;
          }
          operator delete(v10);
        }
        i = v33;
        v41 = 0;
        v42 = 0;
        v43 = 0;
      }
    }
    ++v2;
  }
  v12 = (char *)operator new(0xACu);
  v35 = v12;
  LOBYTE(v44) = 7;
  if ( v12 )
    v13 = sub_1009D850(v12);
  else
    v13 = 0;
  v14 = v34;
  v32 = 180;
  LOBYTE(v44) = 4;
  *((_DWORD *)v34 + 49) = v13;
  v15 = (char *)operator new(v32);
  v35 = v15;
  LOBYTE(v44) = 8;
  if ( v15 )
    v16 = sub_1009D890(v15, 32);
  else
    v16 = 0;
  *((_DWORD *)v14 + 50) = v16;
  v17 = (char *)v37;
  v44 = -1;
  if ( v37 )
  {
    v18 = v38;
    if ( v37 != v38 )
    {
      do
      {
        std::string::~string(v17);
        v17 += 28;
      }
      while ( v17 != v18 );
      v17 = (char *)v37;
    }
    operator delete(v17);
  }
}
