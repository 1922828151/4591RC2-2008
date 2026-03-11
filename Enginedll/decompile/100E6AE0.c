/*
 * func-name: ?CloneTo@Material@@QAEXPAV1@@Z
 * func-address: 0x100e6ae0
 * callers: 0x10003a50, 0x1003a4c0, 0x10040990
 * callees: 0x100e4800, 0x100e68a0, 0x10122bb0, 0x10136530, 0x101a24ac, 0x101a252e
 */

void __thiscall Material::CloneTo(Material *this, struct Material *a2)
{
  const char *v3; // eax
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  char *v10; // edi
  char *v11; // ebx
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // ebx
  int v15; // ecx
  int v16; // ecx
  char *v17; // ebx
  int v18; // ecx
  char *v19; // edi
  void *v20; // ecx
  unsigned int v21; // ebx
  ShaderVar *v22; // edi
  void *v23; // eax
  int v24; // eax
  int v25; // ecx
  char v26; // [esp-20h] [ebp-54h] BYREF
  int v27; // [esp-1Ch] [ebp-50h]
  int v28; // [esp-18h] [ebp-4Ch]
  int v29; // [esp-14h] [ebp-48h]
  int v30; // [esp-10h] [ebp-44h]
  int v31; // [esp-Ch] [ebp-40h]
  int v32; // [esp-8h] [ebp-3Ch]
  int v33; // [esp-4h] [ebp-38h]
  float v34; // [esp+0h] [ebp-34h]
  float v35; // [esp+4h] [ebp-30h]
  float v36; // [esp+8h] [ebp-2Ch]
  float v37; // [esp+Ch] [ebp-28h]
  float v38; // [esp+10h] [ebp-24h]
  unsigned int v39; // [esp+14h] [ebp-20h]
  unsigned int v40; // [esp+28h] [ebp-Ch]
  int v41; // [esp+2Ch] [ebp-8h]
  void *Src; // [esp+30h] [ebp-4h]
  unsigned int i; // [esp+38h] [ebp+4h]

  v3 = (const char *)std::string::c_str((char *)this + 156);
  Material::Initialize(a2, v3, &byte_101C6E8F, 0);
  v5 = 0;
LABEL_2:
  v6 = *((_DWORD *)this + 70);
  v40 = v5;
  if ( v6 && v5 < (*((_DWORD *)this + 71) - v6) >> 2 )
  {
    for ( i = 0; ; ++i )
    {
      while ( 1 )
      {
        v7 = *((_DWORD *)a2 + 70);
        if ( !v7 || i >= (*((_DWORD *)a2 + 71) - v7) >> 2 )
        {
          ++v5;
          goto LABEL_2;
        }
        v8 = *((_DWORD *)this + 70);
        if ( !v8 || v5 >= (*((_DWORD *)this + 71) - v8) >> 2 )
          invalid_parameter_noinfo();
        v9 = *((_DWORD *)a2 + 70);
        v10 = (char *)(4 * v5);
        v11 = &v10[*((_DWORD *)this + 70)];
        Src = v10;
        if ( !v9 || i >= (*((_DWORD *)a2 + 71) - v9) >> 2 )
          invalid_parameter_noinfo();
        v12 = *(_DWORD *)(*((_DWORD *)a2 + 70) + 4 * i);
        v41 = 4 * i;
        if ( (unsigned __int8)std::operator==<char>(v12 + 4, *(_DWORD *)v11 + 4) )
          break;
LABEL_35:
        ++i;
        v5 = v40;
      }
      v13 = *((_DWORD *)this + 70);
      v14 = v40;
      if ( !v13 || v40 >= (*((_DWORD *)this + 71) - v13) >> 2 )
        invalid_parameter_noinfo();
      v15 = *((_DWORD *)this + 70);
      if ( **(_DWORD **)&v10[v15] == 9 )
      {
        v39 = 0;
        v38 = 0.0;
        v37 = 1.0;
        v36 = 1.0;
        v35 = 0.0;
        v34 = 0.0;
        v33 = 0;
        if ( !v15 || v14 >= (*((_DWORD *)this + 71) - v15) >> 2 )
          invalid_parameter_noinfo();
        v24 = *(_DWORD *)(*(_DWORD *)&v10[*((_DWORD *)this + 70)] + 60) + 100;
        Src = &v26;
        std::string::string(&v26, v24);
        v25 = *((_DWORD *)a2 + 70);
        if ( !v25 || i >= (*((_DWORD *)a2 + 71) - v25) >> 2 )
          invalid_parameter_noinfo();
        Texture::Load(v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39);
        goto LABEL_35;
      }
      if ( !v15 || v14 >= (*((_DWORD *)this + 71) - v15) >> 2 )
        invalid_parameter_noinfo();
      v16 = *((_DWORD *)this + 70);
      v17 = &v10[v16];
      if ( !v16 || v40 >= (*((_DWORD *)this + 71) - v16) >> 2 )
        invalid_parameter_noinfo();
      v18 = *((_DWORD *)a2 + 70);
      v19 = (char *)Src + *((_DWORD *)this + 70);
      if ( !v18 || i >= (*((_DWORD *)a2 + 71) - v18) >> 2 )
        invalid_parameter_noinfo();
      v20 = *(void **)(*(_DWORD *)v19 + 60);
      v21 = *(_DWORD *)(*(_DWORD *)v17 + 64);
      v22 = *(ShaderVar **)(v41 + *((_DWORD *)a2 + 70));
      Src = v20;
      ShaderVar::Destroy(v22);
      v39 = v21;
      *((_DWORD *)v22 + 16) = v21;
      v23 = operator new(v39);
      v38 = *(float *)&v21;
      v37 = *(float *)&Src;
      v36 = *(float *)&v23;
      *((_DWORD *)v22 + 15) = v23;
      memcpy((void *)LODWORD(v36), (const void *)LODWORD(v37), LODWORD(v38));
      *((_DWORD *)v22 + 69) = 2;
      v5 = v40;
    }
  }
  *((_DWORD *)a2 + 83) = *((_DWORD *)this + 83);
  *((_DWORD *)a2 + 84) = *((_DWORD *)this + 84);
  Material::SetEditorVars(a2);
}
