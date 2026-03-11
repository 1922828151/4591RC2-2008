/*
 * func-name: ?DrawTextA@CREDialog@@QAEJPBDPAVCREElement@@PAUtagRECT@@_NH@Z
 * func-address: 0x100c5390
 * callers: none
 * callees: 0x100b6890, 0x10149420
 */

int __thiscall CREDialog::DrawTextA(
        CREDialog *this,
        LPCCH lpMultiByteStr,
        struct CREElement *a3,
        struct tagRECT *a4,
        bool a5,
        int a6)
{
  const wchar_t *v7; // eax

  v7 = atow(lpMultiByteStr);
  return CREDialog::DrawTextW(this, v7, a3, a4, a5, a6);
}
