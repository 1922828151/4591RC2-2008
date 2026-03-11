/*
 * func-name: ?GroupQuckCallUIEvent@CGroupQuickCallUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x10274170
 * callers: 0x10013abb
 * callees: 0x10018b15, 0x102c9ea8
 */

void __stdcall CGroupQuickCallUI::GroupQuckCallUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // esi
  int v11; // ebp
  int v12; // ecx
  unsigned int v13; // edi
  _DWORD *v14; // ebx
  int v15; // eax
  int v16; // eax

  v6 = _RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CGroupQuickCallUI `RTTI Type Descriptor');
  if ( v6 && a2 == 24 )
  {
    if ( a5 )
    {
      v7 = Input::Instance(0);
      Input::SetMaskAll(v7);
      v8 = sub_10018B15(41);
      v9 = Input::Instance(v8);
      Input::SetMask(v9);
      v10 = **(_DWORD ***)(v6 + 3880);
      v11 = v6 + 3876;
      while ( v10 != *(_DWORD **)(v11 + 4) )
      {
        v12 = *(_DWORD *)(dword_103B67B4 + 8);
        v13 = v10[2];
        v14 = (_DWORD *)(dword_103B67B4 + 8);
        if ( !v12 || v13 >= (*(_DWORD *)(dword_103B67B4 + 12) - v12) >> 2 )
          _invalid_parameter_noinfo();
        v15 = Input::Instance(*(_DWORD *)(*v14 + 4 * v13));
        Input::SetMask(v15);
        if ( v10 == *(_DWORD **)(v11 + 4) )
          _invalid_parameter_noinfo();
        v10 = (_DWORD *)*v10;
      }
    }
    else
    {
      v16 = Input::Instance(1);
      Input::SetMaskAll(v16);
    }
  }
}
