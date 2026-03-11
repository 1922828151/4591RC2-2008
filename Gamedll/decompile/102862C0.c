/*
 * func-name: ?Initialize@CRobotRoofUI@@AAEXXZ_0
 * func-address: 0x102862c0
 * callers: 0x10001f5f
 * callees: 0x1000885a, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::Initialize(CRobotRoofUI *this)
{
  int v2; // eax
  int i; // esi
  struct CREControl *Control; // eax
  struct CREControl *v5; // eax
  struct CREControl *v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebp
  struct CREControl **v9; // ecx
  void *v10; // ebp
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ebp
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ebp
  int v17; // ecx
  struct CREControl *v18; // eax
  struct CREControl *v19; // eax
  int v20; // eax
  struct CREControl *v21; // eax
  struct CREControl *v22; // eax
  int v23; // [esp-10h] [ebp-64h]
  int v24; // [esp-Ch] [ebp-60h]
  int v25; // [esp-8h] [ebp-5Ch]
  int v26; // [esp-4h] [ebp-58h]
  int j; // [esp+1Ch] [ebp-38h]
  int v28; // [esp+20h] [ebp-34h] BYREF
  int v29; // [esp+24h] [ebp-30h] BYREF
  _BYTE v30[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v31; // [esp+50h] [ebp-4h]

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v30, "DlgDatabase.xml");
  v31 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v31 = -1;
  std::string::~string(v30);
  *((_DWORD *)this + 184) = CRobotRoofUI::RobotRoofUIEvent;
  for ( i = 1; i <= 10; ++i )
  {
    Control = CREDialog::GetControl(this, i);
    *((_DWORD *)Control + 196) = 0;
    *((_DWORD *)Control + 197) = 0;
    v5 = CREDialog::GetControl(this, i);
    *((_DWORD *)v5 + 198) = 0;
    *((_DWORD *)v5 + 199) = 0;
  }
  for ( j = 21; j <= 29; ++j )
  {
    v6 = CREDialog::GetControl(this, j);
    v7 = *((_DWORD *)this + 1000);
    v28 = (int)v6;
    if ( v7 )
      v8 = (int)(*((_DWORD *)this + 1001) - v7) >> 2;
    else
      v8 = 0;
    if ( v7 && v8 < (int)(*((_DWORD *)this + 1002) - v7) >> 2 )
    {
      v9 = (struct CREControl **)*((_DWORD *)this + 1001);
      *v9 = v6;
      *((_DWORD *)this + 1001) = v9 + 1;
    }
    else
    {
      v10 = (void *)*((_DWORD *)this + 1001);
      if ( v7 > (unsigned int)v10 )
        _invalid_parameter_noinfo();
      sub_1000885A((int)&v29, (int)this + 3996, v10, (int)&v28);
    }
    v11 = *((_DWORD *)this + 1000);
    if ( v11 )
      v12 = (*((_DWORD *)this + 1001) - v11) >> 2;
    else
      v12 = 0;
    v13 = v12 - 1;
    if ( !v11 || v13 >= (*((_DWORD *)this + 1001) - v11) >> 2 )
      _invalid_parameter_noinfo();
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1000) + 4 * v13) + 524) = 5;
    v14 = *((_DWORD *)this + 1000);
    if ( v14 )
      v15 = (*((_DWORD *)this + 1001) - v14) >> 2;
    else
      v15 = 0;
    v16 = v15 - 1;
    if ( !v14 || v16 >= (*((_DWORD *)this + 1001) - v14) >> 2 )
      _invalid_parameter_noinfo();
    v17 = *(_DWORD *)(*((_DWORD *)this + 1000) + 4 * v16);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 136))(v17, 0);
  }
  v18 = CREDialog::GetControl(this, 35);
  *((_DWORD *)this + 972) = _RTDynamicCast(v18, v24, 0, &CREControl `RTTI Type Descriptor');
  v19 = CREDialog::GetControl(this, 36);
  v20 = _RTDynamicCast(v19, v23, 0, &CREControl `RTTI Type Descriptor');
  *((_DWORD *)this + 973) = v20;
  *(_BYTE *)(v20 + 789) = 0;
  CREEditBox::SetEditable(*((CREEditBox **)this + 973), 0);
  *(_DWORD *)(*((_DWORD *)this + 973) + 780) = 8;
  v21 = CREDialog::GetControl(this, 14);
  *((_DWORD *)this + 974) = _RTDynamicCast(v21, v26, 0, &CREControl `RTTI Type Descriptor');
  v22 = CREDialog::GetControl(this, 17);
  *((_DWORD *)this + 975) = _RTDynamicCast(v22, v25, 0, &CREControl `RTTI Type Descriptor');
}
