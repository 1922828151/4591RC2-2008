/*
 * func-name: ?PtInDialog@CREDialog@@QAE_NABUtagPOINT@@@Z
 * func-address: 0x100698a0
 * callers: none
 * callees: none
 */

BOOL __thiscall CREDialog::PtInDialog(CREDialog *this, const struct tagPOINT *a2)
{
  LONG v2; // edx
  LONG y; // eax
  LONG v4; // edx
  BOOL result; // eax

  v2 = *((_DWORD *)this + 173);
  result = 0;
  if ( a2->x >= v2 && a2->x <= v2 + *((_DWORD *)this + 175) )
  {
    y = a2->y;
    v4 = *((_DWORD *)this + 174);
    if ( y >= v4 && y <= v4 + *((_DWORD *)this + 176) )
      return 1;
  }
  return result;
}
