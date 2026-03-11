/*
 * func-name: ?ValueMin@CRENumericEdit@@QAE_NXZ
 * func-address: 0x1006b230
 * callers: 0x100a6880, 0x100c02d0
 * callees: none
 */

char __thiscall CRENumericEdit::ValueMin(CRENumericEdit *this)
{
  if ( *((_BYTE *)this + 696) )
  {
    if ( *((float *)this + 182) == *((float *)this + 178) )
      return 1;
  }
  else if ( *((_DWORD *)this + 177) == *((_DWORD *)this + 180) )
  {
    return 1;
  }
  return 0;
}
