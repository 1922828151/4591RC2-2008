/*
 * func-name: ?CompileAllEffects@Shader@@SAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10125860
 * callers: 0x10126010
 * callees: 0x1000dc10, 0x10125020, 0x1017b280, 0x101a2500
 */

int __cdecl Shader::CompileAllEffects(char a1)
{
  int v1; // eax
  unsigned int v2; // edi
  int i; // ebp
  _BYTE *v4; // esi
  _BYTE *v5; // ebx
  int v6; // ebp
  char *v7; // esi
  char *v8; // edi
  char v10; // [esp-28h] [ebp-98h] BYREF
  int v11; // [esp-24h] [ebp-94h]
  int v12; // [esp-20h] [ebp-90h]
  int v13; // [esp-1Ch] [ebp-8Ch]
  int v14; // [esp-18h] [ebp-88h]
  int v15; // [esp-14h] [ebp-84h]
  int v16; // [esp-10h] [ebp-80h]
  int v17; // [esp-Ch] [ebp-7Ch]
  int *v18; // [esp-8h] [ebp-78h]
  _BYTE *v19; // [esp-4h] [ebp-74h]
  int v20; // [esp+10h] [ebp-60h] BYREF
  char *v21; // [esp+14h] [ebp-5Ch] BYREF
  int v22; // [esp+1Ch] [ebp-54h] BYREF
  void *v23; // [esp+20h] [ebp-50h]
  _BYTE *v24; // [esp+24h] [ebp-4Ch]
  int v25; // [esp+28h] [ebp-48h]
  _BYTE v26[28]; // [esp+2Ch] [ebp-44h] BYREF
  _BYTE v27[28]; // [esp+48h] [ebp-28h] BYREF
  int v28; // [esp+6Ch] [ebp-4h]

  v28 = 1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( std::string::find(&a1, "Comp_", 0) == -1 )
  {
    v1 = std::string::c_str(&a1);
    sub_1017B280(v1, &v22, 2, ".*", 0);
    v2 = 0;
    for ( i = 0; ; i += 28 )
    {
      v4 = v23;
      v5 = v24;
      if ( !v23 || v2 >= (v24 - (_BYTE *)v23) / 28 )
        break;
      std::operator+<char>(v27, &a1, (char *)v23 + i);
      LOBYTE(v28) = 2;
      v20 = 0;
      std::string::string(v26, &unk_101C9DB7);
      v19 = v26;
      v18 = &v20;
      v17 = 1;
      v21 = &v10;
      LOBYTE(v28) = 3;
      std::string::string(&v10, v27);
      Shader::CompileShader(v10, v11, v12, v13, v14, v15, v16, v17, v18, (int)v19);
      LOBYTE(v28) = 2;
      std::string::~string(v26);
      LOBYTE(v28) = 1;
      std::string::~string(v27);
      ++v2;
    }
    v6 = (int)v24;
    if ( v23 > v24 )
    {
      invalid_parameter_noinfo();
      v5 = v24;
      v4 = v23;
    }
    if ( v4 > v5 )
      invalid_parameter_noinfo();
    sub_1000DC10(&v22, &v21, (int)&v22, (int)v4, (int)&v22, v6);
  }
  v7 = (char *)v23;
  LOBYTE(v28) = 0;
  if ( v23 )
  {
    v8 = v24;
    if ( v23 != v24 )
    {
      do
      {
        std::string::~string(v7);
        v7 += 28;
      }
      while ( v7 != v8 );
      v7 = (char *)v23;
    }
    operator delete(v7);
  }
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v28 = -1;
  return std::string::~string(&a1);
}
