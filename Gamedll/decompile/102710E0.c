/*
 * func-name: ?GroupMemberUIEvent@CGroupMemberUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x102710e0
 * callers: 0x10005d1c
 * callees: 0x10007824, 0x10014aa1, 0x102c9ea8
 */

void __stdcall CGroupMemberUI::GroupMemberUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  CREDialog *v6; // eax
  float *v7; // esi
  struct CREControl *Control; // eax
  struct CREControl *v9; // eax

  v6 = (CREDialog *)_RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CGroupMemberUI `RTTI Type Descriptor');
  v7 = (float *)v6;
  if ( v6 )
  {
    if ( a2 == 24 )
    {
      if ( a5 )
      {
        Control = CREDialog::GetControl(v6, 2);
        (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, 1);
        v9 = CREDialog::GetControl((CREDialog *)v7, 3);
        (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v9 + 136))(v9, 0);
        v7[975] = *(float *)&GSeconds;
      }
    }
    else if ( a3 == 2 )
    {
      CGroupMemberUI::HideMember(v6);
    }
    else if ( a3 == 3 )
    {
      CGroupMemberUI::ShowMember(v6);
    }
  }
}
