/*
 * func-name: ?IndexOfControl@CREDialog@@QAEHPAVCREControl@@@Z
 * func-address: 0x1006cb60
 * callers: none
 * callees: none
 */

int __thiscall CREDialog::IndexOfControl(CREDialog *this, struct CREControl *a2)
{
  int v2; // edx
  struct CREControl **v3; // ecx
  int result; // eax

  if ( *((int *)this + 192) <= 0 )
    return -1;
  v2 = *((_DWORD *)this + 192);
  v3 = (struct CREControl **)*((_DWORD *)this + 191);
  result = 0;
  while ( a2 != *v3 )
  {
    ++result;
    ++v3;
    if ( result >= v2 )
      return -1;
  }
  return result;
}
