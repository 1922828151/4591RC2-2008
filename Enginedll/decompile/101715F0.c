/*
 * func-name: ?CancelSubmit@AsyncLoader@@QAE_NH@Z
 * func-address: 0x101715f0
 * callers: 0x100518e0, 0x100e4420
 * callees: 0x1001b450, 0x1010fd40, 0x1016fd00, 0x10175830
 */

char __thiscall AsyncLoader::CancelSubmit(AsyncLoader *this, int a2)
{
  _DWORD *v3; // ebp
  void *v4; // edi
  void *v5; // ebx
  int v6; // ebp
  char *v7; // eax
  void *v8; // esi
  char *v9; // ebx
  _DWORD *v10; // esi
  char *v11; // edi
  _DWORD *v12; // esi
  int v14; // ebx
  void *v15; // ebp
  void *v16; // eax
  void *v17; // ebp
  void *v18; // ebp
  int v19; // ebx
  void *v20; // edx
  void *v21; // ebp
  _DWORD *v22; // [esp+10h] [ebp-10h] BYREF
  void *v23; // [esp+14h] [ebp-Ch]
  int v24; // [esp+18h] [ebp-8h] BYREF
  void *v25; // [esp+1Ch] [ebp-4h]

  sub_1016FD00((_DWORD *)this + 44, &v22, &a2);
  v3 = v22;
  v4 = (void *)*((_DWORD *)this + 46);
  if ( !v22 || v22 != (_DWORD *)((char *)this + 180) )
    invalid_parameter_noinfo();
  v5 = v23;
  if ( v23 == v4 )
  {
    sub_1016FD00((_DWORD *)this + 84, &v24, &a2);
    v14 = v24;
    v15 = (void *)*((_DWORD *)this + 86);
    if ( !v24 || (AsyncLoader *)v24 != (AsyncLoader *)((char *)this + 340) )
      invalid_parameter_noinfo();
    v16 = v25;
    if ( v25 != v15 )
      goto LABEL_35;
    sub_1016FD00((_DWORD *)this + 94, &v24, &a2);
    v14 = v24;
    v17 = (void *)*((_DWORD *)this + 96);
    if ( !v24 || (AsyncLoader *)v24 != (AsyncLoader *)((char *)this + 380) )
      invalid_parameter_noinfo();
    v16 = v25;
    if ( v25 != v17 )
      goto LABEL_35;
    sub_1016FD00((_DWORD *)this + 54, &v24, &a2);
    v14 = v24;
    v18 = (void *)*((_DWORD *)this + 56);
    if ( !v24 || (AsyncLoader *)v24 != (AsyncLoader *)((char *)this + 220) )
      invalid_parameter_noinfo();
    v16 = v25;
    if ( v25 == v18 )
    {
      sub_1016FD00((_DWORD *)this + 74, &v24, &a2);
      v19 = v24;
      v20 = (void *)*((_DWORD *)this + 76);
      v21 = v25;
      v24 = (int)this + 300;
      v22 = (_DWORD *)v19;
      v23 = v25;
      v25 = v20;
      if ( sub_1001B450(&v22, &v24) )
      {
        sub_10175830((int)&v24, v19, v21);
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
LABEL_35:
      sub_10175830((int)&v24, v14, v16);
      return 1;
    }
  }
  else
  {
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v5 == (void *)v3[1] )
      invalid_parameter_noinfo();
    sub_1010FD40((_DWORD *)this + 104, &v24, (int)v5 + 16);
    v6 = v24;
    v7 = (char *)this + 420;
    v8 = (void *)*((_DWORD *)this + 106);
    if ( !v24 || (char *)v24 != v7 )
      invalid_parameter_noinfo();
    v9 = (char *)v25;
    if ( v25 != v8 )
    {
      if ( !v6 )
        invalid_parameter_noinfo();
      if ( v9 == *(char **)(v6 + 4) )
        invalid_parameter_noinfo();
      v10 = (_DWORD *)**((_DWORD **)v9 + 10);
      v11 = v9 + 36;
      while ( 1 )
      {
        if ( v9 == *(char **)(v6 + 4) )
          invalid_parameter_noinfo();
        if ( v10 == *((_DWORD **)v11 + 1) )
          break;
        if ( v10[2] == a2 )
        {
          if ( v10 == *((_DWORD **)v11 + 1) )
            invalid_parameter_noinfo();
          v10[10] = 0;
        }
        if ( v10 == *((_DWORD **)v11 + 1) )
          invalid_parameter_noinfo();
        v10 = (_DWORD *)*v10;
        v9 = (char *)v25;
      }
    }
    v12 = v23;
    if ( v23 == (void *)v22[1] )
      invalid_parameter_noinfo();
    v12[11] = 0;
    return 1;
  }
}
