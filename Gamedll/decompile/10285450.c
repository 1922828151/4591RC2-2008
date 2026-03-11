/*
 * func-name: ?OnSelectSuite@CRobotRoofUI@@QAEXJ_N@Z_0
 * func-address: 0x10285450
 * callers: 0x1000f709
 * callees: 0x1000194c, 0x10009192, 0x100160e0, 0x10017eea, 0x1001aae1, 0x102c8d6c, 0x102c9d62, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::OnSelectSuite(CRobotRoofUI *this, int a2, bool a3)
{
  int v4; // ebx
  int v5; // eax
  struct CREControl *(__thiscall *v6)(CREDialog *__hidden, int); // ebp
  struct CREControl *Control; // eax
  struct CREControl *v8; // eax
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // esi
  unsigned int j; // ebp
  int v17; // ecx
  unsigned int k; // ebp
  int v19; // ecx
  int v20; // ecx
  unsigned int m; // ebp
  int v22; // ecx
  unsigned int n; // ebp
  int v24; // ecx
  int v25; // ecx
  struct CREControl *v26; // eax
  struct CREControl *v27; // eax
  int v28; // eax
  int v29; // eax
  const char *v30; // eax
  const wchar_t *v31; // eax
  const wchar_t *v32; // eax
  int v33; // [esp-10h] [ebp-78h]
  int v34; // [esp-10h] [ebp-78h]
  int v35; // [esp-Ch] [ebp-74h]
  int v36; // [esp-Ch] [ebp-74h]
  unsigned int i; // [esp+1Ch] [ebp-4Ch]
  unsigned int v38; // [esp+1Ch] [ebp-4Ch]
  _BYTE v39[28]; // [esp+20h] [ebp-48h] BYREF
  _BYTE v40[28]; // [esp+3Ch] [ebp-2Ch] BYREF
  int v41; // [esp+64h] [ebp-4h]

  v4 = sub_1000194C(0);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 968);
    v6 = CREDialog::GetControl;
    if ( v5 != -1 )
    {
      Control = CREDialog::GetControl(this, v5 + 1);
      *(_BYTE *)(_RTDynamicCast(Control, v35, 0, &CREControl `RTTI Type Descriptor') + 778) = 0;
      v8 = CREDialog::GetControl(this, 14);
      v9 = _RTDynamicCast(v8, v33, 0, &CREControl `RTTI Type Descriptor');
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 128))(v9, 0, 0, 0);
      *((_DWORD *)this + 968) = -1;
    }
    v10 = 0;
    for ( i = 0; ; i += 80 )
    {
      v11 = *(_DWORD *)(v4 + 200);
      if ( !v11 || v10 >= (*(_DWORD *)(v4 + 204) - v11) / 80 )
        break;
      v12 = *(_DWORD *)(v4 + 200);
      if ( !v12 || v10 >= (*(_DWORD *)(v4 + 204) - v12) / 80 )
        _invalid_parameter_noinfo();
      v13 = *(_DWORD *)(v4 + 200);
      v14 = a2;
      if ( *(_DWORD *)(i + v13 + 4) == a2 )
      {
        v38 = v10;
        if ( a3 )
        {
          if ( !v13 || v10 >= (*(_DWORD *)(v4 + 204) - v13) / 80 )
            _invalid_parameter_noinfo();
          v15 = (_DWORD *)(*(_DWORD *)(v4 + 200) + 80 * v10);
          *((_DWORD *)this + 1007) = v15[9];
          CRobotRoofUI::SetCurItem(this);
          *((_DWORD *)this + 1007) = v15[10];
          CRobotRoofUI::SetCurItem(this);
          *((_DWORD *)this + 1007) = v15[11];
          CRobotRoofUI::SetCurItem(this);
          for ( j = 0; ; ++j )
          {
            v17 = v15[13];
            if ( !v17 || j >= (v15[14] - v17) >> 2 )
              break;
            *((_DWORD *)this + 1003) = j;
            CRobotRoofUI::SetWeapon(this, j, 0xFFFFFFFF);
          }
          for ( k = 0; ; ++k )
          {
            v19 = v15[13];
            if ( !v19 || k >= (v15[14] - v19) >> 2 )
              break;
            *((_DWORD *)this + 1003) = k;
            v20 = v15[13];
            if ( !v20 || k >= (v15[14] - v20) >> 2 )
              _invalid_parameter_noinfo();
            CRobotRoofUI::SetWeapon(this, k, *(_DWORD *)(v15[13] + 4 * k));
          }
          for ( m = 0; ; ++m )
          {
            v22 = v15[17];
            if ( !v22 || m >= (v15[18] - v22) >> 2 )
              break;
            *((_DWORD *)this + 1003) = m;
            CRobotRoofUI::SetSubWeapon(this, m, 0xFFFFFFFF);
          }
          for ( n = 0; ; ++n )
          {
            v24 = v15[17];
            if ( !v24 || n >= (v15[18] - v24) >> 2 )
              break;
            *((_DWORD *)this + 1003) = n;
            v25 = v15[17];
            if ( !v25 || n >= (v15[18] - v25) >> 2 )
              _invalid_parameter_noinfo();
            CRobotRoofUI::SetSubWeapon(this, n, *(_DWORD *)(v15[17] + 4 * n));
          }
          CRobotRoofUI::SelectItem(this, 0xFFFFFFFF);
          v6 = CREDialog::GetControl;
          v10 = v38;
          v14 = a2;
        }
        *((_DWORD *)this + 968) = v14;
        v26 = v6(this, v14 + 1);
        *(_BYTE *)(_RTDynamicCast(v26, v36, 0, &CREControl `RTTI Type Descriptor') + 778) = 1;
        v27 = v6(this, 14);
        v28 = _RTDynamicCast(v27, v34, 0, &CREControl `RTTI Type Descriptor');
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v28 + 128))(v28, 1, 0, 0);
        v29 = *(_DWORD *)(v4 + 200);
        if ( !v29 || v10 >= (*(_DWORD *)(v4 + 204) - v29) / 80 )
          _invalid_parameter_noinfo();
        v30 = (const char *)std::string::c_str(*(_DWORD *)(v4 + 200) + 80 * v10 + 8);
        v31 = atow(v30);
        CREEditBox::SetText(*((CREEditBox **)this + 973), v31, 0);
        std::wstring::wstring(v39, L"ROBOTROOFUI_CHANGESUITENAME");
        v41 = 0;
        Precacher::GetText(v40, v39);
        LOBYTE(v41) = 2;
        std::wstring::~wstring(v39);
        v32 = (const wchar_t *)std::wstring::c_str(v40);
        CREStatic::SetText(*((CREStatic **)this + 974), v32);
        *((_BYTE *)this + 4017) = 0;
        v41 = -1;
        std::wstring::~wstring(v40);
        return;
      }
      ++v10;
    }
  }
}
