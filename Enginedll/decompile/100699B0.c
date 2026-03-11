/*
 * func-name: ?GetBackGroundPicRect@CREDialog@@QAE?AUtagRECT@@XZ
 * func-address: 0x100699b0
 * callers: none
 * callees: none
 */

struct tagRECT *__thiscall CREDialog::GetBackGroundPicRect(CREDialog *this, struct tagRECT *__return_ptr retstr)
{
  struct tagRECT *result; // eax
  LONG v3; // edx
  LONG v4; // ecx

  result = retstr;
  retstr->left = *((_DWORD *)this + 33);
  retstr->top = *((_DWORD *)this + 34);
  v3 = *((_DWORD *)this + 35);
  v4 = *((_DWORD *)this + 36);
  retstr->right = v3;
  retstr->bottom = v4;
  return result;
}
