/*
 * func-name: sub_100A00D0
 * func-address: 0x100a00d0
 * callers: 0x10014aba
 * callees: 0x100091b0, 0x1000f3f8, 0x1000fd26, 0x10014952, 0x100163b0, 0x10016bee, 0x1001a5d2, 0x102bd7e0, 0x102bdb40
 */

void __thiscall sub_100A00D0(int this)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  void (__cdecl *v5)(); // ebp
  int v6; // ebx
  int v7; // ecx
  int v8; // ebp
  int v9; // ecx
  int *v10; // eax
  void *v11; // ebx
  bool v12; // zf
  int *v13; // eax
  char v14; // [esp-38h] [ebp-C4h] BYREF
  int v15; // [esp-34h] [ebp-C0h]
  int v16; // [esp-30h] [ebp-BCh]
  int v17; // [esp-2Ch] [ebp-B8h]
  int v18; // [esp-28h] [ebp-B4h]
  int v19; // [esp-24h] [ebp-B0h]
  int v20; // [esp-20h] [ebp-ACh]
  char v21; // [esp-1Ch] [ebp-A8h] BYREF
  int v22; // [esp-18h] [ebp-A4h]
  int v23; // [esp-14h] [ebp-A0h]
  int v24; // [esp-10h] [ebp-9Ch]
  int v25; // [esp-Ch] [ebp-98h]
  int v26; // [esp-8h] [ebp-94h]
  int v27; // [esp-4h] [ebp-90h]
  int v28; // [esp+18h] [ebp-74h]
  char *v29; // [esp+1Ch] [ebp-70h] BYREF
  char *v30; // [esp+24h] [ebp-68h]
  int v31; // [esp+28h] [ebp-64h]
  _BYTE v32[8]; // [esp+2Ch] [ebp-60h] BYREF
  int v33[3]; // [esp+34h] [ebp-58h] BYREF
  _BYTE v34[28]; // [esp+40h] [ebp-4Ch] BYREF
  _BYTE v35[28]; // [esp+5Ch] [ebp-30h] BYREF
  int v36; // [esp+78h] [ebp-14h]
  int v37; // [esp+88h] [ebp-4h]

  v28 = this;
  if ( *(_DWORD *)(this + 32) == -1 )
  {
    v29 = &v21;
    std::string::string(&v21, &unk_1030E94C);
    v30 = &v14;
    v37 = 0;
    std::string::string(&v14, "LogFXAction");
    LOBYTE(v37) = 1;
    Engine::Instance();
    v37 = -1;
    if ( (unsigned __int8)sub_102BD7E0(v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27) )
    {
      v30 = &v21;
      std::string::string(&v21, &unk_1030E94D);
      v29 = &v14;
      v37 = 2;
      std::string::string(&v14, "LogFXAction");
      LOBYTE(v37) = 3;
      Engine::Instance();
      v37 = -1;
      *(_DWORD *)(this + 32) = (unsigned __int8)sub_102BDB40(
                                                  v14,
                                                  v15,
                                                  v16,
                                                  v17,
                                                  v18,
                                                  v19,
                                                  v20,
                                                  v21,
                                                  v22,
                                                  v23,
                                                  v24,
                                                  v25,
                                                  v26,
                                                  v27);
    }
    else
    {
      *(_DWORD *)(this + 32) = 0;
    }
  }
  v2 = **(_DWORD **)(this + 12);
  v3 = this + 8;
LABEL_6:
  v30 = (char *)v3;
  v31 = v2;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v28 + 12);
    if ( v3 && v3 == v28 + 8 )
    {
      v5 = _invalid_parameter_noinfo;
    }
    else
    {
      v5 = _invalid_parameter_noinfo;
      _invalid_parameter_noinfo();
    }
    if ( v2 == v4 )
      break;
    if ( !v3 )
      v5();
    if ( v2 == *(_DWORD *)(v3 + 4) )
      v5();
    v6 = *(_DWORD *)(v2 + 16);
    v7 = *(_DWORD *)(v6 + 4);
    if ( !v7 )
      goto LABEL_21;
    v8 = 0;
    if ( !std::vector<Actor *>::size(v7) )
    {
LABEL_20:
      v5 = _invalid_parameter_noinfo;
LABEL_21:
      if ( v2 == *(_DWORD *)(v3 + 4) )
        v5();
      if ( *(_DWORD *)(v2 + 16) )
      {
        if ( v2 == *(_DWORD *)(v3 + 4) )
          v5();
        v9 = *(_DWORD *)(v2 + 16);
        if ( v9 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 4))(v9, 1);
        if ( v2 == *(_DWORD *)(v3 + 4) )
          v5();
        *(_DWORD *)(v2 + 16) = 0;
      }
      v10 = (int *)sub_10016BEE((int)&v29, v3, v2);
      v3 = *v10;
      v2 = v10[1];
      goto LABEL_6;
    }
    while ( !*(_DWORD *)std::vector<Actor *>::operator[](*(_DWORD *)(v6 + 4), v8) )
    {
      if ( ++v8 >= (unsigned int)std::vector<Actor *>::size(*(_DWORD *)(v6 + 4)) )
        goto LABEL_20;
    }
    if ( v2 == *(_DWORD *)(v3 + 4) )
      _invalid_parameter_noinfo();
    if ( !(unsigned __int8)sub_100163B0() )
    {
      if ( v2 == *(_DWORD *)(v3 + 4) )
        _invalid_parameter_noinfo();
      if ( *(_BYTE *)(*(_DWORD *)(v2 + 16) + 36) )
      {
        if ( v2 == *(_DWORD *)(v3 + 4) )
          _invalid_parameter_noinfo();
        sub_1001A5D2(0);
        if ( v2 == *(_DWORD *)(v3 + 4) )
          _invalid_parameter_noinfo();
        sub_1000FD26(0);
        if ( v2 == *(_DWORD *)(v3 + 4) )
          _invalid_parameter_noinfo();
        v11 = (void *)sub_1000F3F8(v34);
        v12 = v2 == *(_DWORD *)(v3 + 4);
        v37 = 4;
        if ( v12 )
          _invalid_parameter_noinfo();
        std::string::string(v35, v11);
        v36 = *(_DWORD *)(v2 + 16);
        LOBYTE(v37) = 5;
        sub_100091B0((int)v33, v35);
        LOBYTE(v37) = 4;
        std::string::~string(v35);
        v37 = -1;
        std::string::~string(v34);
        v13 = (int *)sub_10016BEE((int)v32, v3, v2);
        v3 = *v13;
        v2 = v13[1];
        goto LABEL_6;
      }
    }
    sub_10014952();
    v2 = v31;
    v3 = (int)v30;
  }
}
