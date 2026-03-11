/*
 * func-name: sub_1029FD10
 * func-address: 0x1029fd10
 * callers: 0x10005b73
 * callees: 0x10002f86
 */

int __thiscall sub_1029FD10(CTYDialog *this)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // ecx
  int *v6; // eax
  void *v7; // edi
  int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  int *v11; // eax
  void *v12; // edi
  int v13; // ebx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int *v16; // eax
  void *v17; // edi
  int v18; // ebx
  unsigned int v19; // edx
  unsigned int v20; // ecx
  int *v21; // eax
  void *v22; // edi
  int i; // esi
  struct CREControl *Control; // eax
  struct CREControl *v25; // eax
  struct CREControl *v26; // eax
  int result; // eax
  int v28; // [esp+14h] [ebp-38h] BYREF
  int v29[2]; // [esp+18h] [ebp-34h] BYREF
  _BYTE v30[32]; // [esp+20h] [ebp-2Ch] BYREF
  int v31; // [esp+48h] [ebp-4h]

  *((_DWORD *)this + 175) = 500;
  *((_DWORD *)this + 176) = 500;
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v30, "DlgDatabase.xml");
  v31 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v31 = -1;
  std::string::~string(v30);
  v3 = 201;
  v28 = 201;
  do
  {
    v4 = *((_DWORD *)this + 975);
    if ( v4 )
      v5 = (int)(*((_DWORD *)this + 976) - v4) >> 2;
    else
      v5 = 0;
    if ( v4 && v5 < (int)(*((_DWORD *)this + 977) - v4) >> 2 )
    {
      v6 = (int *)*((_DWORD *)this + 976);
      *v6 = v3;
      *((_DWORD *)this + 976) = v6 + 1;
    }
    else
    {
      v7 = (void *)*((_DWORD *)this + 976);
      if ( v4 > (unsigned int)v7 )
        _invalid_parameter_noinfo();
      sub_10002F86((int)v29, (int)this + 3896, v7, (int)&v28);
    }
    v28 = ++v3;
  }
  while ( v3 <= 222 );
  v8 = 301;
  v28 = 301;
  do
  {
    v9 = *((_DWORD *)this + 979);
    if ( v9 )
      v10 = (int)(*((_DWORD *)this + 980) - v9) >> 2;
    else
      v10 = 0;
    if ( v9 && v10 < (int)(*((_DWORD *)this + 981) - v9) >> 2 )
    {
      v11 = (int *)*((_DWORD *)this + 980);
      *v11 = v8;
      *((_DWORD *)this + 980) = v11 + 1;
    }
    else
    {
      v12 = (void *)*((_DWORD *)this + 980);
      if ( v9 > (unsigned int)v12 )
        _invalid_parameter_noinfo();
      sub_10002F86((int)v29, (int)this + 3912, v12, (int)&v28);
    }
    v28 = ++v8;
  }
  while ( v8 <= 304 );
  v13 = 401;
  v28 = 401;
  do
  {
    v14 = *((_DWORD *)this + 983);
    if ( v14 )
      v15 = (int)(*((_DWORD *)this + 984) - v14) >> 2;
    else
      v15 = 0;
    if ( v14 && v15 < (int)(*((_DWORD *)this + 985) - v14) >> 2 )
    {
      v16 = (int *)*((_DWORD *)this + 984);
      *v16 = v13;
      *((_DWORD *)this + 984) = v16 + 1;
    }
    else
    {
      v17 = (void *)*((_DWORD *)this + 984);
      if ( v14 > (unsigned int)v17 )
        _invalid_parameter_noinfo();
      sub_10002F86((int)v29, (int)this + 3928, v17, (int)&v28);
    }
    v28 = ++v13;
  }
  while ( v13 <= 407 );
  v18 = 101;
  v28 = 101;
  do
  {
    v19 = *((_DWORD *)this + 987);
    if ( v19 )
      v20 = (int)(*((_DWORD *)this + 988) - v19) >> 2;
    else
      v20 = 0;
    if ( v19 && v20 < (int)(*((_DWORD *)this + 989) - v19) >> 2 )
    {
      v21 = (int *)*((_DWORD *)this + 988);
      *v21 = v18;
      *((_DWORD *)this + 988) = v21 + 1;
    }
    else
    {
      v22 = (void *)*((_DWORD *)this + 988);
      if ( v19 > (unsigned int)v22 )
        _invalid_parameter_noinfo();
      sub_10002F86((int)v29, (int)this + 3944, v22, (int)&v28);
    }
    v28 = ++v18;
  }
  while ( v18 <= 104 );
  for ( i = 213; i <= 218; ++i )
  {
    Control = CREDialog::GetControl(this, i);
    (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)Control + 136))(Control, 0);
  }
  v25 = CREDialog::GetControl(this, 1);
  (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v25 + 136))(v25, 0);
  v26 = CREDialog::GetControl(this, 2);
  result = (*(int (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v26 + 136))(v26, 0);
  *((_DWORD *)this + 184) = sub_10008292;
  return result;
}
