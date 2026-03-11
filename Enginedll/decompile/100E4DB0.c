/*
 * func-name: ?ExtractParameters@Material@@QAEXXZ
 * func-address: 0x100e4db0
 * callers: 0x100e68a0
 * callees: 0x10009dd0, 0x10009e40, 0x1000d3d0, 0x10012320, 0x10019470, 0x10023610, 0x100977a0, 0x100e2980, 0x100e4800, 0x100e8100, 0x101208a0, 0x10122ce0, 0x10136290, 0x10136530, 0x1017eaef, 0x101a2500, 0x101a252e, 0x101a2534
 */

void __thiscall Material::ExtractParameters(Material *this)
{
  int v1; // ebp
  int v2; // eax
  const char *v3; // edi
  ShaderVar *v4; // esi
  void **v5; // ebx
  int v6; // eax
  int String; // eax
  int v8; // eax
  void (**v9)(void *, const char *, ...); // edi
  int v10; // eax
  unsigned int v11; // edi
  _DWORD *v12; // esi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  Texture *v17; // eax
  Texture *v18; // esi
  unsigned int v19; // edi
  char *v20; // esi
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  void *v24; // ebp
  void *v25; // eax
  bool v26; // zf
  char v27[4]; // [esp+1Ch] [ebp-4D0h] BYREF
  int v28; // [esp+20h] [ebp-4CCh]
  int v29; // [esp+24h] [ebp-4C8h]
  int v30; // [esp+28h] [ebp-4C4h]
  int v31; // [esp+2Ch] [ebp-4C0h] BYREF
  int v32; // [esp+30h] [ebp-4BCh]
  int v33; // [esp+34h] [ebp-4B8h] BYREF
  int v34; // [esp+38h] [ebp-4B4h]
  int v35; // [esp+3Ch] [ebp-4B0h]
  int v36; // [esp+40h] [ebp-4ACh]
  int v37; // [esp+44h] [ebp-4A8h]
  int v38; // [esp+48h] [ebp-4A4h]
  int v39; // [esp+4Ch] [ebp-4A0h]
  Texture *v40; // [esp+50h] [ebp-49Ch]
  Material *v41; // [esp+64h] [ebp-488h]
  int v42; // [esp+68h] [ebp-484h] BYREF
  int *v43; // [esp+6Ch] [ebp-480h]
  unsigned int i; // [esp+70h] [ebp-47Ch]
  int v45; // [esp+74h] [ebp-478h]
  int v46; // [esp+78h] [ebp-474h] BYREF
  void *v47; // [esp+7Ch] [ebp-470h]
  int v48; // [esp+80h] [ebp-46Ch]
  int v49; // [esp+84h] [ebp-468h]
  const char *v50; // [esp+88h] [ebp-464h] BYREF
  int v51; // [esp+94h] [ebp-458h]
  int v52; // [esp+98h] [ebp-454h]
  unsigned int v53; // [esp+9Ch] [ebp-450h]
  size_t Size; // [esp+B0h] [ebp-43Ch]
  _BYTE v55[4]; // [esp+B4h] [ebp-438h] BYREF
  unsigned int v56; // [esp+B8h] [ebp-434h]
  _BYTE v57[28]; // [esp+C4h] [ebp-428h] BYREF
  _DWORD Src[256]; // [esp+E0h] [ebp-40Ch] BYREF
  int v59; // [esp+4E8h] [ebp-4h]

  v41 = this;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v1 = *(_DWORD *)(*((_DWORD *)this + 38) + 16);
  v59 = 0;
  v45 = v1;
  if ( v1 )
  {
    v2 = (*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)v1 + 12))(v1, v55);
    if ( v2 )
    {
      v25 = v47;
      v26 = v47 == 0;
    }
    else
    {
      for ( i = 0; i < v56; ++i )
      {
        v3 = (const char *)(*(int (__stdcall **)(int, _DWORD, int))(*(_DWORD *)v1 + 32))(v1, 0, v2);
        if ( (*(int (__stdcall **)(int, const char *, const char **))(*(_DWORD *)v1 + 16))(v1, v3, &v50) >= 0
          && Material::Tweakable(v41, v3) )
        {
          v42 = (int)operator new(0x118u);
          LOBYTE(v59) = 1;
          if ( v42 )
          {
            v40 = 0;
            *(float *)&v39 = 0.0;
            v38 = 3;
            v43 = &v31;
            std::string::string(&v31, &unk_101C6F25);
            v4 = (ShaderVar *)ShaderVar::ShaderVar(v31, v32, v33, v34, v35, v36, v37, v38, v39, v40);
          }
          else
          {
            v4 = 0;
          }
          v5 = (void **)v4;
          LOBYTE(v59) = 0;
          v42 = (int)v4;
          if ( v53 > 1 && v51 != 3 )
            SeriousWarning(
              "Material engine cannot parse arrays/tuples of any values but floats. %s does not meet this criteria",
              v50);
          v6 = (*(int (__stdcall **)(int, const char *, const char *))(*(_DWORD *)v1 + 76))(v1, v3, "UIHelp");
          if ( v6 )
          {
            String = Shader::GetString(v57, v6);
            LOBYTE(v59) = 2;
            std::string::operator=((char *)v4 + 32, String);
            LOBYTE(v59) = 0;
            std::string::~string(v57);
          }
          std::string::operator=((char *)v4 + 4, v50);
          v8 = (*(int (__stdcall **)(int, const char *, _DWORD *, int))(*(_DWORD *)v1 + 84))(v1, v50, Src, -1);
          if ( v8 < 0 )
          {
            v9 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
            v10 = sub_1017EAEF(v8);
            (*v9)(dword_11249F38, " Error: %s, in: pEffect->GetValue(pdesc.Name, data, D3DX_DEFAULT)", v10);
          }
          switch ( v51 )
          {
            case 1:
              *(_DWORD *)v4 = 1;
              ShaderVar::Alloc(v4, Src, Size);
              goto LABEL_35;
            case 2:
              *(_DWORD *)v4 = 2;
              ShaderVar::Alloc(v4, Src, Size);
              goto LABEL_35;
            case 3:
              ShaderVar::Alloc(v4, Src, Size);
              if ( v52 == 1 )
              {
                switch ( v53 )
                {
                  case 1u:
                    *(_DWORD *)v4 = 3;
                    break;
                  case 2u:
                    *(_DWORD *)v4 = 4;
                    break;
                  case 3u:
                    *(_DWORD *)v4 = 5;
                    break;
                  case 4u:
                    *(_DWORD *)v4 = 6;
                    break;
                  default:
                    SeriousWarning("Can't do above float4. %s is a float%d", v50, v53);
                    break;
                }
LABEL_35:
                v11 = 0;
                v12 = (_DWORD *)((char *)v41 + 276);
                while ( 1 )
                {
                  v13 = v12[1];
                  if ( !v13 || v11 >= (v12[2] - v13) >> 2 )
                    break;
                  v14 = v12[1];
                  if ( *(_DWORD *)(v14 + 4 * v11) )
                  {
                    if ( !v14 || v11 >= (v12[2] - v14) >> 2 )
                      invalid_parameter_noinfo();
                    if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(4 * v11 + v12[1]) + 4, v5 + 1) )
                    {
                      v15 = v12[1];
                      if ( !v15 || v11 >= (v12[2] - v15) >> 2 )
                        invalid_parameter_noinfo();
                      v16 = v12[1];
                      if ( **(void ***)(v16 + 4 * v11) == *v5 )
                      {
                        if ( v51 == 1 || v51 == 3 || v51 == 2 )
                        {
                          if ( !v16 || v11 >= (v12[2] - v16) >> 2 )
                            invalid_parameter_noinfo();
                          memcpy(v5[15], *(const void **)(*(_DWORD *)(v12[1] + 4 * v11) + 60), Size);
                        }
                        if ( *v5 == (void *)9 )
                        {
                          ShaderVar::~ShaderVar((ShaderVar *)v5);
                          operator delete(v5);
                          v5 = *(void ***)std::vector<Model *>::operator[](v12, v11);
                          *(_DWORD *)std::vector<Model *>::operator[](v12, v11) = 0;
                        }
                      }
                    }
                  }
                  v1 = v45;
                  ++v11;
                }
                v26 = *v5 == (void *)9;
                v42 = (int)v5;
                if ( v26 && !v5[15] )
                {
                  v17 = (Texture *)operator new(0x9Cu);
                  v43 = (int *)v17;
                  LOBYTE(v59) = 3;
                  if ( v17 )
                    v18 = Texture::Texture(v17);
                  else
                    v18 = 0;
                  v40 = 0;
                  *(float *)&v39 = 0.0;
                  *(float *)&v38 = 1.0;
                  LOBYTE(v59) = 0;
                  *(float *)&v37 = 1.0;
                  *(float *)&v36 = 0.0;
                  *(float *)&v35 = 0.0;
                  v34 = 0;
                  v43 = (int *)v27;
                  std::string::string(v27, (char *)v18 + 100);
                  Texture::Load(
                    v27[0],
                    v28,
                    v29,
                    v30,
                    v31,
                    v32,
                    v33,
                    v34,
                    *(float *)&v35,
                    *(float *)&v36,
                    *(float *)&v37,
                    *(float *)&v38,
                    *(float *)&v39,
                    (int)v40);
                  v40 = v18;
                  v43 = &v33;
                  std::string::string(&v33, v5 + 1);
                  ShaderVar::Set((ShaderVar *)v5, v33, v34, v35, v36, v37, v38, v39, (int)v40);
                }
                sub_10012320(&v46, &v42);
              }
              else if ( v4 )
              {
                ShaderVar::~ShaderVar(v4);
                operator delete(v4);
              }
              break;
            case 4:
              *(_DWORD *)v4 = 11;
              goto LABEL_35;
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
              *(_DWORD *)v4 = 9;
              if ( Src[0] )
                (*(void (__stdcall **)(_DWORD))(*(_DWORD *)Src[0] + 8))(Src[0]);
              goto LABEL_35;
            default:
              SeriousWarning("WARNING: Unknown type in connection manager");
              goto LABEL_35;
          }
        }
        v2 = i + 1;
      }
      v19 = 0;
      v20 = (char *)v41 + 276;
      while ( 1 )
      {
        v21 = *((_DWORD *)v20 + 1);
        if ( !v21 || v19 >= (*((_DWORD *)v20 + 2) - v21) >> 2 )
          break;
        v22 = *((_DWORD *)v20 + 1);
        if ( *(_DWORD *)(v22 + 4 * v19) )
        {
          if ( !v22 || v19 >= (*((_DWORD *)v20 + 2) - v22) >> 2 )
            invalid_parameter_noinfo();
          v23 = *((_DWORD *)v20 + 1);
          v24 = *(void **)(v23 + 4 * v19);
          if ( v24 )
          {
            ShaderVar::~ShaderVar(*(ShaderVar **)(v23 + 4 * v19));
            operator delete(v24);
          }
        }
        ++v19;
      }
      sub_100E8100((int)v20, 0, 0);
      sub_10023610((int)v20, (int)&v46);
      Material::SetEditorVars(v41);
      v25 = v47;
      v26 = v47 == 0;
    }
    if ( !v26 )
      operator delete(v25);
  }
}
