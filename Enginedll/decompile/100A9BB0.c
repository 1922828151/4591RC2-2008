/*
 * func-name: ?GetControlAtIndex@CREDialog@@QAEPAVCREControl@@H@Z
 * func-address: 0x100a9bb0
 * callers: 0x1014d460
 * callees: none
 */

struct CREControl *__thiscall CREDialog::GetControlAtIndex(CREDialog *this, int a2)
{
  if ( a2 < 0 || a2 >= *((_DWORD *)this + 192) )
    return 0;
  else
    return *(struct CREControl **)(*((_DWORD *)this + 191) + 4 * a2);
}
