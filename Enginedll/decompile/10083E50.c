/*
 * func-name: ?GetActorsFromGroup@Editor@@QAE?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PAD@Z
 * func-address: 0x10083e50
 * callers: none
 * callees: 0x1000db00, 0x1000f380, 0x100116a0, 0x100194a0, 0x10090080, 0x101a2500, 0x101a252e
 */

int __thiscall Editor::GetActorsFromGroup(char *this, int a2, const char *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // esi
  char *v6; // ebp
  int v7; // eax
  int v8; // eax
  unsigned int i; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  int v15; // esi
  _DWORD *v16; // edi
  int v17; // eax
  char *v18; // esi
  char *v19; // edi
  int v21; // esi
  unsigned int v22; // [esp+10h] [ebp-98h]
  int v23; // [esp+18h] [ebp-90h] BYREF
  void *v24; // [esp+1Ch] [ebp-8Ch]
  char *v25; // [esp+20h] [ebp-88h]
  int v26; // [esp+24h] [ebp-84h]
  _BYTE v27[32]; // [esp+28h] [ebp-80h] BYREF
  unsigned int v28; // [esp+48h] [ebp-60h]
  _BYTE v29[28]; // [esp+4Ch] [ebp-5Ch] BYREF
  _BYTE v30[52]; // [esp+68h] [ebp-40h] BYREF
  int v31; // [esp+A4h] [ebp-4h]

  v24 = 0;
  v25 = 0;
  v26 = 0;
  v31 = 1;
  v4 = strlen(a3);
  if ( v4 - 3 > 0x2F )
  {
    v21 = a2;
    sub_1000F380(a2, (int)&v23);
LABEL_29:
    LOBYTE(v31) = 0;
    sub_1000DB00(&v23);
    return v21;
  }
  else
  {
    memcpy(v30, a3 + 1, v4 - 2);
    v29[v4 + 26] = 0;
    std::string::string(v27, v30);
    v5 = 0;
    LOBYTE(v31) = 2;
    v6 = this + 2260;
    while ( 1 )
    {
      v7 = *((_DWORD *)v6 + 1);
      if ( !v7 || v5 >= (*((_DWORD *)v6 + 2) - v7) / 44 )
      {
        v21 = a2;
        sub_1000F380(a2, (int)&v23);
        LOBYTE(v31) = 1;
        std::string::~string(v27);
        goto LABEL_29;
      }
      v8 = sub_10090080(v5);
      if ( (unsigned __int8)std::operator==<char>(v8, v27) )
        break;
      ++v5;
    }
    v22 = v5;
    for ( i = 0; ; ++i )
    {
      v10 = sub_10090080(v5);
      v11 = *(_DWORD *)(v10 + 32);
      v12 = v10 + 28;
      if ( !v11 || i >= (*(_DWORD *)(v12 + 8) - v11) >> 2 )
        break;
      v13 = sub_10090080(v5);
      v14 = *(_DWORD *)(v13 + 32);
      v15 = v13 + 28;
      if ( !v14 || (int)(*(_DWORD *)(v13 + 36) - v14) >> 2 <= i )
        std::vector<Actor *>::_Xran();
      if ( v14 > *(_DWORD *)(v13 + 36) )
        invalid_parameter_noinfo();
      v28 = v14;
      v16 = (_DWORD *)(v14 + 4 * i);
      if ( (unsigned int)v16 > *(_DWORD *)(v15 + 8) || (unsigned int)v16 < *(_DWORD *)(v15 + 4) )
        invalid_parameter_noinfo();
      if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 8) )
        invalid_parameter_noinfo();
      v17 = std::string::c_str(*v16 + 444);
      std::string::string(v29, v17);
      LOBYTE(v31) = 3;
      sub_100116A0(&v23, v29);
      LOBYTE(v31) = 2;
      std::string::~string(v29);
      v5 = v22;
    }
    sub_1000F380(a2, (int)&v23);
    LOBYTE(v31) = 1;
    std::string::~string(v27);
    v18 = (char *)v24;
    LOBYTE(v31) = 0;
    if ( v24 )
    {
      v19 = v25;
      if ( v24 != v25 )
      {
        do
        {
          std::string::~string(v18);
          v18 += 28;
        }
        while ( v18 != v19 );
        v18 = (char *)v24;
      }
      operator delete(v18);
    }
    return a2;
  }
}
