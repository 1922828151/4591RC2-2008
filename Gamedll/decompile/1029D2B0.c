/*
 * func-name: sub_1029D2B0
 * func-address: 0x1029d2b0
 * callers: 0x1000d6ed
 * callees: 0x100031fc, 0x1000ac2c, 0x1000e0ac, 0x100135b6, 0x102c8d6c, 0x102c9d62, 0x102c9ea8
 */

void __thiscall sub_1029D2B0(int *this)
{
  int v2; // eax
  int v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  struct CREControl *Control; // eax
  int v9; // eax
  Input *v10; // eax
  struct CREControl *v11; // eax
  int v12; // eax
  Input *v13; // eax
  int v14; // edi
  const char *v15; // eax
  const wchar_t *v16; // eax
  int v17; // eax
  struct CREControl *v18; // eax
  int v19; // eax
  Input *v20; // eax
  int v21; // ebp
  int v22; // eax
  struct CREControl *v23; // eax
  CREStatic *v24; // edi
  const char *v25; // eax
  const wchar_t *v26; // eax
  Input *v27; // eax
  int v28; // eax
  struct CREControl *v29; // eax
  int v30; // eax
  Input *v31; // eax
  int v32; // [esp-4h] [ebp-54h]
  int v33; // [esp+0h] [ebp-50h]
  int v34; // [esp+4h] [ebp-4Ch]
  int v35; // [esp+4h] [ebp-4Ch]
  int v36; // [esp+8h] [ebp-48h]
  int v37; // [esp+8h] [ebp-48h]
  int v38; // [esp+Ch] [ebp-44h]
  int v39; // [esp+Ch] [ebp-44h]
  int v40; // [esp+Ch] [ebp-44h]
  int v41; // [esp+10h] [ebp-40h]
  int v42; // [esp+20h] [ebp-30h] BYREF
  _DWORD v43[7]; // [esp+24h] [ebp-2Ch] BYREF
  int v44; // [esp+4Ch] [ebp-4h]

  if ( this[1000] )
  {
    v2 = Input::Instance(v38);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v2 + 44))(v2, 400)
      && *(float *)&GSeconds - flt_103B7DE0 > 0.5 )
    {
      v3 = 400;
    }
    else
    {
      v4 = Input::Instance(v39);
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 44))(v4, 401) )
      {
        v3 = 401;
      }
      else
      {
        v5 = Input::Instance(v39);
        v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 124))(v5, -1);
        v3 = v6;
        if ( v6 == 1 )
        {
          v7 = this[1000];
          if ( v7 )
          {
            Control = CREDialog::GetControl((CREDialog *)this, v7);
            v9 = _RTDynamicCast(Control, 0, &CREControl `RTTI Type Descriptor', &CREButton `RTTI Type Descriptor');
            if ( v9 )
              *(_BYTE *)(v9 + 778) = 0;
            this[1000] = 0;
            v10 = (Input *)Input::Instance(v39);
            Input::FlushKeyboardBuffer(v10);
          }
          v11 = CREDialog::GetControl((CREDialog *)this, this[1000]);
          v12 = _RTDynamicCast(v11, 0, &CREControl `RTTI Type Descriptor', &CREButton `RTTI Type Descriptor');
          if ( v12 )
            *(_BYTE *)(v12 + 778) = 0;
          this[1000] = 0;
          v13 = (Input *)Input::Instance(v39);
          Input::FlushKeyboardBuffer(v13);
        }
        else if ( !v6 )
        {
          return;
        }
      }
    }
    v42 = this[1000];
    sub_1000E0AC(v39, v41);
    v36 = *(_DWORD *)sub_100031FC((int)&v42);
    sub_1000E0AC(this[1000], v3);
    v14 = sub_100135B6(v33, v34, v36);
    if ( v14 )
    {
      std::wstring::wstring(v43, &unk_10323BDC);
      v44 = 0;
      v15 = (const char *)std::string::c_str(v14 + 36);
      v16 = atow(v15);
      std::wstring::operator+=(v43, v16);
      std::wstring::operator+=(v43, &unk_10323BEC);
      v17 = CDlgMgr::Instance();
      CDlgMgr::ConfirmMessage(v17);
      v18 = CREDialog::GetControl((CREDialog *)this, this[1000]);
      v19 = _RTDynamicCast(v18, v32, 0, &CREControl `RTTI Type Descriptor');
      if ( v19 )
        *(_BYTE *)(v19 + 778) = 0;
      this[1000] = 0;
      v20 = (Input *)Input::Instance(0);
      Input::FlushKeyboardBuffer(v20);
      v44 = -1;
      std::wstring::~wstring(v43);
    }
    else
    {
      sub_1000E0AC(this[1000], v3);
      v21 = sub_1000AC2C(v35, v37);
      if ( v21 )
      {
        v22 = this[1000];
        if ( v22 > 0 )
        {
          v23 = CREDialog::GetControl((CREDialog *)this, v22);
          v24 = (CREStatic *)_RTDynamicCast(
                               v23,
                               0,
                               &CREControl `RTTI Type Descriptor',
                               &CREButton `RTTI Type Descriptor');
          if ( v24 )
          {
            v25 = (const char *)std::string::c_str(v21 + 64);
            v26 = atow(v25);
            CREStatic::SetText(v24, v26);
          }
          v27 = (Input *)Input::Instance(v40);
          Input::FlushKeyboardBuffer(v27);
        }
      }
      v28 = this[1000];
      if ( v28 > 0 )
      {
        v29 = CREDialog::GetControl((CREDialog *)this, v28);
        v30 = _RTDynamicCast(v29, 0, &CREControl `RTTI Type Descriptor', &CREButton `RTTI Type Descriptor');
        if ( v30 )
          *(_BYTE *)(v30 + 778) = 0;
        v31 = (Input *)Input::Instance(v40);
        Input::FlushKeyboardBuffer(v31);
        this[1000] = 0;
      }
    }
  }
}
