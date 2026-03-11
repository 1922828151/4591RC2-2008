/*
 * func-name: ?ValueMax@CRENumericEdit@@QAE_NXZ
 * func-address: 0x1006b1f0
 * callers: 0x100a6880, 0x100c02d0
 * callees: none
 */

char __thiscall CRENumericEdit::ValueMax(CRENumericEdit *this)
{
  if ( *((_BYTE *)this + 696) )
  {
    if ( *((float *)this + 181) == *((float *)this + 178) )
      return 1;
  }
  else if ( *((_DWORD *)this + 177) == *((_DWORD *)this + 179) )
  {
    return 1;
  }
  return 0;
}
