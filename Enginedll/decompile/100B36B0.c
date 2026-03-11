/*
 * func-name: ?Contains@CREDialog@@QAE_NPAVCREControl@@@Z
 * func-address: 0x100b36b0
 * callers: none
 * callees: none
 */

bool __thiscall CREDialog::Contains(CREDialog *this, struct CREControl *a2)
{
  int v2; // edx
  struct CREControl **v3; // ecx
  int v4; // eax

  if ( *((int *)this + 192) <= 0 )
  {
LABEL_5:
    v4 = -1;
  }
  else
  {
    v2 = *((_DWORD *)this + 192);
    v3 = (struct CREControl **)*((_DWORD *)this + 191);
    v4 = 0;
    while ( a2 != *v3 )
    {
      ++v4;
      ++v3;
      if ( v4 >= v2 )
        goto LABEL_5;
    }
  }
  return v4 != -1;
}
