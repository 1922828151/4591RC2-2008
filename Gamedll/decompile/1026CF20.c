/*
 * func-name: ?Initialize@CDropBagUI@@QAEXXZ_0
 * func-address: 0x1026cf20
 * callers: 0x10016b0d
 * callees: 0x1000885a, 0x102c9ea8
 */

void __thiscall CDropBagUI::Initialize(CDropBagUI *this)
{
  int v2; // eax
  int i; // ebx
  struct CREControl *Control; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi
  struct CREControl **v7; // ecx
  void *v8; // edi
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // ecx
  struct CREControl *v16; // eax
  int v17; // [esp+14h] [ebp-34h] BYREF
  int v18; // [esp+18h] [ebp-30h] BYREF
  _BYTE v19[28]; // [esp+20h] [ebp-28h] BYREF
  int v20; // [esp+44h] [ebp-4h]

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v19, "DlgDatabase.xml");
  v20 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v20 = -1;
  std::string::~string(v19);
  *((_DWORD *)this + 184) = CDropBagUI::DropBagUIEvent;
  for ( i = 21; i <= 29; ++i )
  {
    Control = CREDialog::GetControl(this, i);
    v5 = *((_DWORD *)this + 998);
    v17 = (int)Control;
    if ( v5 )
      v6 = (int)(*((_DWORD *)this + 999) - v5) >> 2;
    else
      v6 = 0;
    if ( v5 && v6 < (int)(*((_DWORD *)this + 1000) - v5) >> 2 )
    {
      v7 = (struct CREControl **)*((_DWORD *)this + 999);
      *v7 = Control;
      *((_DWORD *)this + 999) = v7 + 1;
    }
    else
    {
      v8 = (void *)*((_DWORD *)this + 999);
      if ( v5 > (unsigned int)v8 )
        _invalid_parameter_noinfo();
      sub_1000885A((int)&v18, (int)this + 3988, v8, (int)&v17);
    }
    v9 = *((_DWORD *)this + 998);
    if ( v9 )
      v10 = (*((_DWORD *)this + 999) - v9) >> 2;
    else
      v10 = 0;
    v11 = v10 - 1;
    if ( !v9 || v11 >= (*((_DWORD *)this + 999) - v9) >> 2 )
      _invalid_parameter_noinfo();
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 998) + 4 * v11) + 524) = 5;
    v12 = *((_DWORD *)this + 998);
    if ( v12 )
      v13 = (*((_DWORD *)this + 999) - v12) >> 2;
    else
      v13 = 0;
    v14 = v13 - 1;
    if ( !v12 || v14 >= (*((_DWORD *)this + 999) - v12) >> 2 )
      _invalid_parameter_noinfo();
    v15 = *(_DWORD *)(*((_DWORD *)this + 998) + 4 * v14);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 136))(v15, 0);
  }
  v16 = CREDialog::GetControl(this, 30);
  *((_DWORD *)this + 991) = _RTDynamicCast(
                              v16,
                              0,
                              &CREControl `RTTI Type Descriptor',
                              &CREStatic `RTTI Type Descriptor');
}
