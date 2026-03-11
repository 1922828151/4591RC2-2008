/*
 * func-name: ?PasswordInputUIEvent@CPasswordInputUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x10278ed0
 * callers: 0x10005e4d
 * callees: 0x10001ab9, 0x100122ab, 0x10014a33, 0x100179a9, 0x102c9ea8
 */

void __stdcall CPasswordInputUI::PasswordInputUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  CREStatic **v6; // esi

  v6 = (CREStatic **)_RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CPasswordInputUI `RTTI Type Descriptor');
  if ( v6 )
  {
    if ( a2 == 24 )
    {
      CREStatic::SetText(v6[968], word_10322838);
    }
    else
    {
      if ( (unsigned int)(a3 - 1) <= 9 && a2 == 257 )
        CPasswordInputUI::AddNumber((CPasswordInputUI *)v6, a3);
      switch ( a3 )
      {
        case 11:
          CPasswordInputUI::Cancel((CPasswordInputUI *)v6);
          break;
        case 12:
          CPasswordInputUI::OK((CPasswordInputUI *)v6);
          break;
        case 14:
          CPasswordInputUI::BackSpace((CPasswordInputUI *)v6);
          break;
      }
    }
  }
}
