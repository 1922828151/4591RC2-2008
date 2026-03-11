/*
 * func-name: sub_102A2500
 * func-address: 0x102a2500
 * callers: 0x10011568
 * callees: none
 */

struct CTYDialog *__thiscall sub_102A2500(_DWORD *this, struct CTYDialog *a2)
{
  struct CTYDialog *result; // eax
  CDlgMgr *v4; // eax

  result = (struct CTYDialog *)this[990];
  if ( result == (struct CTYDialog *)-1 )
  {
    this[990] = a2;
  }
  else
  {
    v4 = (CDlgMgr *)CDlgMgr::Instance();
    result = CDlgMgr::GetDialog(v4);
    if ( result )
    {
      CREDialog::SendEvent(result, 0xF000u, 1, 0, 0, 0);
      result = a2;
    }
    this[990] = a2;
  }
  return result;
}
