/*
 * func-name: ?GetModelFrameNamesFromGroup@Editor@@QAE?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PAD@Z
 * func-address: 0x100833b0
 * callers: none
 * callees: 0x1000db00, 0x1000f380, 0x100116a0, 0x10090080, 0x1009ee50, 0x101a2500, 0x101a252e
 */

int __thiscall Editor::GetModelFrameNamesFromGroup(char *this, int a2, const char *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  unsigned int v6; // ebp
  char *v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  unsigned int i; // edi
  char *v16; // edx
  unsigned int v17; // ecx
  char *v18; // esi
  char *v19; // esi
  char *v20; // esi
  char *v21; // edi
  int v23; // esi
  char v24[4]; // [esp+1Ch] [ebp-7Ch] BYREF
  void *v25; // [esp+20h] [ebp-78h]
  unsigned int v26; // [esp+24h] [ebp-74h]
  int v27; // [esp+28h] [ebp-70h]
  int v28; // [esp+2Ch] [ebp-6Ch] BYREF
  void *v29; // [esp+30h] [ebp-68h]
  char *v30; // [esp+34h] [ebp-64h]
  int v31; // [esp+38h] [ebp-60h]
  _BYTE v32[28]; // [esp+3Ch] [ebp-5Ch] BYREF
  _BYTE v33[52]; // [esp+58h] [ebp-40h] BYREF
  int v34; // [esp+94h] [ebp-4h]

  v3 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v34 = 1;
  v5 = strlen(a3);
  if ( v5 - 3 > 0x2F )
  {
    v23 = a2;
    sub_1000F380(a2, (int)&v28);
LABEL_35:
    LOBYTE(v34) = 0;
    sub_1000DB00(&v28);
    return v23;
  }
  else
  {
    memcpy(v33, a3 + 1, v5 - 2);
    v32[v5 + 26] = 0;
    std::string::string(v32, v33);
    v6 = 0;
    LOBYTE(v34) = 2;
    v7 = this + 2260;
    while ( 1 )
    {
      v8 = *((_DWORD *)v7 + 1);
      if ( !v8 || v6 >= (*((_DWORD *)v7 + 2) - v8) / 44 )
      {
        v23 = a2;
        sub_1000F380(a2, (int)&v28);
        LOBYTE(v34) = 1;
        std::string::~string(v32);
        goto LABEL_35;
      }
      v9 = sub_10090080(v6);
      if ( (unsigned __int8)std::operator==<char>(v9, v32) )
        break;
      ++v6;
    }
    v25 = 0;
    v26 = 0;
    v27 = 0;
    LOBYTE(v34) = 3;
    while ( 1 )
    {
      v10 = sub_10090080(v6);
      v11 = *(_DWORD *)(v10 + 32);
      v12 = v10 + 28;
      if ( !v11 || v3 >= (*(_DWORD *)(v12 + 8) - v11) >> 2 )
        break;
      v13 = sub_10090080(v6);
      v14 = *(_DWORD *)(v13 + 32);
      if ( !v14 || v3 >= (*(_DWORD *)(v13 + 36) - v14) >> 2 )
        invalid_parameter_noinfo();
      ModelFrame::EnumerateMeshes(v24);
      ++v3;
    }
    for ( i = 0; ; ++i )
    {
      v16 = (char *)v25;
      if ( !v25 )
        break;
      v17 = v26;
      if ( (int)(v26 - (_DWORD)v25) >> 2 <= i )
        break;
      v18 = (char *)v25;
      if ( (unsigned int)v25 > v26 )
      {
        invalid_parameter_noinfo();
        v17 = v26;
        v16 = (char *)v25;
      }
      v19 = &v18[4 * i];
      if ( (unsigned int)v19 > v17 || v19 < v16 )
        invalid_parameter_noinfo();
      if ( (unsigned int)v19 >= v26 )
        invalid_parameter_noinfo();
      sub_100116A0(&v28, (void *)(*(_DWORD *)v19 + 44));
    }
    sub_1000F380(a2, (int)&v28);
    if ( v25 )
      operator delete(v25);
    v25 = 0;
    v26 = 0;
    v27 = 0;
    LOBYTE(v34) = 1;
    std::string::~string(v32);
    v20 = (char *)v29;
    LOBYTE(v34) = 0;
    if ( v29 )
    {
      v21 = v30;
      if ( v29 != v30 )
      {
        do
        {
          std::string::~string(v20);
          v20 += 28;
        }
        while ( v20 != v21 );
        v20 = (char *)v29;
      }
      operator delete(v20);
    }
    return a2;
  }
}
