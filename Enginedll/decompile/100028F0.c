/*
 * func-name: sub_100028F0
 * func-address: 0x100028f0
 * callers: 0x10005230
 * callees: 0x10001c10, 0x10001cf0, 0x10009e80
 */

unsigned int __thiscall sub_100028F0(_BYTE *this, FILE *Stream, int a3)
{
  int v3; // esi
  int v4; // eax
  FILE *v5; // ebx
  void (__cdecl *v6)(const void *, size_t, size_t, FILE *); // ebp
  unsigned int result; // eax
  unsigned int v8; // ecx
  int v9; // edx
  unsigned int v10; // edi
  _DWORD *v11; // esi
  int v12; // eax
  unsigned int v13; // edi
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int **v18; // ebp
  _DWORD *v19; // eax
  char *v20; // ecx
  int *v21; // edx
  int v22; // eax
  char v23; // [esp-20h] [ebp-40h] BYREF
  int v24; // [esp-1Ch] [ebp-3Ch]
  int v25; // [esp-18h] [ebp-38h]
  int v26; // [esp-14h] [ebp-34h]
  int v27; // [esp-10h] [ebp-30h]
  int v28; // [esp-Ch] [ebp-2Ch]
  char *v29; // [esp-8h] [ebp-28h]
  FILE *v30; // [esp-4h] [ebp-24h]
  int Buffer; // [esp+10h] [ebp-10h] BYREF
  int v32; // [esp+14h] [ebp-Ch] BYREF
  char *v33; // [esp+18h] [ebp-8h]
  _BYTE *v34; // [esp+1Ch] [ebp-4h]

  v3 = a3;
  v4 = *(_DWORD *)(a3 + 4);
  v34 = this;
  if ( v4 )
    Buffer = (*(_DWORD *)(a3 + 8) - v4) >> 2;
  else
    Buffer = 0;
  v5 = Stream;
  v6 = (void (__cdecl *)(const void *, size_t, size_t, FILE *))fwrite;
  result = fwrite(&Buffer, 4u, 1u, Stream);
  v8 = 0;
  Stream = 0;
  if ( Buffer > 0 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v3 + 4);
      v10 = v8;
      if ( !v9 || v8 >= (*(_DWORD *)(v3 + 8) - v9) >> 2 )
        invalid_parameter_noinfo();
      v11 = *(_DWORD **)(*(_DWORD *)(v3 + 4) + 4 * v10);
      v6(&Stream, 4u, 1u, v5);
      v30 = v5;
      v33 = &v23;
      std::string::string(&v23, v11 + 46);
      sub_10001C10(v23, v24, v25, v26, v27, v28, (int)v29, v30);
      v6(v11 + 83, 4u, 1u, v5);
      v6(v11 + 84, 4u, 1u, v5);
      v6(v11 + 53, 4u, 1u, v5);
      v6(v11 + 36, 4u, 1u, v5);
      v30 = v5;
      v33 = &v23;
      Shader::GetFilename(&v23);
      sub_10001C10(v23, v24, v25, v26, v27, v28, (int)v29, v30);
      v30 = v5;
      v33 = &v23;
      std::string::string(&v23, v11 + 14);
      sub_10001C10(v23, v24, v25, v26, v27, v28, (int)v29, v30);
      v12 = v11[70];
      v13 = 0;
      v32 = v12 ? (v11[71] - v12) >> 2 : 0;
      result = ((size_t (__cdecl *)(const void *, size_t, size_t, FILE *))v6)(&v32, 4u, 1u, v5);
      while ( 1 )
      {
        v14 = v11[70];
        if ( !v14 )
          break;
        result = (v11[71] - v14) >> 2;
        if ( v13 >= result )
          break;
        v15 = v11[70];
        if ( !v15 || v13 >= (v11[71] - v15) >> 2 )
          invalid_parameter_noinfo();
        v16 = v11[70];
        v33 = (char *)(4 * v13 + v16);
        if ( !v16 || v13 >= (v11[71] - v16) >> 2 )
          invalid_parameter_noinfo();
        v17 = v11[70];
        v18 = (int **)(4 * v13 + v17);
        if ( !v17 || v13 >= (v11[71] - v17) >> 2 )
          invalid_parameter_noinfo();
        v19 = (_DWORD *)(4 * v13 + v11[70]);
        v20 = *(char **)(*(_DWORD *)v33 + 60);
        v21 = *v18;
        v30 = v5;
        v29 = v20;
        v28 = *v21;
        v22 = std::string::c_str(*v19 + 4);
        result = sub_10001CF0(v34, v22, v28, v29, v30);
        v6 = (void (__cdecl *)(const void *, size_t, size_t, FILE *))fwrite;
        ++v13;
      }
      v8 = (unsigned int)&Stream->_ptr + 1;
      Stream = (FILE *)((char *)Stream + 1);
      if ( (int)Stream >= Buffer )
        break;
      v3 = a3;
    }
  }
  return result;
}
